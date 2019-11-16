// 6_4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
		int i, j;
	int num;
	scanf("%d", &num);	
	int a[10] = {99,88,77,66,55,44,33,22,11};	
	for (i = 0; i < 10; i++) 
	{		
	    if (a[i] <= a[i + 1]) 
		{			
		    if ((num >= a[i]) && (num < a[i + 1])) 
			{
				for (j = 8; j >= i + 1; j--)
				a[j + 1] = a[j];				
				a[i + 1] = num;break;
			}		
		} 
		else 
		{			
		    if ((num <= a[i]) && (num > a[i + 1])) 
			{				
			    for (j = 8; j >= i + 1; j--)
				a[j + 1] = a[j];				
				a[i + 1] = num;
				break;		
			}		
		}	
	}	
	for (i = 0; i < 10; i++)	
	printf("%d ", a[i]);
	printf("\n ");
	return 0;
}

