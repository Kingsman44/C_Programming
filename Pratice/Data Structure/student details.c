#include<stdio.h>

typedef struct student {
char name[50];
int rn;
int marks;
} d;

d read(d s1[100],int n) {
    for(int i=0;i<n;i++) {
        scanf("%s %d %d",s1[i].name,&s1[i].rn,&s1[i].marks);
    }
    return s1[100];
}

void max(d s1[],int n) {
    int top=0,pos=0;
    for(int i=0;i<n;i++) {
        if(top<s1[i].marks) {
            top=s1[i].marks;
            pos=i;
        }
    }
    printf("%s %d %d",s1[pos].name,s1[pos].rn,s1[pos].marks);
}

main() {
int n;
scanf("%d",&n);
printf("Enter Students:");
d d1[100];
d1[100]=read(d1,n);
max(d1,n);
}
