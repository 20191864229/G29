// 4_11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	float a,b,c,d,t;
	scanf("%f %f %f %f",&a,&b,&c,&d);
	if(a>b)
	  {
	  	t=a;
	  	a=b;
	  	b=t;
	  }
	if(a>c)
	  {
	  	t=a;
	  	a=c;
	  	c=t;
	  }
	if(a>d)
	  {
	  	t=a;
	  	a=d;
	  	d=t;
	  }
	if(b>c)
	  {
	  	t=b;
	  	b=c;
	  	c=t;
	  }
	if(b>d)
	  {
	  	t=b;
	  	b=d;
	  	d=t;
	  }
	if(c>d)
	  {
	  	t=c;
	  	c=d;
	  	d=t;
	  }
	printf("%3.2f %3.2f %3.2f %3.2f",a,b,c,d);
	return 0; 
}

