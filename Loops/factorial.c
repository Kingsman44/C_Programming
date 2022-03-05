#include<stdio.h>

main() {
int n,n2=1;
printf("Enter Number :");
scanf("%d",&n);
while(n) {
    n2*=n;
    n--;
}
printf("Factorial is %d",n2);
}
