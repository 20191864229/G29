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
		printf("��λ��Ϊ%d\n",e);		
		i++;
	} 
	else if(e==0)
	{
		if(a==0&&b==0&&c==0&&d==0)
		{
		printf("����1λ����\n");
		printf("0\n");
		}
		printf("��λ��Ϊ0\n");
		
	}	
	if(d!=0)
	{ 
		i++;
		printf("ʮλ��Ϊ%d\n",d);		
	} 
	else if(d==0)
	{
		if(a==0&&b==0&&c==0)
		{
		printf("����1λ����\n");
		printf("����Ϊ%d\n",e);
		}
		else if(a!=0||b!=0||c!=0) 
		printf("ʮλ��Ϊ0\n");		
	}	
	if(c!=0)
		printf("��λ��Ϊ%d\n",c);
	else if(c==0)
	{
		if(a==0&&b==0&&d!=0)
		{
		printf("����2λ����\n");
		printf("����Ϊ%d%d\n",e,d);	
		}
		else if(a!=0||b!=0)
		printf("��λ��Ϊ0\n");	
	}	
	if(b!=0)
		printf("ǧλ��Ϊ%d\n",b);
	else if(b==0)
	{
		if(a==0&&c!=0)
		{
		printf("����3λ����\n");
		printf("����Ϊ%d%d%d\n",e,d,c);
		}
		else if(a!=0)
		printf("ǧλ��Ϊ0\n");
	}	
	if(a!=0)
	{
		printf("��λ��Ϊ%d\n",a);
		printf("����5λ����\n");
		printf("%d%d%d%d%d",e,d,c,b,a);
	}
	else if(a==0&&b!=0)
	{
		printf("����4λ����\n");
		printf("%d%d%d%d",e,d,c,b);
	}
	return 0;
}

