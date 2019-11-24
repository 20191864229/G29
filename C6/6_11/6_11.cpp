// 6_11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	char x[] = {"*****"};
	char c = 32;
	for(int i = 1;i <= 5;i++)
	{
		printf("%s\n",x);
		for(int j = 0;j < i;j++)
		{
			printf("%c",c);
		}
	}
	return 0;
}

