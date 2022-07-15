#include <stdio.h>

void main() {
    int t,n;
    scanf("%d",&t);
    while(t--) {
        scanf("%d",&n);
        if(n%3==0) {
            printf("%d %d %d\n",n/3,(n/3)+1,(n/3)-1);
        } else if((n+1)%3==0) {
            printf("%d %d %d\n",(n+1)/3,((n+1)/3)+1,((n+1)/3)-2);
        } else {
            printf("%d %d %d\n",((n+2)/3)-1,((n+2)/3)+1,((n+2)/3)-2);
        }
    }
}
