// 7_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<math.h>
int max(int a,int b);
int min(int a,int b);
int a,b;
int i;
int main(int argc, char* argv[])
{
	scanf("%d %d",&a,&b);
	max(a,b);
	min(a,b);
	printf("%d %d",i,a*b/i);
	return 0;
} 

int min(int a,int b)
{
	int t;
	if(a > b)
	{
		t = a;
		a = b;
		b = t;
	}
	for(i = a;i >= 2;i--)
	  if(b % i == 0)
	    return i;
	return 0;
}

int max(int a,int b)
{
	min(a,b);
	return(a*b/i);
}

