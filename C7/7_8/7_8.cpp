// 7_8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<math.h>
void plus(int a);
int a;
int main(int argc, char* argv[])
{
scanf("%d",&a);
	plus(a);
	return 0;
}

void plus(int a)
{
	int gw,sw,bw,qw;
	gw = a % 10;
	sw = a / 10 % 10;
	bw = a / 100 % 10;
	qw = a / 1000;
	printf("%d %d %d %d",qw,bw,sw,gw);
}

