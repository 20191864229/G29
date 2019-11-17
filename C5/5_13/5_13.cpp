// 5_13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<math.h>
int main(int argc, char* argv[])
{
	double x1=0, x2=1;
	double a;
	scanf("%lf", &a);
	while (fabs(x2 - x1) > 1e-5)
	{
		x1 = x2;
		x2 =  (x1 + a / x1)/2;
	}
	printf("%lf", x2);
	return 0;
}

