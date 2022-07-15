#include<stdio.h>

void search(char newa[1000],char n1[],char n2[],char n3[]) {
int i=0,j=0;
while(n1[j]!='\0') {
    newa[i]=n1[j];
    i++;
    j++;
}
newa[i]=' ';
i++;
j=0;
while(n2[j]!='\0') {
    newa[i]=n2[j];
    i++;
    j++;
}
newa[i]=' ';
i++;
j=0;
while(n3[j]!='\0') {
    newa[i]=n3[j];
    i++;
    j++;
}
}

void main() {
char c,n1[1000],n2[1000],n3[1000],newa[10000];
gets(n1);
gets(n2);
gets(n3);
search(newa,n1,n2,n3);
printf("%s",newa);
}
