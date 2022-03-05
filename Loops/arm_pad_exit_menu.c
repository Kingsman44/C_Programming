#include<stdio.h>
#include<math.h>

void main() {
    do {
        int opt,n,arm=0,digit=0,pal=0,n1,a;
        printf("1: Palindrome Number\n");
        printf("2: Armstrong Number\n");
        printf("3: Number of digits in number\n");
        printf("4: Exit\n");
        printf("Choose Option: ");
        scanf("%d",&opt);
        if(opt == 4) {
            break;
        } else if(opt<4) {
            printf("Enter Number: ");
            scanf("%d",&n);
            n1=n;
            while(n) {
                arm+=pow((n%10),3);
                pal=(10*pal)+(n%10);
                digit++;
                n/=10;
            }
            printf("----------\n\nNumber %d is ",n1);
            switch (opt) {
                case 1:
                    n1==pal?printf("Palindrome Number"):printf("not a Palindrome Number");
                    break;
                case 2:
                    n1==arm?printf("Armstrong number"):printf("not a Armstrong number");
                    break;
                case 3:
                    printf("having %d digits",digit);
                    break;
                default:
                    break;
            }
            printf("\n\n----------\n");
        } else {
            printf("\nInvalid input !!\n\n");
        }
    } while(1);
}
