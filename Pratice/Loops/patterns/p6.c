#include<stdio.h>

void main() {
int a,k=0;
printf("Enter Row:");
scanf("%d",&a);
for(int i=1; i<=a; i++) {
    for(int j=1; j<=i ; j++) {
        printf("%d ",k);
        k++;
    }
printf("\n");
}
}
