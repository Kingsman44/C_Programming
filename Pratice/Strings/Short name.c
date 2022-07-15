#include<stdio.h>
void fullname(char str[100]);
void shortname(char str[100]);
char str[100];
    char stra[20];
     char strb[20];
    char strc[20];
main()
{

    printf("enter the first name:\n");
    gets(stra);
    printf("enter the middle name:\n");
    gets(strb);
    printf("enter the last name:\n");
    gets(strc);
    printf("the first name enterd is:%s\n",stra);
    printf("the middle name enterd is:%s\n",strb);
    printf("the last name enterd is:%s\n",strc);
    fullname(str);
    shortname(str);

}
void fullname(char str[100])
{
    int c=0,d=0,e=0,f=0;
    c=strcat(stra," \0");
    d=strcat(c,strb);
    e=strcat(d," \0");
    f=strcat(e,strc);
    printf("the full name is:%s\n",f);
}
void shortname(char str[100])
{
    int i=0;
    char l,m,n;
    l=stra[i];
    m=strb[i];
    n=strc[i];
    printf("the short name is:%c%c%c\n",l,m,n);
}
