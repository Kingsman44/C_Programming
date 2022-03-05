#include<stdio.h>

void main() {
    int sal;
    float go;
    printf("Enter Sal:");
    scanf("%d",&sal);
    if(sal < 1500) {
        go=sal+sal*0.1+sal*0.9;
    } else {
        go=sal+500+sal*0.98;
    }
    printf("Gross is %f",go);
}
