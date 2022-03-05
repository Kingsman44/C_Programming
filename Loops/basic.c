#include <stdio.h>
int main(){
int n;
int k;
printf("enter the number: ");
scanf("%d",&n);

for(int i=2; i<n; i++) {
            if ((n%i) == 0) {
                printf("Number is not prime");
                k=1;
                break;
            }
}

if (k==0) {
    printf("Number is Prime");
}


return 0;







}
