#include<stdio.h>

main() {
int n,n1,n2=0;
printf("Enter Number :");
scanf("%d",&n);
n1=n;
while(n) {
    n2=(10*n2)+(n%10);
    n/=10;
}
n2==n1?printf("Palindrome"):printf("No Palindrome");
}
