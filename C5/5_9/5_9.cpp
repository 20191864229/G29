// 5_9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int i,j,k;
    for(i=1;i<1000;i++)
    {
        int sum=0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)//开始找所有的因子。 
			sum+=j;//所有的因子和在这。 
        }
        if(sum==i)
		{
            printf("%d its factors are ",i );//输出i。 
            for(k=1;k<i;k++)
            {
                if(i%k==0)
		        printf("%d ",k);//输出因子。 
		    } 
            printf("\n");
        }
    }    
    return 0;    
}

