// 6_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int a[3][3]={1,2,3,4,5,6,7,8,9},i,j,sum=0;
	sum=a[0][0]+a[2][0]+a[1][1]+a[0][2]+a[2][2];
	printf("%d",sum);
    printf("\n");
	return 0;
}

