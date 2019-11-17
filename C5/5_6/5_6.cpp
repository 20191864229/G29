// 5_6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	double sum=0,n=1;
	int i;
	for(i=1;i<=20;i++)
	{
		n=n*i;
		sum=sum+n;
	}
	printf("%f",sum);
	return 0;
}

