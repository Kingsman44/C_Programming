#include<stdio.h>
#include<math.h>
void main() {
    int a,b,c,d;
    float r1,r2;
    printf("Equation ax^2+bx+c\n");
    printf("Enter a,b,c: ");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d >= 0) {
        r1=(float)((-b)+sqrt(d))/(2*a);
        r2=(float)((-b)-sqrt(d))/(2*a);
        printf("Roots are %f and %f",r1,r2);
    } else {
        printf("Imaginary");
    }
}


