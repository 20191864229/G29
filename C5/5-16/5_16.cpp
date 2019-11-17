// 5_16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int a, i1,i2, n;     //n为行数,a为*数
	int b=0;   ///b为" "数
	for (i1 = 1; i1 <= 7; i1 += 2)
	{
		b++;
		for (int m = 1; m <= 4 - b; m++)
		{
			printf(" ");
		}
		for (a = 1; a <= i1; a++)
		{
			printf("*");
		}
		printf("\n");
	}
	int c = 0;
	for (i2 = 5; i2 > 0; i2-=2)
	{
		c++;
			for (int k = 1; k <= c; k++)
			{
				printf(" ");
			}
			for (int n = 1; n <= i2; n++)
			{
				printf("*");
			}
			printf("\n");
	}
	return 0;
}

