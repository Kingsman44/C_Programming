#include<stdio.h>
#include<math.h>

main() {
int n,n1,n2=0;
printf("Enter Number :");
scanf("%d",&n);
n1=n;
while(n) {
    n2+=pow((n%10),3);
    n/=10;
}
n2==n1?printf("Armstrong"):printf("No Armstrong");
}
