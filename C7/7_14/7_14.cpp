// 7_14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
int average1(int s1[10][5], int m, int n);
int average2(int s1[10][5], int m, int n);
int average3(int str1[][5], int m, int n);
int average4(int s1[10][5], int m, int n);
int a[10][5] = { 0 };
int main()
{
	for(int i = 0; i < 10; i++)
	  for(int j = 0; j < 5; j++)
	    scanf("%d",&a[i][j]);

	printf("每个学生的平均成绩\n");
	average1(a, 10, 5);
	printf("每门课的平均成绩\n");
	average2(a, 10, 5);
	average3(a, 10, 5);
	printf("平均成绩的方差\n");
	average4(a, 10, 5);
	return 0;
}


int average1(int s1[10][5], int m, int n)
{
	int i, j, sum = 0;
	int avg[10];
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			sum += s1[i][j];
		}
		avg[i] = sum / n;
		printf("%d\n", avg[i]);
		sum = 0;
	}
	return 0;
}

int average2(int s1[10][5], int m, int n)
{
	int i, j, sum = 0;
	int avg2[5];
	for (j = 0; j < 5; j++)
	{
		for (i = 0; i < 10; i++)
		{
			sum += s1[i][j];
		}
		avg2[j] = sum / n;
		printf("%d\n", avg2[j]);
		sum = 0;
	}
	return 0;
}

int average3(int str1[][5], int m, int n)
{
	int max = str1[0][0];
	int p, k, i, j;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str1[i][j] > max)
			{
				max = str1[i][j];
				k = i + 1;
				p = j + 1;
			}
		}
	}
	printf("最高分对应学生和课程\n");
	printf("max=%d,k=%d,p=%d", max, k, p);
	return 0;
}

int average4(int s1[10][5], int m, int n)
{
	int avg[50], sum = 0;
	int sum2, sum3;
	int fangcha;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum += s1[i][j];
		}
		avg[i] = sum / n;   //每个学生平均分
		sum2 += avg[i] * avg[i];
		sum = 0;
	}
	fangcha = sum2 / 5 - sum2 / 25;
	printf("%d", fangcha);
	return 0;
}
