#include<stdio.h>

main() {
    printf("no");
    switch(2) {
        case 1 ... 2: printf("HI");
    }
}
