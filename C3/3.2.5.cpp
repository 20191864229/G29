#include<stdio.h>
#include<math.h>
int main()
{
	double r,m,n,P;
	r=0.0035,n=5;
	m=pow(1+r/4,4*n);
	P=1000*m;
	printf("P=%.4lf",P);
	return 0;
}
