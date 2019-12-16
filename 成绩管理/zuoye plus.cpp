// zuoye plus.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
struct student
{
	char sno[10086];
	char name[10086];
	char sex[10086];
	struct score
	{
		double China;
		double shuxue;
		double English;
		double tiyu;
		double zhengzhi;
		double shengwu;
		double wuli;
		double lishi;
		double huaxue;
		double dili;
		double sum;
		double average;
	} fenshu;
	int age;
	struct student *next;
};
typedef struct student ID;//�����ṹ��ͬ��ʣ�����ʹ��
int total;//ѧ������ϵͳ��ʵ������
//������������
ID* Create(); //����ѧ������ϵͳ
void Save(ID *head); //����ѧ����Ϣ�ļ�
ID * Read(); //��ȡѧ����Ϣ�ļ�
void Display(ID * head); //��ʾѧ����Ϣ�ļ�
ID* Add(ID* head); //���ѧ����Ϣ
ID* Change(ID* head); //�޸�ѧ����Ϣ
void Search(ID *head); //���������������Ͳ���ѧ��
ID* Delete(ID *head); //ɾ��ѧ����Ϣ
void Sort(ID *head); //���� 
ID* danke(ID* head);//¼�뵥�Ƴɼ� 
ID* mmSort(ID* head); //���Ƴɼ����ܳɼ�����  
/************************************************
*�������� main(������)
*���ܣ���ʾ���˵�
*����ֵ��NULL
*************************************************/
int main()
{
	ID*head=NULL;//����ͷ���
	int choice;//�û��˵�ѡ��
	while(1)
	{
		system("cls");//����
		printf("\n");
		printf("*************����ѧ������ϵͳ*************\n\n");
		printf("\t1.��������ѧ������ϵͳ\n\n");
		printf("\t2.��ʾѧ���ļ���Ϣ\n\n");
		printf("\t3.�����ѧ��\n\n");
		printf("\t4.�޸�ѧ������Ϣ\n\n");
		printf("\t5.����ѧ��\n\n");
		printf("\t6.ɾ��ѧ��\n\n");
		printf("\t7.����ѧ��\n\n");
		printf("\t8.���Ƴɼ�¼��\n\n");
		printf("\t8.���Ƴɼ����ܳɼ�����\n\n"); 
		printf("\t9.�˳�����ѧ������ϵͳ\n\n");
		printf("\n\n");
		printf("���������ѡ��(1~9):");
		scanf("%d",&choice);//ѡ����
		getchar();//���ջس���
		switch(choice)
        {
         	case 1: head=Create(); //����ѧ������ϵͳ�Ӻ���
            		break;
         	case 2: head=Read();   //��ȡѧ������ϵͳ�ļ��Ӻ���
                 	if(head!=NULL) 
                     	Display(head);  //��ʾѧ������ϵͳ
            		break;
         	case 3: head=Read();   //��ȡѧ������ϵͳ�ļ��Ӻ���
                 	if(head!=NULL) 
                     	head=Add(head); //�������
             		break;
         	case 4:  head=Read();  
                 	if(head!=NULL) 
                     	head=Change(head); //�޸�����
            		break;
         	case 5:  head=Read();
                 	if(head!=NULL) 
                     	Search(head); //����ѧ��
            		break;
         	case 6:  head=Read();  
                 	if(head!=NULL) 
                     	head=Delete(head); //ɾ��ѧ��
            		break;
         	case 7: head=Read(); 
                 	if(head!=NULL) 
                     	Sort(head); //����ѧ��
            		break; 
            case 8:head=Read();
            		if(head!=NULL)
            			danke(head);
            		break;
            case 9: head=Read();
					if(head!=NULL)
						mmSort(head);
					break;   //���Ƴɼ�����
         	case 10: exit(0);       //�˳�
            		break;
         	default: printf("\n��������ˣ�������������\n");
            getch();
        }
    }
}
/***********************************************
*��������Create��������
*���ܣ�����һ�������������ݷ����������棬һ����Ҫ���棬�͵���save�����������ļ���
*����ֵ��ID *���ṹ������ͷ�ڵ�ָ�룩
***********************************************/
ID* Create()
{   
    int k=0;
    FILE *fp;       //����һ���ļ�ָ�룬����fopen�ķ���ֵ���������Ĺر��ļ�
    ID *head,*p1,*tail,*p3; 
    if ((fp=fopen("student.txt","r"))==NULL)      //����ļ������ھʹ���
    {
        head=p1=tail=NULL;
        while(1)                //���ѭ������ʵ�ֶ�������ѧ����Ϣ
    	{
		    bb1:  p1= (ID*)malloc(sizeof(ID)); //��p1����һ����̬�洢�ռ�
		    p1->next=NULL;
		    printf("����������(���㲻��¼��ʱ��������������*������¼��):\n");
		    fflush(stdin);
		    scanf("%8s",p1->name);       //��������
		   	p1->name[8]=0;
		    if(strcmp(p1->name,"*")==0)   //�ж�������Ƿ�Ϊ*�ţ������������
		    { 
		        if(total==0)                //����¼����Ϊ0ʱ������ѧ���ļ�
		        {
		            printf("��������0����¼��������û�д���...\n");
		            free(p1);                  //�ͷ�p1�ռ�
		            return (head);         //��head����
		        }
		        else
		        {
		            break;                  //����whileѭ��
		        }
		    }
		    fflush(stdin);
		    printf("������ѧ�ţ� \n");
		    scanf("%11s",p1->sno);
		     
		    p3=head;      //��p3��ͷ��ʼ����
		    while(p3!=NULL)       //��p3��Ϊ��ʱ
		    {
		        if((strcmp(p1->name,p3->name)==0)&&(strcmp(p1->sno,p3->sno)==0))
		        {
		            free(p1);
		            printf("���ظ������ˡ�\n");
		            goto bb1;
		        }
		                p3=p3->next;
		    }  //ʹ��ÿ���ֶζ�����Ч����
		    p1->sno[11]=0;
			fflush(stdin);
			printf("������ѧ���Ա�:");
			scanf("%4s",p1->sex);
			fflush(stdin);
			printf("������ѧ�����䣺");
			scanf("%d",&p1->age);
			fflush(stdin);
			printf("������ѧ����Ŀ�ɼ�(���ģ���ѧ��Ӣ���ѧ���������Σ����������������ʷ)��");
			scanf("%lf%lf%lf%lf%lf%lf%lf%lf%lf%lf",&p1->fenshu.China,&p1->fenshu.shuxue,&p1->fenshu.English,&p1->fenshu.huaxue,&p1->fenshu.wuli,&p1->fenshu.zhengzhi,&p1->fenshu.dili,&p1->fenshu.shengwu,&p1->fenshu.tiyu,&p1->fenshu.lishi);
			p1->fenshu.sum=p1->fenshu.China+p1->fenshu.shuxue+p1->fenshu.English+p1->fenshu.huaxue+p1->fenshu.wuli+p1->fenshu.zhengzhi+p1->fenshu.dili+p1->fenshu.shengwu+p1->fenshu.tiyu+p1->fenshu.lishi;
			p1->fenshu.average=p1->fenshu.sum/10.0;
			if(head==NULL)
			{
			    head=p1;                //head��p2��Ϊp1
			    tail=p1;
			}
			else
			{ 
			    tail->next=p1;      //�ڶ����Ժ��ִ�����Ŀ�ľ���p1����ƣ���head��λ�ò���
			    tail=p1;
			}
			          
			total++;                //¼��һ���˺������ͼ�1
		}
	    tail->next=NULL;                     //βָ����ֵΪNULL
	    free(p1);
	    printf("\n�½�����ѧ������ϵͳ�ɹ�������%d��ѧ��\n ",total);
	    getchar();      //���getchar�����ջس�����
	    Save(head); //���´�����ѧ�������浽ѧ���ļ���
	}
	else  
	{
	    printf("\n\tѧ����Ϣ�ļ��Ѿ����ڣ������ظ�������\n\n��������������˵�\n\n");
	    getch();     //���������������һ��
	}  
	return head;        //����ͷָ�� 
}
/*void Save(ID *head)
{
}*/
/************************************************
*��������Save�����棩
*���ܣ����������ݣ��������ļ�
*����ֵ��NULL
*����������ͷ�ڵ�
*************************************************/
void Save(ID *head) 
{
	FILE *fp; //����һ���ļ�ָ�룬����fopen�ķ���ֵ���������Ĺر��ļ� 
    ID* t ; //����һ��ָ�룬��ͷ��β����һ�鵥�������ļ���д��
    if ((fp=fopen("student.txt","w"))==NULL) //���ļ���д��
    {
        printf("���ļ�ʧ�ܣ�\n");
        getch();     //���������������һ��
        exit(0); //�˳�
    }
    t=head; //��ͷָ�븳��t��������ͷ��ʼ
    while(t!=NULL) //ֻҪtָ�벻Ϊ�գ�����������û�н���
    {
       fwrite(t,sizeof(ID),1,fp); //������д���ļ���
       t=t->next; //ָ�����
    }
    fclose(fp); //���ļ��ر�
    printf("\n�ļ�����ɹ�\n");
	printf("\n�밴������������˵�\n");
	getch(); 
}
/************************************************
*��������Read����ȡѧ���ļ���
*���ܣ���ȡ�ļ��е���Ϣ��������뵥�����У�������󷵻�һ��ͷָ��
*����ֵ��ID *���ṹ��ָ�룩
*************************************************/
ID * Read()
{
    FILE *fp; //����һ���ļ�ָ�룬����fopen�ķ���ֵ���������Ĺر��ļ�
    ID *t1,*t2,*head=NULL;
    if((fp=fopen("student.txt","r"))==NULL)      //�ж��ļ��Ƿ����
    {
        printf("���ļ�ʧ�ܣ�û�и��ļ�\n\n");
  		printf("�밴������������˵�\n");
        getch();
		return 0;
    }
	rewind(fp);  //��������ǰ�һ���ļ���λ��ָ�����������ͷ����Ȼ�Ļ������һ�������ݶ�ʧ
    t1=(ID *) malloc(sizeof(ID)); //���붯̬�ռ�
    head=t2=t1; //��t1����ͷ���
    while(!feof(fp)) //feof�����Ĺ������ж�����ļ��ǲ��ǽ����ˣ���������ˣ�����һ������ֵ�����򷵻�һ��0��
    {
        if(fread(t1,sizeof(ID),1,fp)!=1) //fread�������ض���������ĸ���
           break;  //���û�ж�ȡ���ݣ������ 
        t1->next=(ID *)malloc(sizeof(ID)); //�������붯̬�ռ��ͬʱ����t1��nextָ����һ�����
        t2=t1;     //t2��������β�ڵ�
		t1=t1->next; //t1�����һ�����
    }
    t2->next=NULL; 
	fclose(fp); //�ر��ļ�
    return head; //����һ��ͷָ�룬��Ϊ��û�д���һ����������ļ���ʱ�򣬾��ǿ����ͷָ�����һϵ�еĲ�����
}
/************************************************
*�������� Display����ʾѧ���ļ���
*���ܣ���ʾ��ϵ����Ϣ
*����ֵ���޷���ֵ��
*************************************************/
void Display(ID * head)
{
	ID *t1=head;
	printf("\nѧ������==ѧ��===�Ա�===����==���ĳɼ�==��ѧ�ɼ�==Ӣ��ɼ�==��ѧ�ɼ�==����ɼ�==���γɼ�==����ɼ�==����ɼ�==�����ɼ�==��ʷ�ɼ�==�ܷ�==ƽ����\n\n");
	while(t1!=NULL)
	{
		printf("%-8s%-11s %-4s  %-4d  %-8.2f %-8.2f  %-8.2f   %-8.2f %-8.2f  %-8.2f   %-8.2f %-8.2f  %-8.2f  %-8.2f  %-8.2f %-8.2f \n",t1->name,t1->sno,t1->sex,t1->age,t1->fenshu.China,t1->fenshu.shuxue,t1->fenshu.English,t1->fenshu.huaxue,t1->fenshu.wuli,t1->fenshu.zhengzhi,t1->fenshu.dili,t1->fenshu.shengwu,t1->fenshu.tiyu,t1->fenshu.lishi,t1->fenshu.sum,t1->fenshu.average);
		t1=t1->next;
	}
	printf("\n\n����ѧ������ϵͳ�ɹ���ʾ\n");
	printf("\n�밴������������˵�\n");
	getch();
}
/************************************************
*�������� Add����ӣ�
*���ܣ����������Ϣ
*����ֵ��ID *���ṹ��ָ�룩
*************************************************/
ID* Add(ID* head)
{
    char saveflag; //���̱�־
	int k=0;
    ID *p1,*p2,*pa; //pa����������ӵ���Ϣ�ģ�p1��p2��������ʱ�ƶ���
    p1=p2=head; //�������Ƕ�����ͷָ��
    system("cls"); //����
    while(p1->next!=NULL) //��p1�Ƶ�β�ڵ�
        p1=p1->next;
	bb2:pa=(ID*)malloc(sizeof(ID)); //���붯̬�洢�ռ�
	printf("����������˵�����:\n");
	fflush(stdin);
    scanf("%8s",pa->name);
    fflush(stdin);
    printf("������ѧ��: \n");
    scanf("%11s",pa->sno);
    p2=head;      //��p2��ͷ��ʼ����
    while(p2!=NULL)       //��p2��Ϊ��ʱ
    {
      	if((strcmp(pa->name,p2->name)==0)&&(strcmp(pa->sno,p2->sno)==0))
      	{
           	free(pa);
           	printf("���ظ�������!\n");
           	goto bb2;
 		}
       	p2=p2->next;
    }
    pa->name[8]=0;   //ʹ��ÿ���ֶζ�����Ч����
    pa->sno[11]=0;
	fflush(stdin);
    printf("������ѧ���Ա�:");
	scanf("%4s",pa->sex);
	pa->sex[4]=0;
	fflush(stdin);
    printf("������ѧ�����䣺");
	scanf("%d",&pa->age);
	fflush(stdin);
    printf("������ѧ����Ŀ�ɼ�(���ģ���ѧ��Ӣ���ѧ���������Σ����������������ʷ)��");
	scanf("%lf%lf%lf%lf%lf%lf%lf%lf%lf%lf",&pa->fenshu.China,&pa->fenshu.shuxue,&pa->fenshu.English,&pa->fenshu.huaxue,&pa->fenshu.wuli,&pa->fenshu.zhengzhi,&pa->fenshu.dili,&pa->fenshu.shengwu,&pa->fenshu.tiyu,&pa->fenshu.lishi);
	pa->fenshu.sum=pa->fenshu.China+pa->fenshu.shuxue+pa->fenshu.English+pa->fenshu.huaxue+pa->fenshu.wuli+pa->fenshu.zhengzhi+pa->fenshu.dili+pa->fenshu.shengwu+pa->fenshu.tiyu+pa->fenshu.lishi;
	pa->fenshu.average=pa->fenshu.sum/10.0;
	p1->next=pa; //β�ڵ�p1��next���pa
	pa->next=NULL;
    printf("�����ѧ����Ϣ�ɹ�,�Ƿ����?(Y/N)\n");
	fflush(stdin);
	scanf("%c",&saveflag);//���̣�Y or N
	if(saveflag=='y'||saveflag=='Y')//������y Y��ʱ��
		Save(head); //���ñ��溯��
	else
	{
		printf("�밴������������˵�\n");
		getch(); 
	}
	free(pa);
    return(head); 
}
/************************************************
*�������� Change���޸ģ� 
*���ܣ��޸�������Ϣ
*����ֵ��ID *���ṹ��ָ�룩
*************************************************/
ID* Change(ID* head)
{ 
    ID *p1,*p2; 
    char saveflag; 
 	char n[10],t[12]; //��Ŵ��޸��˵�������ѧ��
	int flag=0; //�޸ı�־
    system("cls"); //����
	p1=head; 
    printf("������Ҫ�޸ĵ�ѧ�ţ�\n"); 
    scanf("%11s",t); 
    while(p1!=NULL) //���while�����������ڱ�������������
	{
  		if(strcmp(p1->sno,t)==0)//�ж��ǲ����������ѧ���ǲ��Ǻͼ���ѧ������ϵͳ�е���ͬ
  		{
			flag=1; //������һ��������ʱ��
			printf("\n��Ҫ�޸ĵ�ѧ����ϢΪ:\n");
			printf("\nѧ������==ѧ��=====�Ա�===����==���ĳɼ�==��ѧ�ɼ�==Ӣ��ɼ�==��ѧ�ɼ�==����ɼ�==���γɼ�==����ɼ�==����ɼ�==�����ɼ�==��ʷ�ɼ�==�ܷ�==ƽ����\n\n");
        	printf("%-8s%-11s  %-4s  %-4d  %-8.2f %-8.2f  %-8.2f   %-8.2f %-8.2f  %-8.2f     %-8.2f %-8.2f  %-8.2f  %-8.2f  %-8.2f %-8.2f \n",p1->name,p1->sno,p1->sex,p1->age,p1->fenshu.China,p1->fenshu.shuxue,p1->fenshu.English,p1->fenshu.huaxue,p1->fenshu.wuli,p1->fenshu.zhengzhi,p1->fenshu.dili,p1->fenshu.shengwu,p1->fenshu.tiyu,p1->fenshu.lishi,p1->fenshu.sum,p1->fenshu.average);
 			bb3:printf("\n�������޸ĺ������:\n");
			fflush(stdin);
			scanf("%8s",n);
			p2=head; //��p2��ͷ��ʼ����
			while(p2!=NULL)//��p2��Ϊ��ʱ
			{
				if((strcmp(n,p2->name)==0)&&(strcmp(t,p2->sno)==0))
				{
					printf("���ظ������ˡ�\n");
					goto bb3;
				}
				p2=p2->next;
			}
			strcpy(p1->name,n);
			p1->name[8]=0;
			fflush(stdin);
   			printf("������ѧ���Ա�:");
   			scanf("%4s",p1->sex);
			p1->sex[4]=0;
			fflush(stdin);
   			printf("������ѧ�����䣺");
   			scanf("%d",&p1->age);
   			fflush(stdin);
 			printf("������ѧ����Ŀ�ɼ�(���ģ���ѧ��Ӣ���ѧ���������Σ����������������ʷ)��");
 			scanf("%lf%lf%lf%lf%lf%lf%lf%lf%lf%lf",&p1->fenshu.China,&p1->fenshu.shuxue,&p1->fenshu.English,&p1->fenshu.huaxue,&p1->fenshu.wuli,&p1->fenshu.zhengzhi,&p1->fenshu.dili,&p1->fenshu.shengwu,&p1->fenshu.tiyu,&p1->fenshu.lishi);
 			p1->fenshu.sum=p1->fenshu.China+p1->fenshu.shuxue+p1->fenshu.English+p1->fenshu.huaxue+p1->fenshu.wuli+p1->fenshu.zhengzhi+p1->fenshu.dili+p1->fenshu.shengwu+p1->fenshu.tiyu+p1->fenshu.lishi;
 			p1->fenshu.average=p1->fenshu.sum/10.0;
			printf("��ѧ����Ϣ���޸ĳɹ�\n");
			printf("ѧ����Ϣ�Ѿ��½��ɹ�,�Ƿ���б���? (Y/N)\n");
			fflush(stdin);
			scanf("%c",&saveflag);
			if(saveflag=='y'||saveflag=='Y')//�������ǵ�ʱ��
				Save(head); //���ñ��溯��
			else
			{
				printf("�밴������������˵�\n");
				getch(); 
			}
			break;
  		}  
  		p1=p1->next;  //p1ָ�������
	}
    if(flag==0) //û��������ֵ��ˣ��������˵�
	{
        printf("\nû���ҵ�Ҫ�޸ĵ�ѧ����Ϣ���밴������������˵�!\n");
		getch(); //����������ͽ�����һ�����ĺ���
    }
	return(head);    
}
/************************************************
*��������Search����ѯ��
*���ܣ�����ͨ��������ѯ,Ҳ����ͨ�����Ͳ�ѯ
*����ֵ��NULL
*************************************************/
void Search(ID *head)
{
	int num; //�Ӳ˵�ѡ��
	int count=0;
	ID* p; 
	int flag; //flag�������ж��Ƿ��ҵ���
	char c[10],searchflag='y';//c������������������ͣ�
	char ch[12];
	while(1)
	{
		searchflag='y';
		printf("\n**************�����Ӳ˵�*******************\n");
		printf("\n\t 1.������\n");
		printf("\n\t 2.��ѧ��\n");
		printf("\n\t 3.�������˵�\n");
		printf("\n*******************************************\n");
		fflush(stdin);
		printf("����������ѡ��:\n");
		scanf("%d",&num);//ѡ������Ҫ��ѯ�ķ�ʽ 
		switch(num) 
		{
			case 1: while(searchflag=='y'||searchflag=='Y') 
			{
				count=0;
				flag=0; //��ʼ��Ϊ0
				printf("\n����������ҵ�����: \n");
				scanf("%8s",c);
				p=head; 
				while(p!=NULL)
				{
					if(strcmp(p->name,c)==0)
					{  
					  	count++;
					  	if(count==1)
							printf("\nѧ������==ѧ��=====�Ա�===����==���ĳɼ�==��ѧ�ɼ�==Ӣ��ɼ�==��ѧ�ɼ�==����ɼ�==���γɼ�==����ɼ�==����ɼ�==�����ɼ�==��ʷ�ɼ�==�ܷ�==ƽ����\n\n");
					    printf("%-8s%-11s  %-4s  %-4d  %-8.2f %-8.2f  %-8.2f   %-8.2f %-8.2f  %-8.2f     %-8.2f %-8.2f  %-8.2f  %-8.2f  %-8.2f %-8.2f \n",p->name,p->sno,p->sex,p->age,p->fenshu.China,p->fenshu.shuxue,p->fenshu.English,p->fenshu.huaxue,p->fenshu.wuli,p->fenshu.zhengzhi,p->fenshu.dili,p->fenshu.shengwu,p->fenshu.tiyu,p->fenshu.lishi,p->fenshu.sum,p->fenshu.average);
					 	flag=1; //flag��ֵΪ1����ʾΪ�Ѿ��鵽��������   
					}
					p=p->next; //p1ָ�������
				}
				if(flag==0) //��ʾû���ҵ��������
				{
					printf("\nδ���ҵ����������ļ�¼\n");
				}
				else
					printf("\n\n�ҵ���%d������Ϊ%sѧ��!\n\n",count,c);
				printf("\n������ϣ��Ƿ���Ҫ���²�ѯ�� (Y/N)\n");
				fflush(stdin);
				scanf("%c",&searchflag);//�Ƿ������ѯ��Y/N�� 
			}
			break;
			case 2: 
			while(searchflag=='y'||searchflag=='Y')
			{
				count=0;
				flag=0; //��ʼ��Ϊ0,
				printf("\n�����뱻�����˵�ѧ�ţ� \n");
				scanf("%11s",ch);
				p=head; 
				while(p!=NULL)
				{
				  	if(strcmp(p->sno,ch)==0)
				  	{
				  		count++;
				  		if(count==1)
							printf("\nѧ������==ѧ��=====�Ա�===����==���ĳɼ�==��ѧ�ɼ�==Ӣ��ɼ�==��ѧ�ɼ�==����ɼ�==���γɼ�==����ɼ�==����ɼ�==�����ɼ�==��ʷ�ɼ�==�ܷ�==ƽ����\n\n");
				        printf("%-8s%-11s  %-4s  %-4d %-8.2f %-8.2f  %-8.2f %-8.2f %-8.2f  %-8.2f     %-8.2f %-8.2f  %-8.2f  %-8.2f  %-8.2f %-8.2f \n",p->name,p->sno,p->sex,p->age,p->fenshu.China,p->fenshu.shuxue,p->fenshu.English,p->fenshu.huaxue,p->fenshu.wuli,p->fenshu.zhengzhi,p->fenshu.dili,p->fenshu.shengwu,p->fenshu.tiyu,p->fenshu.lishi,p->fenshu.sum,p->fenshu.average);
				 		flag=1; //flag��ֵΪ1����ʾΪ�Ѿ��鵽��������   
				  	}
				  	p=p->next;  //p1ָ�������
				}
				if(flag==0) //��ʾû���ҵ��������
				{
					printf("\n�Բ���,δ���ҵ����������ļ�¼\n");
				}
				else
					printf("\n\n�ҵ��˸�ѧ��!\n\n");
				printf("\n������ϣ��Ƿ���Ҫ���²�ѯ�� Y/N\n");
				fflush(stdin);
				scanf("%c",&searchflag);//�Ƿ������ѯ��Y/N��
			}
			break; 
			case 3:return;
			default :printf("��������ˣ���������������������˵�...\n");
			getch();
		}
	}
}
/************************************************
*�������� Delete��ɾ����
*���ܣ�ͨ������ѧ����ʵ��ɾ��ѧ����¼
*����ֵ��ID *���ṹ��ָ�룩
*************************************************/
ID* Delete(ID *head)
{
	ID *p1,*p2; //p1������������һ��������λҪɾ���Ľ�㣬p2��������λp1��ǰ����
    char saveflag='n', temp; //saveflag�Ƿ񱣴棬temp�Ƿ�ɾ��
 	char s[12]; //��������ѧ�� 
    p1=p2=head; //��head����p1,p2  
    printf("\n������Ҫɾ����ѧ��:\n");
    scanf("%11s",s);
	getchar();
	while(p1!=NULL)//���while�����������ڱ�������������ʱ��������һ��������ʱ��i��ֵ����������Ĺ���
	{
  		if(strcmp(p1->sno,s)==0)//�ж��ǲ���������������ǲ��Ǻ�ѧ����Ϣ�е����
  		{
			printf("��Ҫɾ����ѧ��Ϊ:\n");
   			printf("\nѧ������==ѧ��=====�Ա�===����==���ĳɼ�==��ѧ�ɼ�==Ӣ��ɼ�==��ѧ�ɼ�==����ɼ�==���γɼ�==����ɼ�==����ɼ�==�����ɼ�==��ʷ�ɼ�==�ܷ�==ƽ����\n\n");
        	printf("%-8s%-11s  %-4s  %-4d %-8.2f %-8.2f  %-8.2f %-8.2f %-8.2f  %-8.2f     %-8.2f %-8.2f  %-8.2f  %-8.2f  %-8.2f %-8.2f \n",p1->name,p1->sno,p1->sex,p1->age,p1->fenshu.China,p1->fenshu.shuxue,p1->fenshu.English,p1->fenshu.huaxue,p1->fenshu.wuli,p1->fenshu.zhengzhi,p1->fenshu.dili,p1->fenshu.shengwu,p1->fenshu.tiyu,p1->fenshu.lishi,p1->fenshu.sum,p1->fenshu.average);
			printf("��ȷ���Ƿ�Ҫɾ���ü�¼��Y/N?\n");
			fflush(stdin);
			scanf("%c",&temp);//ȷ��Ҫɾ���� 
			if(temp=='y'||temp=='Y')//�������ǵ�ʱ��
			{
  				if(p1==head)//�ж��ǲ�����ͷ���
  					head=p1->next;//��ͷ���ȥ��
  				else
 					p2->next=p1->next;//ɾ��p1��㣨p2��next��ָ��p1���¸���㣩
  				printf("��ѧ����Ϣ��ɾ���ɹ�,�Ƿ����?Y/N?\n");
  				fflush(stdin);
  				scanf("%c",&saveflag);//ȷ��Ҫ������
  				if(saveflag=='y'||saveflag=='Y')//�������ǵ�ʱ��
 					Save(head); //���ñ��溯��
  				else
				{
					printf("�밴������������˵�\n");
					getch(); 
				}
			}
		else
		{
			printf("�밴������������˵�\n");
			getch(); 
		}
		break;
  		}
  		p2=p1;
  		p1=p1->next;  //p1ָ�������
	}
	if((p1->next)==NULL&&strcmp(p1->sno,s))
	{
		printf("û���ҵ�Ҫɾ����ѧ��ѧ�ţ�������Ҫɾ����ѧ���Ƿ���ȷ\n");
		printf("�밴������������˵�\n");
		getch(); //����������ͽ�����һ�����ĺ��� 
 	}
	return(head); //returnһ���Ѿ�����޸ĵ�����ͷָ��   
}
/************************************************
*�������� Swap��������
*���ܣ��������������
*����ֵ����
*************************************************/
void Swap1(char t1[],char t2[])
{
	char t[2000]={0};
	strcpy(t,t1);
	strcpy(t1,t2);
	strcpy(t2,t);
}

