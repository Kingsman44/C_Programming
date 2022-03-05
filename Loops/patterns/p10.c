#include<stdio.h>

void main() {
int a,b;
printf("Enter Row:");
scanf("%d",&a);
for(int i=1; i<=a; i++) {
    for(int j=1; j<=a ; j++) {
        (i==(a-j+1)||i==j)?printf("* "):printf("  ");
    }
printf("\n");
}
}
