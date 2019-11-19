// Ë®ÏÉ»¨Êý.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<math.h>
int main(int argc, char* argv[])
{
	
	int d,a;
	double n,x,y;
	scanf("%lf",&n);
	x=pow(10,n-1);
	y=pow(10,n);
	for(a=x;a<y;a++)
	{
        int b=a,i,s=0;
		for(i=1;i<=n;i++)
		{
			d=b%10;
            s=s+pow(d,n);
			b=b/10;
		}
		if(a==s)
		printf("%d\n",a);
	}
}

