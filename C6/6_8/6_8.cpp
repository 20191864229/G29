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
	    col = 0;//Ϊ�˺�ÿһ�е�һ���Ƚϣ�֮��ɽ���������ѭ����j = 1��ʼ��
		for (j = 1; j < n; j++)//���ҵ�row�����ֵ���к�
		{            
		    if (a[row][j] > a[row][col])                
			col = j;        
		}        
		
		flag = 1;        
		
		for (i = 0; i < n; i++)//���ҵ�col����Сֵ���кţ�ȷ��a[row][col]�Ƿ�Ϊ���� 
		{
		    if (a[i][col] < a[row][col])//a[row][col]���ǰ���
			{                
			    flag = 0;                
				break;            
			}        
		}        
		if (flag) //a[row][col]�ǰ���            
		break;    
	}    
	
	if(flag)  
	  printf("%d %d %d",row+1,col+1,a[row][col]);      
	else        
	  printf("not found");
	
	return 0;
}

