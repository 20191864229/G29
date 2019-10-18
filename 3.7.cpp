#include<stdio.h>
#include<math.h>
int main()
{
	double r,h,C,S1,S2,V1,V2,P;
	printf("请输入半径r，高度h\n"); 
	scanf("%lf %lf",&r,&h);
	P=3.14;
	C=2*P*r;
	S1=P*r*r;
	S2=4*P*r*r;
	V1=4/3*P*r*r*r;
	V2=P*r*r*h;
	printf("圆周长C=%.2lf\n圆面积S1=%.2lf\n圆球表面积S2=%.2lf\n圆球体积V1=%.2lf\n圆柱体积V2=%.2lf",C,S1,S2,V1,V2);
	return 0;
}
