#include<stdio.h>

main() {
int i=1,n;
printf("Enter Number :");
scanf("%d",&n);
while(i<11) {
    printf("\n%d * %d = %d",n,i,n*i);
    i++;
}
}
