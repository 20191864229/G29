// 7_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<math.h>
int ss(int x);
int x;
int main(int argc, char* argv[])
{
	scanf("%d",&x);
	if(ss(x))
	  printf("Yes");
	else
	  printf("No");
	return 0;
}
int ss(int x)
{
	for(int i = 2;i <= sqrt(x);i++)
	  if(x % i == 0)
	    return false;
	return true;
}
