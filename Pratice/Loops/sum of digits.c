#include<stdio.h>

void main() {
int n,s=0;
printf("Enter N: ");
scanf("%d",&n);
while(n) {
    s+=(n%10);
    n/=10;
}
printf("\n S.O.D= %d",s);
}
