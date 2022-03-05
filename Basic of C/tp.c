#include<stdio.h>

void main() {
    num();
}

void even_odd() {
    int num;
    scanf("%d",&num);
    (num%2==0)?printf("Number is even"):printf("Number is Odd");
}

/*sum of first and last number in 4 digit number*/

void l_f() {
    int num,f,l;
    scanf("%d",&num);
    f=num/1000;
    l=num%10;
    printf("%d",f+l);
}

void num() {
int n=5482;
int hun=n/100;
n=n%100;
int fif=n/50;
n=n%50;
int ten=n/10;
n=n%10;
int fiv=n/5;
n=n%5;
int two=n/2;
n=n%2;
int one=n;
printf("Hun: %d Fif: %d Ten: %d Fiv: %d Two: %d one: %d",hun,fif,ten,fiv,two,one);
}
