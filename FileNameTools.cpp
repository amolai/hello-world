#include<stdio.h>
#include<string>
#include"FileNameTools.h"
using namespace std;

int GetDir(char *whole,char* dir)
{ 
	char *index;
	int len;                      /*���泤��*/
	index=strrchr(whole,'/');     /*����'/'���ַ���whole�дӺ��濪ʼ�ĵ�һ�γ��ֵ�λ�ã����Ӵ˵�ĩβ���Ƹ�index*/
	if(NULL==index)
	{
		strcpy(dir,"");
		return 0;
	}
	len=index-whole;
	if(NULL == dir) 
	{ 
		printf("Pointer is NULL @%s,%d",__FILE__,__LINE__); 
		return -1;
	} 

	strncpy(dir,whole,len);       /*���ַ���whole��ǰlen���ַ��������ַ���dir��*/
	dir[len]='\0';                /*�����ַ���������*/
	return len;                   /*���س���*/
}

int GetName(char *whole,char* Name)
{
    int len;                               
    char *rname,*lname;                 /*name�ַ�������ߺ��ұ�*/
    lname=strrchr(whole,'/');		//�Ѿ���GetDir��˵��	
	rname=strrchr(whole,'.');		//������չ��
	if(lname != NULL)
	{
		lname++;				//�ิ����'/'������ָ��������һλ
	    len=rname-lname;			//�õ�������չ�����ļ����ĳ���
	}
	else
	{
		len=rname-whole;
	}

	if(NULL == Name) 
	{ 
		printf("Pointer is NULL @%s,%d",__FILE__,__LINE__); 
		return -1;
	}
	if(lname != NULL)
	{
		strncpy(Name,lname,len);		//�õ�������չ�����ļ���
	}
	else{
		strncpy(Name,whole,len);
	}
    Name[len]='\0';			//�����ַ���������
    return len;				//�����ļ�������
}

int GetExt(char *whole,char* Ext)
{
   char *index;
   int len;
   index=strrchr(whole,'.');		//����չ��(Ҳ�����ļ�����׺)����
   if(NULL ==index)
   {
	   strcpy(Ext,"");
	   return 0;
   }
   index++;				//�ิ����'.'����ָ������һλ
   len=strlen(whole)-strlen(index);	//�õ���չ���ĳ���
   if(NULL == Ext) 
	{ 
		printf("Pointer is NULL @%s,%d",__FILE__,__LINE__); 
		return -1;
	}
   strncpy(Ext,index,len);		//������չ��
   Ext[len]='\0';			//�����ַ���������
   return len;				//������չ������
}


void InsertPartToFile(char *oldFileName,char* part,char* NewFileName)
{
	char dir[250];
	char name[250];
	char ext[8];
	GetDir(oldFileName,dir);
	GetName(oldFileName,name);
	GetExt(oldFileName,ext);
	strcpy(NewFileName,dir);
	strcat(NewFileName,name);
	strcat(NewFileName,"-");
	strcat(NewFileName,part);
	strcat(NewFileName,".");
	strcat(NewFileName,ext);
}


void TestFileNameTools(void)
{
	char whole[]="c:/windows/system32/abc.dll";
	char des[256];

	GetDir(whole,des);
	printf("%s\n",des);

	GetName(whole,des);
	printf("%s\n",des);

	GetExt(whole,des);
	printf("%s\n",des);

}