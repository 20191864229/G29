// 7_10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string.h>
char a[30000],b[110],d[110];//d[]存最长字符串
int main(int argc, char* argv[])
{
	 int len,k = 0,max = -1,i = 0,len2;
    char c;
    while((c=getchar()) != '\n')
        a[i++]=c;
    a[i] = '\0';
	len = i;
    i = 0;
    while(i < len)//单词解析 
	{
        k = 0;
        while(i < len&&(a[i]==' '))
		  i++;
        while(i < len&&(a[i]!=' ')) 
		  b[k++] = a[i++];
        b[k] = '\0';
		len2 = strlen(b);
        if(len2 > 0&&len2 > max)
		{
            max = len2;
            strcpy(d,b);
        }
    }    
    printf("%s\n",d);
    return 0;
}

