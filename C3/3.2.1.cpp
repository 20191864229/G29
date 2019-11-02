#include<stdio.h>
int main()
{
	double r,n,P;
	r=0.03,n=5;
	P=1000*(1+r)*(1+r)*(1+r)*(1+r)*(1+r);
	printf("P=%.lf",P);
	return 0;
 } 
