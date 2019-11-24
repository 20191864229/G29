// 6_6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	  int a[10][10]={0},i,j;	
	a[0][0]=1;	
	a[1][0]=1;	
	a[1][1]=1;	
	for(i=2;i<10;i++)		
	for(j=0;j<=i;j++)		
	{			
	    if(j==0)				
		  a[i][0]=1;			
		else 				
		  a[i][j]=a[i-1][j]+a[i-1][j-1];		
	}		
	for(i=0;i<10;i++)		
	{			
	    for(j=0;j<=i;j++)				
		printf("%6d",a[i][j]);			
		printf("\n");		
	}		
	printf("\n");
	return 0;
}

