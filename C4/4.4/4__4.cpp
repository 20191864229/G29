// 4__4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
int main(int argc, char* argv[])
{
	int a,b,c,t1,t2;
    scanf("%d %d %d",&a,&b,&c);
	if(b>a)
	{
		t1=b;
		b=a;
		a=t1;
	}
	if(c>a)
	{
		t2=c;
		c=a;
		a=t2;
	}
	printf("%d",a);
	return 0;
}

                                                                                                                                          