// 5_11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	float m=100,high=50,sum=100;
	int c;
	for(c=2;c<=10;c++)
	{
		sum=sum+high*2.0;
		high=high/2.0;
		if(c==10)
		{
			printf("��ʮ�����ʱ����%f m\n",sum);
			printf("��ʮ�η���%f m",high);
		}
 }
	return 0;
}

