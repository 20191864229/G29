#include<stdio.h>
#include<math.h>
int main()
{
	double r,h,C,S1,S2,V1,V2,P;
	printf("������뾶r���߶�h\n"); 
	scanf("%lf %lf",&r,&h);
	P=3.14;
	C=2*P*r;
	S1=P*r*r;
	S2=4*P*r*r;
	V1=4/3*P*r*r*r;
	V2=P*r*r*h;
	printf("Բ�ܳ�C=%.2lf\nԲ���S1=%.2lf\nԲ������S2=%.2lf\nԲ�����V1=%.2lf\nԲ�����V2=%.2lf",C,S1,S2,V1,V2);
	return 0;
}
