#include<stdio.h>
#include<math.h> 
int main()
{
	int d;
	double r,m,p;
	d=300000,p=6000,r=0.01;
	m=log(p/(p-d*r))/log(1+r);
	printf("m=%.1lf",m);
	return 0;
}
