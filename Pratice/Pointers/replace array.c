#include<stdio.h>

void display(int *a,int n) {
    for(int i=0;i<n;i++) {
        printf("%d ",*(a+i));
    }
    printf("\n");
}

void c(int *a,int *b,int n) {
    for(int i=0;i<n;i++) {
        int temp=*(a+i);
        *(a+i)=*(b+i);
        *(b+i)=temp;
    }
}

void read(int *a,int n) {
    for(int i=0;i<n;i++) {
        scanf("%d",&*(a+i));
    }
}

void main() {
int a[10],b[10],n;
printf("Enter N:");
int p=&a,q=&b;
scanf("%d",&n);
read(p,n);
read(q,n);
c(p,q,n);
display(p,n);
display(q,n);
}
