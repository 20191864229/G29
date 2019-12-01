// 7_16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<math.h>
#include<string.h>
void kk(char a[100]);
char a[100];
int i,k = 1,sum = 0;
int main(int argc, char* argv[])
{
	gets(a);
    kk(a);
    return 0;
}

void kk(char a[100])
{
	for(i = strlen(a) - 1;i >= 0;i--) 
    {
        if(a[i] >= '0'&&a[i] <= '9')
          sum += (a[i] - '0')*k; 
        else if(a[i] >= 'A'&&a[i] <= 'F')
          sum += (a[i] - 'A' + 10)*k;
        else if(a[i] >= 'a'&&a[i] <= 'f')                                                                 
          sum += (a[i] - 'a' + 10)*k;
        k *= 16;                                                                         
    }
    printf("%d",sum);
}