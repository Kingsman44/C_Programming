#include<stdio.h>
#include<math.h>

void main() {
int i=0,n,n2=0;
printf("Enter Binary :");
scanf("%d",&n);
while(n) {
    n2+=(n%10)*pow(2,i);
    n/=10;
    i++;
}
printf("Decimal: %d",n2);
}
