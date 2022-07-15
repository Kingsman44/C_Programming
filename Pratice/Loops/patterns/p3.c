#include<stdio.h>

void main() {
int a;
printf("Enter Row:");
scanf("%d",&a);
for(int i=a; i>0; i--) {
    for(int j=i; j>0 ; j--) {
        printf("*");
    }
printf("\n");
}
}
