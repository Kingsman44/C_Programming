#include<stdio.h>

void main() {
    long int n;
    int t,a,b,c,d;
    scanf("%ld",&n);
    while(n--) {
        t=0;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(b>a) t++;
        if(c>a) t++;
        if(d>a) t++;
        printf("%d\n",t);
    }

}
