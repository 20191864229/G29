// 6_10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<string.h>
int main(int argc, char* argv[])
{
	char a[3][80];
	int i;
	for( i = 0;i < 3;i++)
	  gets(a[i]);
	
	int dxzm = 0,xxzm = 0,num = 0,kg = 0;
	
	for( i = 0;i < 2;i++)
	{
		for(int j = 0;j < 79;j++)
		{
			if(a[i][j] >= 'a'&&a[i][j] <= 'z')
		      xxzm++;
		    else if(a[i][j] >= 'A'&&a[i][j] <= 'Z')
		      dxzm++;
		    else if(a[i][j] >= '0'&&a[i][j] <= '9')
		      num++;
		    else if(a[i][j] == ' ');
		      kg++;
		}
	}
	
	printf("xxzm = %d\ndzzm = %d\nnum = %d\n = %d\n",xxzm,dxzm,num,kg);
	return 0;
}

