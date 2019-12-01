// 7_12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<math.h>
#include<string.h>
double kk(double a,double b,double c,double d);
double a,b,c,d;
int main(int argc, char* argv[])
{
	scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
	printf("%0.5lf\n",kk(a,b,c,d));
	return 0;
}
double kk(double a,double b,double c,double d)
{
	double f1,f2,x = 1,x1;
	while(fabs(x-x1) >= 1e-3)
	{
		x1 = x;
		f1 = ((a*x1+b)*x1+c)*x1+d;
		f2 = (3*a*x1+2*b)*x1+c;
		x = x1 - f1/f2;
	}
	return (x);
}
