#include<stdio.h>

void main() {
    char a;
    printf("Enter Char:");
    a=getchar();
    if((a >= 'a' && a <= 'z')||(a >= 'A' && a <= 'Z')) {
        printf("Alphabet !!");
    } else {
        printf("Not an Alphabet !!");
    }
}
