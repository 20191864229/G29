// 5_10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])//������ӣ������ĸ�� false,�ⲻ�ǳ˷� 
{int a1 = 1,a2 = 2,a3;
	double sum = 0.0;
	for(int i = 0;i < 20;i++){
		sum += a2 / a1;
		a3 = a1 + a2;
		a1 = a2;
		a2 = a3;
	}
	printf("%0.2lf",sum);
	return 0;
	
}

