// 4_5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "math.h"
int main(int argc, char* argv[])
{
	int a,b;
	while(scanf("%d",&a)!=EOF)
	{
	if(a>=1000)
		{
			printf("����������\n");
			continue;
		}
	else
		{
		b=sqrt(a);
		printf("ƽ����Ϊ%d\n",b);
		}
	}
	return 0;
}

