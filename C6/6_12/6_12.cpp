// 6_12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<string.h>
int main(int argc, char* argv[])
{
	char a[26],b[26];
	gets(a);
	printf("\n");
	int length = strlen(a);
	int i;
	
	for( i = 0;i < length;i++)
	{
		if(a[i] >= 'a'&&a[i] <= 'z')
		  b[i] = 219 - a[i];
		else if(a[i] >= 'A'&&a[i] <= 'Z')
		  b[i] = 155 - a[i];
		else
		  b[i] = a[i];
	}
	
	puts(a);
	printf("\n");
	puts(b);
	
	return 0;
}

