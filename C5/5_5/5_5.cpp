// 5_5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int a,n;//a是数字，n是位数。 
	int Sn=0,sum=0;
	int i;//i是循环的次数，表示有几位数相加。 
	printf("Please enter a,n:");
	scanf("%d %d",&a,&n);
    for(i=1;i<=n;i++)
    {
    	sum=sum+a;
    	a=a*10;
    	Sn=Sn+sum;
	}
	printf("%d",Sn);
	return 0;
}

