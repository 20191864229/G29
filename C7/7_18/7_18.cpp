// 7_18.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int monthday[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int year,month,day,sum=0;
	scanf("%d %d %d",&year,&month,&day);
	if(year%400==0||(year%4==0&&year%100!=0)) 
	monthday[1]=29;
	for(int i=0;i<month-1;i++)
	sum+=monthday[i];
	printf("%d",sum+day);
	return 0;
}

