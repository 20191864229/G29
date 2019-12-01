// 7_9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<math.h>
#include<string.h>
char search(char a[1000]);
int letter = 0,num = 0,blank = 0,other = 0;
char a[1000];
int main()
{
	gets(a);
	search(a);
	printf("%d %d %d %d\n",letter,num,blank,other);
	return 0;
}

char search(char a[1000])
{
	int i;
	for(i = 0;a[i] != '\0';i++)
	{
		if(a[i]>=65&&a[i]<=90||a[i]>=97&&a[i]<=122)
		  letter++;
		else if(a[i]>=48&&a[i]<=57)
		  num++;
		else if(a[i] == 32)
		  blank++;
		else
		  other++;
	}
	return 0;
}

