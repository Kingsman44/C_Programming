#include<stdio.h>

void main() {
    int exp,sal,bo;
    printf("Enter Exp, Sal:");
    scanf("%d%d",&exp,&sal);
    if(exp <= 7) {
        bo=0.1*sal;
    } else if(exp <= 10 && exp >=8) {
        bo=0.2*sal;
    } else if(exp <= 15 && exp >=11) {
        bo=0.3*sal;
    } else {
        bo=0.4*sal;
    }
    printf("Bonus is %d",bo);
}

