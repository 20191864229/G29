// 6_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int a[10],i,j,t,k;
	for(i = 0;i < 10;i++)
	  scanf("%d",&a[i]);
	for(i = 0;i < 10;i++)
	{	
	    k = i;
	    for(j = i + 1;j < 10;j++)
	      if(a[k] >= a[j])
			k = j;
		t = a[i];
		a[i] = a[k];
	    a[k] = t;
	}
	for(i = 0;i < 10;i++)
	printf("%d ",a[i]);
    printf("\n ");
	return 0;
}

