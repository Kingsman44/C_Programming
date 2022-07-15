#include<stdio.h>

void main() {
int a,b,c=1;
printf("Enter Row(odd):");
scanf("%d",&a);
if(a%2==0) c=0;
for(int i=1; i<=a; i++) {
    for(int j=1; j<=a ; j++) {
        if(a%2==0&&j==a/2) printf(" ");
        ((i<=a/2)&&(i==(a-j+1)||i==j)||((i>a/2)&&(j==a/2+c)))?printf("*"):printf(" ");
    }
printf("\n");
}
}
