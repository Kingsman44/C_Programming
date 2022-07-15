#include<stdio.h>

void main() {
    char a;
    printf("Enter Char:");
    a=getchar();
    if((a >= 97 && a <= 122)||(a >= 65 && a <= 90)) {
        printf("Alphabet !!");
    } else {
        printf("Not an Alphabet !!");
    }
}
