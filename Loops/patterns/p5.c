#include<stdio.h>

void main() {
int a;
printf("Enter Row:");
scanf("%d",&a);
for(int i=1; i<=a; i++) {
    for(int j=1; j<=i ; j++) {
        printf("%c",'A'+j-1);
    }
printf("\n");
}
}
