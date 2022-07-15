#include<stdio.h>

void main() {
int a,b;
printf("Enter Row:");
scanf("%d",&a);
printf("\n");
for(int i=1; i<=a; i++) {
    for(int j=1; j<=a ; j++) {
        (i==1||i==a||j==a||j==1)?printf("* "):printf("  ");
    }
printf("\n");
}
}
