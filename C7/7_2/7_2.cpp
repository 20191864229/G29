// 7_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<math.h>
void big(double a,double b,double c);
void small(double a,double b,double c);
void equal(double a,double b,double c);
double a,b,c;
double t = 0.0,s = 0.0;
double ans,ans1,ans2;
int main(int argc, char* argv[])
{
	scanf("%lf %lf %lf",&a,&b,&c);
	s = b*b-4*a*c;
	t = sqrt(b*b-4*a*c);
	if(s > 0)
	  big(a,b,c);
	else if(s < 0)
	  small(a,b,c);
    else if(s == 0)
	  equal(a,b,c);
	return 0;
}
void big(double a,double b,double c)
{
	ans1 = ((-b)+t)/(2*a);
	ans2 = ((-b)-t)/(2*a);
	printf("%lf\n%lf\n",ans1,ans2);
}

void small(double a,double b,double c)
{
	printf("no roots");
}

void equal(double a,double b,double c)
{
	ans = (-b)/(2*a);
	printf("%lf\n",ans);
}
