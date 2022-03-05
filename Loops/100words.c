#include<stdio.h>

void main() {
int o=0,z=0,n;
printf("Enter N: ");
scanf("%d",&n);
while(n) {
    if(n%10 == 1) {
        o++;
    } else if(n%10 == 0) {
        z++;
    }
    n/=10;
}
if((o*2)==z) {
printf(" No. is similar to 100 word");
} else {
printf(" No. not is similar to 100 word");
}

}
