// 7_7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<math.h>
#include<string.h>
char copy(char x[199],char a[199]);
int main(int argc, char* argv[])
{
	char x[199],a[199];
	gets(x);
	copy(x,a);
	puts(a);
	return 0;
}

char copy(char x[199],char a[199])
{
	int i,j = 0;
	for(i = 0;x[i] != '\0';i++)
	  if(x[i]==65||x[i]==69||x[i]==73||x[i]==79||x[i]==85||x[i]==97||x[i]==101||x[i]==105||x[i]==111||x[i]==117)
	  {
	  	a[j] = x[i];
	  	j++;
	  } 
	a[j] = '\0';
	return 0;
}

