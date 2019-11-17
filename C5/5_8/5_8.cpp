// 5_8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
		int a,b,c,i;
	for(i=100;i<=999;i++)
	{
		a=i/100;
		b=i%100/10;
		c=i%100%10;
		if(i==a*a*a+b*b*b+c*c*c)
		   printf("%d\n",i);
	}
	return 0;
}

