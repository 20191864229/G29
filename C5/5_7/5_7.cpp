// 5_7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
int i,j,k,sum1,sum2;
	float sum,sum3;
	sum1=sum2=sum3=0; 
	for(i=1;i<=100;i++)
	{
		sum=sum+i;
	}
	for(j=1;j<=50;j++)
	{
		sum2=sum2+j*j;
	}
	for(k=1;k<=10;k++)
	{
		sum3=sum3+1.0/k;
	}
	sum=sum1+sum2+sum3;
	printf("%f",sum);
	return 0;
}

