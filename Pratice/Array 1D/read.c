#include<stdio.h>

void input(int a[],int n) {
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
}

int sum(int a[],int n) {
    int s=0;
    for(int i=0;i<n;i++) s+=a[i];
    return s;
}

void main() {
    int n;
    printf("Enter N:");
    scanf("%d",&n);
    int ok[n];
    input(ok,n);
    printf("Sum and average is %d and %f",sum(ok,n),(float) sum(ok,n)/n);
}
