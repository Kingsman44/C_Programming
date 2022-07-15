#include<stdio.h>
void substring(char str[100],int pos,int l);
void main()
{
    char strdd[100];
    int pos,l;
    printf("Enter the string:");
    gets(strdd);
    printf("Enter position from where you want to extract");
    scanf("%d",&pos);
    printf("Enter the substring length");
    scanf("%d",&l);
    printf("\nString we enter is %s \n",strdd);
    substring(strdd,pos,l);
}
void substring(char str[100],int pos,int l)
{
    char sstr[100];
    int c=0;
    while(c<l)
    {
        sstr[c]=str[pos+c-1];
        c++;
    }
    sstr[c] = '\0';
    printf("The substring is %s",sstr);
}
