#include<stdio.h>
#include<time.h>   
#include<math.h>
int main()
{
	double begintime, endtime;
	int a = 2, i, j;
	double t = 0;      //aΪ����������jΪÿ��ѭ������iΪ������
	begintime = clock();  //��ʱ��ʼ
	for (i = 3; i <= 1000000; i = i + 2)
	{
		double t = sqrt(i);
		for (j = 2; j <= t; j++)
		{
			if (i % j == 0)
			{
				
				break;
			}
			if (j ==floor(t))
				a++;
		}
		
	}
	endtime = clock();  //��ʱ����
	printf("�������� %d ��", a);
	printf("\n\nRunning Time��%lfs\n", (endtime - begintime) / 1000);
	return 0;
}