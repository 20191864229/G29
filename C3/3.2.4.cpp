#include<stdio.h>
#include<math.h>
int main()
{
	double r,m,n,P;
	r=0.015,n=5;
	m=pow(1+r,n);
	P=1000*m;
	printf("P=%.3lf",P);
	return 0;
}
