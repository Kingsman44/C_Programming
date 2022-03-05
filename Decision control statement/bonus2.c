#include<stdio.h>
void main() {
    int exp,sal,bo;
    printf("Enter Exp, Sal:");
    scanf("%d%d",&exp,&sal);
    if(exp >= 8) {
        bo=0.2*sal;
    } else {
        bo=0.1*sal;
    }
    printf("Bonus is %d",bo);
}
