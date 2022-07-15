#include<stdio.h>

void main() {
    char a;
    printf("Enter Char:");
    a=getchar();
    if(isalpha(a)) {
        printf("Alphabet !!");
    } else {
        printf("Not an Alphabet !!");
    }
}
