// 5_14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<math.h>
int main(int argc, char* argv[])
{
double x1 = 1.5, x2 = 0;
	while (fabs(x2 - x1) > 1e-5)
	{
		x1 = x1 - (2 * x1 * x1 * x1 - 4 * x1 * x1 + 3 * x1 - 6) / (6 * x1*x1 - 8 * x1 + 3);
		x2 = x1 - (2 * x1 * x1 * x1 - 4 * x1 * x1 + 3 * x1 - 6) / (6 * x1*x1 - 8 * x1 + 3);
	}
	printf("方程在1.5附近的根为%.6lf",x2);
	return 0;
}

