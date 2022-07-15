#include<stdio.h>

void main() {
int p,r,t,i=1;
while(i<=3) {
    printf("Enter P R T of p%d: ",i);
    scanf("%d%d%d",&p,&r,&t);
    i++;
    printf("\n S.I= %f\n",(float) p*r*t/100);
}
}
