#include<stdio.h>
#include<math.h>
int main()
{
	double n,p,r;
	r=0.07,n=10;
	p=pow(1+r,n);
	printf("p=%.2lf",p);
	return 0;
}
