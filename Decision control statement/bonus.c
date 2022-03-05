#include<stdio.h>

void main() {
    int exp,sal,bo;
    printf("Enter Exp, Sal:");
    scanf("%d%d",&exp,&sal);
    if (exp >= 5) {
        bo=0.1*sal;
        printf("%d",bo);
    }
}
