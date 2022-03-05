#include<stdio.h>

main() {
int i=2,n,n2=0;
printf("Enter Number :");
scanf("%d",&n);
while(i<n) {
    if(n%i==0) {
        n2=1;
        break;
    }
    i++;
}
n2==0?printf("Number is prime"):printf("Number is not prime");
}
