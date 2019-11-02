#include<stdio.h>
#include<math.h>
int main()
{
	double r1,r2,n1,n2,P,P1;
	r1=0.0275,n1=3;
	P1=1000*(1+n1*r1);
	r2=0.021,n2=2;
	P=P1*(1+n2*r2);
	printf("P=%.2lf",P);
	return 0;
}
