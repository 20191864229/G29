// 4_9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int x,a,b,c,d,e;  
	int i=0;
	scanf("%d",&x);
	e=x%10;
	d=(x%100)/10;
	c=(x/100)%10;
	b=(x/1000)%10;
	a=x/10000;
	if(e!=0)
	{ 
		printf("个位数为%d\n",e);		
		i++;
	} 
	else if(e==0)
	{
		if(a==0&&b==0&&c==0&&d==0)
		{
		printf("共有1位数字\n");
		printf("0\n");
		}
		printf("个位数为0\n");
		
	}	
	if(d!=0)
	{ 
		i++;
		printf("十位数为%d\n",d);		
	} 
	else if(d==0)
	{
		if(a==0&&b==0&&c==0)
		{
		printf("共有1位数字\n");
		printf("逆序为%d\n",e);
		}
		else if(a!=0||b!=0||c!=0) 
		printf("十位数为0\n");		
	}	
	if(c!=0)
		printf("百位数为%d\n",c);
	else if(c==0)
	{
		if(a==0&&b==0&&d!=0)
		{
		printf("共有2位数字\n");
		printf("逆序为%d%d\n",e,d);	
		}
		else if(a!=0||b!=0)
		printf("百位数为0\n");	
	}	
	if(b!=0)
		printf("千位数为%d\n",b);
	else if(b==0)
	{
		if(a==0&&c!=0)
		{
		printf("共有3位数字\n");
		printf("逆序为%d%d%d\n",e,d,c);
		}
		else if(a!=0)
		printf("千位数为0\n");
	}	
	if(a!=0)
	{
		printf("万位数为%d\n",a);
		printf("共有5位数字\n");
		printf("%d%d%d%d%d",e,d,c,b,a);
	}
	else if(a==0&&b!=0)
	{
		printf("共有4位数字\n");
		printf("%d%d%d%d",e,d,c,b);
	}
	return 0;
}

