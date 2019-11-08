// 4_12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<math.h>
int main(int argc, char* argv[])
{
	int x1,y1,x2,y2,x3,y3,x4,y4,d1,d2,d3,d4;
	x1=2,y1=2,x2=-2,y2=2,x3=2,y3=-2,x4=-2,y4=-2;
	int m,n;
	printf("Please enter coordinate:");
	scanf("%d %d",&m,&n);
	d1=sqrt((m-x1)*(m-x1)+(n-y1)*(n-y1));
	d2=sqrt((m-x2)*(m-x2)+(n-y2)*(n-y2));
	d3=sqrt((m-x3)*(m-x3)+(n-y3)*(n-y3));
	d4=sqrt((m-x4)*(m-x4)+(n-y4)*(n-y4));
	if(d1>1&&d2>1&&d3>1&&d4>1)
	{
	    printf("0");
	}
	else
	{
		printf("10");
	}
	return 0;
}

