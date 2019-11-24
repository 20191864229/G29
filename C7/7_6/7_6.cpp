// 7_6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<math.h>
#include<string.h>
void match(char a[100],char b[100]);
char a[100],b[100];
char c[200];
int main(int argc, char* argv[])
{
	gets(a);
	gets(b);
	match(a,b);
	return 0;
}

void match(char a[100],char b[100])
{
	int i,j;
	for(i = 0;a[i] != '\0';i++)
	  c[i] = a[i];
	for(j = 0;b[j] != '\0';j++)
	  c[i + j] = b[j];
	c[i + j + 1] = '\0';
	puts(c);
}