void Swap2(double s1,double s2)
{
	double s;
	s=s1;
	s1=s2;
	s2=s;
}

void Swap3(int r1,int r2)
{
	int r;
	r=r1;
	r1=r2;
	r2=r;
}
/************************************************
*�������� Sort������
*���ܣ�������������ͨѶ��¼
*����ֵ��ID *���ṹ��ָ�룩
*************************************************/
void Sort(ID *head)
{
	ID  *p1,*p2;
	char saveflag='y';
	p2=NULL;
    while( head != p2)
	{
		p1 = head;
		while( p1->next!= p2 )
		{  
			if( strcmp(p1->sno,p1->next->sno)>0)
			{
				Swap1(p1->name,p1->next->name);
				Swap1(p1->sno,p1->next->sno);
				Swap1(p1->sex ,p1->next->sex );
				Swap2(p1->fenshu.China,p1->next->fenshu.China);
				Swap2(p1->fenshu.shuxue,p1->next->fenshu.shuxue);
				Swap2(p1->fenshu.English,p1->next->fenshu.English);
				Swap2(p1->fenshu.huaxue,p1->next->fenshu.huaxue);
				Swap2(p1->fenshu.wuli,p1->next->fenshu.wuli);
				Swap2(p1->fenshu.zhengzhi,p1->next->fenshu.zhengzhi);
				Swap2(p1->fenshu.dili,p1->next->fenshu.dili);
				Swap2(p1->fenshu.shengwu,p1->next->fenshu.shengwu);
				Swap2(p1->fenshu.tiyu,p1->next->fenshu.tiyu);
				Swap2(p1->fenshu.lishi,p1->next->fenshu.lishi);
				Swap2(p1->fenshu.sum,p1->next->fenshu.sum);
				Swap2(p1->fenshu.average,p1->next->fenshu.average);
				Swap3(p1->age,p1->next->age);
			 } 
		p1 = p1->next;
	    }
	p2= p1;
    }
	printf("ѧ���Ѱ��� ѧ������ ����ɹ�,�Ƿ����?Y/N?\n");
	fflush(stdin);
	scanf("%c",&saveflag);//ȷ��Ҫ������
	if(saveflag=='y'||saveflag=='Y')//�������ǵ�ʱ��
	Save(head); //���ñ��溯��
}
/************************************************
*�������� danke�����Ƴɼ����룩
*���ܣ����뵥�Ƴɼ� 
*����ֵ��ID *���ṹ��ָ�룩
*************************************************/
ID* danke(ID* head)
{
	char saveflag;
	ID  *p1,*p2;
	FILE *fp; 
	printf("\t�������ĳɼ�����������0\n");
	printf("\t������ѧ�ɼ�����������1\n");
	printf("\t����Ӣ��ɼ�����������2\n");
	printf("\t���������ɼ�����������3\n");
	printf("\t�������γɼ�����������4\n");
	printf("\t��������ɼ�����������5\n");
	printf("\t��������ɼ�����������6\n");
	printf("\t������ʷ�ɼ�����������7\n");
	printf("\t���ջ�ѧ�ɼ�����������8\n");
	printf("\t���յ���ɼ�����������9\n");
	
	int choose;
	scanf("%d",&choose);
	printf("\n");
	switch(choose)
	{
		case '0':fflush(stdin);
				printf("������ѧ��ѧ��:");
				scanf("%11s",p1->sno);
				fflush(stdin);
				printf("������ѧ����Ŀ�ɼ�(����)��");
				scanf("%lf",&p1->fenshu.China);
				break;
		case '1':fflush(stdin);
				printf("������ѧ��ѧ��:");
				scanf("%11s",p1->sno);
				fflush(stdin);
				printf("������ѧ����Ŀ�ɼ�(��ѧ)��");
				scanf("%lf",&p1->fenshu.shuxue);
				break;
		case '2':fflush(stdin);
				printf("������ѧ��ѧ��:");
				scanf("%11s",p1->sno);
				fflush(stdin);
				printf("������ѧ����Ŀ�ɼ�(Ӣ��)��");
				scanf("%lf",&p1->fenshu.English);
				break;
		case '3':fflush(stdin);
				printf("������ѧ��ѧ��:");
				scanf("%11s",p1->sno);
				fflush(stdin);
				printf("������ѧ����Ŀ�ɼ�(����)��");
				scanf("%lf",&p1->fenshu.tiyu);
				break;
		case '4':fflush(stdin);
				printf("������ѧ��ѧ��:");
				scanf("%11s",p1->sno);
				fflush(stdin);
				printf("������ѧ����Ŀ�ɼ�(����)��");
				scanf("%lf",&p1->fenshu.zhengzhi);
				break;
		case '5':fflush(stdin);
				printf("������ѧ��ѧ��:");
				scanf("%11s",p1->sno);
				fflush(stdin);
				printf("������ѧ����Ŀ�ɼ�(����)��");
				scanf("%lf",&p1->fenshu.shengwu);
				break;
		case '6':fflush(stdin);
				printf("������ѧ��ѧ��:");
				scanf("%11s",p1->sno);
				fflush(stdin);
				printf("������ѧ����Ŀ�ɼ�(����)��");
				scanf("%lf",&p1->fenshu.wuli);
				break;
		case '7':fflush(stdin);
				printf("������ѧ��ѧ��:");
				scanf("%11s",p1->sno);
				fflush(stdin);
				printf("������ѧ����Ŀ�ɼ�(��ʷ)��");
				scanf("%lf",&p1->fenshu.lishi);
				break;
		case '8':fflush(stdin);
				printf("������ѧ��ѧ��:");
				scanf("%11s",p1->sno);
				fflush(stdin);
				printf("������ѧ����Ŀ�ɼ�(��ѧ)��");
				scanf("%lf",&p1->fenshu.huaxue);
				break;
		case '9':fflush(stdin);
				printf("������ѧ��ѧ��:");
				scanf("%11s",p1->sno);
				fflush(stdin);
				printf("������ѧ����Ŀ�ɼ�(����)��");
				scanf("%lf",&p1->fenshu.dili);
				break;
			
		default: printf("\n��������ˣ�������������\n");
            	getch();
    }
    
	printf("ѧ�����Ƴɼ���¼�룬�Ƿ���̣�Y/N?\n");
	fflush(stdin);
	scanf("%c",&saveflag);
	if(saveflag=='Y'||saveflag=='y')
	Save(head);
	else
	{
		printf("�밴������������˵�\n");
		getch(); 
	}
	fclose(fp);
	return(head);
}  
/************************************************
*�������� danke���ɼ�����
*���ܣ��ɼ�����ѡ�� 
*����ֵ��ID *���ṹ��ָ�룩
*************************************************/
ID* mmSort(ID* head)
{
	int num; //�Ӳ˵�ѡ��
	ID* p; 
	char saveflag='y';
    char ch[12];
	while(1)
	{
		printf("\n**************�����Ӳ˵�*******************\n");
		printf("\n\t 1.������\n");
		printf("\n\t 2.����ѧ\n");
		printf("\n\t 3.��Ӣ��\n");
		printf("\n\t 4.������\n");
		printf("\n\t 5.����ѧ\n");
		printf("\n\t 6.������\n");
		printf("\n\t 7.������\n");
		printf("\n\t 8.����ʷ\n");
		printf("\n\t 9.������\n");
		printf("\n\t 10.������\n");
		printf("\n\t 11.���ܳɼ�\n");
		printf("\n\t 12.�������˵�\n");
		printf("\n*******************************************\n");
		fflush(stdin);
		printf("����������ѡ��:\n");
		scanf("%d",&num);//ѡ������Ҫ��ѯ������ʽ 
		switch(num) 
		{
			case 1: 
			{
				struct student temp;//����ṹ�����temp��
				int t;
				for (student* temp = head->next; temp != NULL; temp = temp->next)
				{
    				for (student* p = temp; p != NULL; p = p->next)
					{
        				if (temp->fenshu.China > p->fenshu.China)
						{
            				t = temp->fenshu.China;
            				temp->fenshu.China = p->fenshu.China;
            				p->fenshu.China = t;
        				}
    				}
				}
			} 
			break;
			case 2: 
			{
					struct student temp;//����ṹ�����temp��
				int t;
				for (student* temp = head->next; temp != NULL; temp = temp->next)
				{
    				for (student* p = temp; p != NULL; p = p->next)
					{
        				if (temp->fenshu.shuxue > p->fenshu.shuxue)
						{
            				t = temp->fenshu.shuxue;
            				temp->fenshu.shuxue = p->fenshu.shuxue;
            				p->fenshu.shuxue = t;
        				}
    				}
				}
			}
			break; 
			case 3: 
			{
				struct student temp;//����ṹ�����temp��
				int t;
				for (student* temp = head->next; temp != NULL; temp = temp->next)
				{
    				for (student* p = temp; p != NULL; p = p->next)
					{
        				if (temp->fenshu.English > p->fenshu.English)
						{
            				t = temp->fenshu.English;
            				temp->fenshu.English = p->fenshu.English;
            				p->fenshu.English = t;
        				}
    				}
				}
			}
			break; 
			case 4:
			{
				struct student temp;//����ṹ�����temp��
				int t;
				for (student* temp = head->next; temp != NULL; temp = temp->next)
				{
    				for (student* p = temp; p != NULL; p = p->next)
					{
        				if (temp->fenshu.wuli > p->fenshu.wuli)
						{
            				t = temp->fenshu.wuli;
            				temp->fenshu.wuli = p->fenshu.wuli;
            				p->fenshu.wuli = t;
        				}
    				}
				}
			}
			break; 
			case 5:
			{
				struct student temp;//����ṹ�����temp��
				int t;
				for (student* temp = head->next; temp != NULL; temp = temp->next)
				{
    				for (student* p = temp; p != NULL; p = p->next)
					{
        				if (temp->fenshu.huaxue > p->fenshu.huaxue)
						{
            				t = temp->fenshu.huaxue;
            				temp->fenshu.huaxue = p->fenshu.huaxue;
            				p->fenshu.huaxue = t;
        				}
    				}
				}
			}
			break; 
			case 6: 
			{
				struct student temp;//����ṹ�����temp��
				int t;
				for (student* temp = head->next; temp != NULL; temp = temp->next)
				{
    				for (student* p = temp; p != NULL; p = p->next)
					{
        				if (temp->fenshu.shengwu > p->fenshu.shengwu)
						{
            				t = temp->fenshu.shengwu;
            				temp->fenshu.shengwu = p->fenshu.shengwu;
            				p->fenshu.shengwu = t;
        				}
    				}
				}
			}
			break; 
			case 7: 
			{
				struct student temp;//����ṹ�����temp��
				int t;
				for (student* temp = head->next; temp != NULL; temp = temp->next)
				{
    				for (student* p = temp; p != NULL; p = p->next)
					{
        				if (temp->fenshu.zhengzhi > p->fenshu.zhengzhi)
						{
            				t = temp->fenshu.zhengzhi;
            				temp->fenshu.zhengzhi = p->fenshu.zhengzhi;
            				p->fenshu.zhengzhi = t;
        				}
    				}
				}
			}
			break; 
			case 8: 
			{
				struct student temp;//����ṹ�����temp��
				int t;
				for (student* temp = head->next; temp != NULL; temp = temp->next)
				{
    				for (student* p = temp; p != NULL; p = p->next)
					{
        				if (temp->fenshu.lishi > p->fenshu.lishi)
						{
            				t = temp->fenshu.lishi;
            				temp->fenshu.lishi = p->fenshu.lishi;
            				p->fenshu.lishi = t;
        				}
    				}
				}
			}
			break; 
			case 9: 
			{
				struct student temp;//����ṹ�����temp��
				int t;
				for (student* temp = head->next; temp != NULL; temp = temp->next)
				{
    				for (student* p = temp; p != NULL; p = p->next)
					{
        				if (temp->fenshu.dili > p->fenshu.dili)
						{
            				t = temp->fenshu.dili;
            				temp->fenshu.dili = p->fenshu.dili;
            				p->fenshu.dili = t;
        				}
    				}
				}
			}
			break; 
			case 10: 
			{
				struct student temp;//����ṹ�����temp��
				int t;
				for (student* temp = head->next; temp != NULL; temp = temp->next)
				{
    				for (student* p = temp; p != NULL; p = p->next)
					{
        				if (temp->fenshu.tiyu > p->fenshu.tiyu)
						{
            				t = temp->fenshu.tiyu;
            				temp->fenshu.tiyu = p->fenshu.tiyu;
            				p->fenshu.tiyu = t;
        				}
    				}
				}
			}
			break;
			case 11: 
			{
				struct student temp;//����ṹ�����temp��
				int t;
				for (student* temp = head->next; temp != NULL; temp = temp->next)
				{
    				for (student* p = temp; p != NULL; p = p->next)
					{
        				if (temp->fenshu.sum > p->fenshu.sum)
						{
            				t = temp->fenshu.sum;
            				temp->fenshu.sum = p->fenshu.sum;
            				p->fenshu.sum = t;
        				}
    				}
				}
			}
			break;  
			case 12:
				{
					printf("��������ˣ���������������������˵�...\n");
    				getch();
				}	
		}
	}
	Save(head);
	printf("ѧ���Ѱ��� ����ѡ�� ����ɹ�,�Ƿ����?Y/N?\n");
	fflush(stdin);
	scanf("%c",&saveflag);//ȷ��Ҫ������
	if(saveflag=='y'||saveflag=='Y')//�������ǵ�ʱ��
	Save(head); //���ñ��溯��
	return(head);
}  
