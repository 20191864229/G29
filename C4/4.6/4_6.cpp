// 4_6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int a,b;
	scanf("%d",&a);
	if(a<1)
		b=a;
    if(a>=1&&a<10)
		b=2*a-1;
	if(a>=10)
		b=3*a-11;
	printf("y=%d",b);
	return 0;
}

