// 6_8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	 int a[100][100];
	int n,i,j;
    scanf("%d",&n);
	
	for(i = 0; i < n; i++)
	  for(j = 0; j < n; j++)            
		scanf("%d",&a[i][j]);
	
	bool flag = 0;    
	int row, col;    
	for(row = 0; row < n; row++)    
	{        
	    col = 0;//为了和每一行第一个比较，之后可交换。所以循环从j = 1开始。
		for (j = 1; j < n; j++)//查找第row行最大值的列号
		{            
		    if (a[row][j] > a[row][col])                
			col = j;        
		}        
		
		flag = 1;        
		
		for (i = 0; i < n; i++)//查找第col列最小值的行号，确定a[row][col]是否为鞍点 
		{
		    if (a[i][col] < a[row][col])//a[row][col]不是鞍点
			{                
			    flag = 0;                
				break;            
			}        
		}        
		if (flag) //a[row][col]是鞍点            
		break;    
	}    
	
	if(flag)  
	  printf("%d %d %d",row+1,col+1,a[row][col]);      
	else        
	  printf("not found");
	
	return 0;
}

