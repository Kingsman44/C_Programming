#include<stdio.h>
#include<math.h>

void main() {
int i=0,n,n2=0;
printf("Enter Number :");
scanf("%d",&n);
while(n) {
    n2+=pow(10,i)*(n%2);
    n/=2;
    i++;
}
printf("Binary: %d",n2);
}
