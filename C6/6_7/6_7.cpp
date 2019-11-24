// 6_7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"//还需再看，再找规律。

int main(int argc, char* argv[])
{
	int a[16][16];	  
	int i,j,k,p,n;			
	printf("请输入魔方阵的阶数:(1-15)：");
	scanf("%d",&n);	    	
	for(i=1;i<=n;i++)	    	  
	for(j=1;j<=n;j++)	    	    
	a[i][j]=0;	           
	j=n/2+1;	           
	a[1][j]=1;   
	for(k=2;k<=n*n;k++)	 
	{	        	
	    i=i-1;	        	
		j=j+1;	        	
		if((i<1)&&(j>n)) 	
		{	        		  
		    i=i+2;	        		  
			j=j-1;				
		}				
		else				
		{					
		    if(i<1) i=n;					
			if(j>n) j=1;  				
		}				
		if(a[i][j]==0)			
		{					 
		    a[i][j]=k;				
		}				
		else				
		{					
		    i=i+2;	        		
			j=j-1;	        	    
			a[i][j]=k;				
		}			
	}				
	for(i=1;i<=n;i++)				
	{					 
	    for(j=1;j<=n;j++)						
		printf("%5d ",a[i][j]);					   
		printf("\n");									
	}	    			
	return 0;
}

//关于魔方格：1：1放在第一行最中间一列；
//            2：从2开始直到n*n各数依次按下列规则存放；
//               每一个数存放的行比前一个数的行数减1，列数加1;
//            3:如果上一个数的行数为1，则下一个数的行数为n(指最下一行);
//            4:当上一个数的列数为n时，下一个数的列数应为1，行数减去1;
//            5:如果按上面规则确定的位置上已有数，或上一个数是第一行第n列时，则把下一个数放在上一个数的下面;