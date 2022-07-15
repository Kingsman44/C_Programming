#include<stdio.h>
#include<string.h>

char a[10][50]={"Ankit","Aryan","Shivan","Anant","Pradeep","Ary","Goa"};
char b[10]="abcd";
char temp[50];

void main() {
for(int i=0;i<7;i++) {
    for(int j=0;j<6-i;j++){
        int k=0;
        int replace=0;
        while((a[j][k]!='\0')&&(a[j+1][k]!='\0')) {
            if(a[j][k]>a[j+1][k]) {
                replace=1;
                break;
            } else if(a[j][k]<a[j+1][k]) {
                break;
            } else if(a[j+1][k+1]=='\0') {
                replace=1;
                break;
            }
            k++;
        }
        if(replace==1) {
            strcpy(temp,a[j]);
            strcpy(a[j],a[j+1]);
            strcpy(a[j+1],temp);
        }
    }
}
for(int i=0;i<7;i++) {
    printf("%s ",a[i]);
}
}
