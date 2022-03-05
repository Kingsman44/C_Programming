#include<stdio.h>

void main() {
int n,i=1,s;
printf("Enter N:");
scanf("%d",&n);
while(i<=n) {
    printf("%d\t",i);
    s+=i;
    i++;
}
printf("\nsum = %d AVG= %.2f",s,(float) s/n);
}
