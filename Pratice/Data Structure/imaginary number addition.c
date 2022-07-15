#include<stdio.h>
typedef struct c {
float i,j;
} cp;

cp add(cp c1,cp c2) {
cp t;
t.i=c1.i+c2.i;
t.j=c1.j+c2.j;
return t;
}

void main() {
cp c1,c2,c3;
scanf("%f %f",&c1.i,&c1.j);
scanf("%f %f",&c2.i,&c2.j);
c3=add(c1,c2);
printf("%f,%f",c3.i,c3.j);
}
