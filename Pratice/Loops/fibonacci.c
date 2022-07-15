#include<stdio.h>

main() {
int a=0,b=1,c=0,i=2,n;
printf("Enter Number :");
scanf("%d",&n);
printf("%d %d",a,b);
while(i<n) {
    c=a+b;
    a=b;
    b=c;
    printf(" %d",c);
    i++;
}
}
