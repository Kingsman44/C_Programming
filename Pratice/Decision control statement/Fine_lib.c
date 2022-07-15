#include<stdio.h>

void main() {
    int days;
    float f=0;
    printf("Enter Days: ");
    scanf("%d",&days);
    int d=(float) days;
    switch(days)
    {
        case 11 ... 30:
            d-=10;
            f+=(d)*5;
        case 6 ... 10:
            d-=5;
            f+=(d);
        case 1 ... 5:
            f+=d*0.5;
            break;
        default: printf("Membership Cancelled\n");
            break;
    }
    if (f>0) {
        printf("Fine=%f",f);
    }
}
