// 4_10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	float I,bonus;
	char m;
	scanf("%f",&I);
	if(I<=100000) m='a';
	if(I>100000&&I<=200000) m='b';
	if(I>200000&&I<=400000) m='c';
	if(I>400000&&I<=600000) m='d';
	if(I>600000&&I<=1000000) m='e';
	if(I>1000000) m='f';
	switch(m)
	{
	 case'a':bonus=I*0.1;break;
	 case'b':bonus=100000*0.1+(I-100000)*0.075;break;
	 case'c':bonus=100000*0.1+100000*0.075+(I-200000)*0.05;break;
	 case'd':bonus=100000*0.1+100000*0.075+200000*0.05+(I-400000)*0.03;break;
	 case'e':bonus=100000*0.1+100000*0.075+200000*0.05+200000*0.03+(I-600000)*0.015;break;
	 case'f':bonus=100000*0.1+100000*0.075+200000*0.05+200000*0.03+400000*0.015+(I-1000000)*0.01;break;
	 default:printf("enter data error!");
	}
	printf("bonus=%8.4f\n",bonus);
	return 0;	
	
}

