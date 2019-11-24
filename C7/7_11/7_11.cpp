// 7_11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<math.h>
#include<string.h>
void sort(char a[10]);
char a[10],t;
int main(int argc, char* argv[])
{   
	for(int i = 0;i <10;i++)
	  scanf("%c",&a[i]);
	sort(a);
	printf("\n");
	return 0;
} 

void sort(char a[10])
{
	for(int i = 0;i < 10;i++)
	  for(int j = 0;j < 9 - i;j++)
		if(a[j+1] > a[j])
		{
			t = a[j];
			a[j] = a[j + 1];
			a[j + 1] = t;
		}
	for( i = 0;i < 10;i++)
	  printf("%c ",a[i]);
}

