#include<stdio.h>

void read(int a[],int n);
int prime(int a[],int n);
int is_prime(int a);

void main() {
int n,tp;
printf("Enter Array lenght:");
scanf("%d",&n);
int a[n];
printf("Enter Array:");
read(a,n);
printf("Primes - ");
tp=prime(a,n);
(is_prime(tp)==1)?printf("\nKeys are secured"):printf("\nKeys are insecured");
}

void read(int a[],int n) {
for(int i=0;i<n;i++) {
    scanf("%d",&a[i]);
}
}

int prime(int a[],int n) {
int prime=0;
for(int i=0;i<n;i++) {
    int p=0;
    if(a[i]<=1) {
        p=1;
    } else {
        if(is_prime(a[i])==0) {
            p=1;
        }
    }
if(p==0) {
    prime++;
    printf("%d ",a[i]);
}
}
return prime;
}

int is_prime(int a) {
int p=0;
for(int j=2;j<a;j++) {
    if((a%j)==0) {
        p=1;
        break;
    }
}
if(p==0) {
    return 1;
} else {
    return 0;
}
}
