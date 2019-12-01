// 7_4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<math.h>
void change();
int a[3][3];
int i,j,t;
int main(int argc, char* argv[])
{
	for(i = 0;i < 3;i++)
	  for(j = 0;j < 3;j++)
	    scanf("%d",&a[i][j]);
	change();
	return 0;
}

void change()
{
	for(j = 0;j < 3;j++)
	{
		for(i = 0;i < 3;i++)
		printf("%3d",a[i][j]);
		printf("\n");
	}
}