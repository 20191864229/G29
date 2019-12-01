// 7_5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
#include<math.h>
#include<string.h>
void swap(char *s);
void swapp(char &a,char &b);
char str[101],*s;
int main()
{
	gets(str);
	s = str;
	swap(s);
	printf("%s\n",str);
	return 0;
}

void swap(char *s)
{
	 int len = strlen(s);
	 for(int i = 0; i <= len/2; i++)
	   swapp(str[i],str[len - 1 - i]);
}

void swapp(char &a,char &b)
{
	int t;
	t = a;
	a = b;
	b = t;
}
