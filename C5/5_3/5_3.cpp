// 5_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
int m,n,r,a,b;
	scanf("%d %d",&m,&n);
	if(m>n)
	{
		r=m;
		m=n;
		n=r;
	}
	a=m;
	b=n;
	while(b!=0)
	{
		r=a%b;
		a=b;
		b=r;
	}
	printf("最大公约数:%d\n",a);
	printf("最小公倍数:%d\n",m*n/a);
	return 0; 	

}

