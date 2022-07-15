#include<stdio.h>

typedef struct det {
char name[50],pro[50],dir[50],pr[50];
int yr;
} tp;

void read(tp t[],int n) {
for(int i=0;i<n;i++) {
    printf("Enter Movie %d details (Name,producer,director,Production house,year\n",i+1);
    scanf("%s %s %s %s %d",t[i].name,t[i].pro,t[i].dir,t[i].pr,&t[i].yr);
}
}

void print(tp t[],int n) {
for(int i=0;i<n;i++) {
    printf("%s %s %s %s %d\n",t[i].name,t[i].pro,t[i].dir,t[i].pr,t[i].yr);
}
}

void printd(tp t[],int n) {
char a[50];
printf("Enter Director:");
scanf("%s",a);
for(int i=0;i<n;i++) {
    if(strcmp(a,t[i].dir)==0)
    printf("%s %s %s %s %d\n",t[i].name,t[i].pro,t[i].dir,t[i].pr,t[i].yr);
}
}

void printh(tp t[],int n) {
char a[50];
printf("Enter Pr House:");
scanf("%s",a);
for(int i=0;i<n;i++) {
    if(strcmp(a,t[i].pr)==0)
    printf("%s %s %s %s %d\n",t[i].name,t[i].pro,t[i].dir,t[i].pr,t[i].yr);
}
}

void sort(tp arr[],int n) {
for(int i=0; i<n-1; i++){
for(int j=0; j<n-i-1; j++){
if(arr[j].yr>arr[j+1].yr){
tp temp = arr[j];
arr[j] = arr[j+1];
arr[j+1] = temp;
}
}
}
}

void main() {
tp t[100];
int n;
printf("Enter N:");
scanf("%d",&n);
read(t,n);
sort(t,n);
print(t,n);
printd(t,n);
printh(t,n);
}
