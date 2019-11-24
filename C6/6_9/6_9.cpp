// 6_9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<string.h>
int main(int argc, char* argv[])
{
		int a[15]={99,88,85,77,52,44,40,35,32,30,27,25,21,19,15};
	int n;
	int min = 0,max = 14,mid;
	scanf("%d",&n);
	for( min = 0,max = 14;min <= max; )
	{
		mid = (min + max) / 2;
		if(a[mid] > n)
		min = mid + 1;
		else if(a[mid] < n)
		max = mid - 1;
		else if(a[mid] == n)
		{
			printf("%d",mid + 1);
			break;
		}
	}
	if(n != a[mid])
	  printf("no munber");
	return 0;
}

