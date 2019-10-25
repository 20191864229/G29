#include<stdio.h>
#include<time.h>   
#include<math.h>
int main()
{
	double begintime, endtime;
	int a = 2, i, j;
	double t = 0;      //a为计数个数，j为每次循环量，i为被除数
	begintime = clock();  //计时开始
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
	endtime = clock();  //计时结束
	printf("共有素数 %d 个", a);
	printf("\n\nRunning Time：%lfs\n", (endtime - begintime) / 1000);
	return 0;
}