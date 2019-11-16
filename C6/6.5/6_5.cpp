// 6_5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{   int i;
	int a[5] = {8, 6, 5, 4, 1};
    int temp;
    for ( i = 0; i < 5/2; ++i)
    {
        temp = a[4-i];
        a[4-i] = a[i];
        a[i] = temp;
    }
    for ( i = 0; i < 5; ++i)
        printf("%3d", a[i]);
        printf("\n");
    return 0;
}

