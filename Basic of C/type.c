#include<stdio.h>

void main() {
int num,x,y;
scanf("%d",&num);
y=num&0XF0;
x=num&0X0F;
printf("%d %d\n",y,x);
y=y>>4;
x=x<<4;
printf("%d",x|y);
}
