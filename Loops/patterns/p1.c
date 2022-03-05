#include<stdio.h>

void main() {
int a,b;
printf("Enter Row and Column :");
scanf("%d%d",&a,&b);
for(int i=1; i<=a; i++) {
    for(int j=1; j<=b ; j++) {
        printf("*");
    }
printf("\n");
}
}
