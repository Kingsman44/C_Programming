#include<stdio.h>

void display(int *a,int n) {
    for(int i=0;i<n;i++) {
        printf("%d",*(a+i));
    }
}

void read(int *a,int n) {
    for(int i=0;i<n;i++) {
        scanf("%d",&*(a+i));
    }
}

void main() {
int a[10];
int p=&a;
read(p,5);
display(p,5);
}
