#include <stdio.h>

int main(void) {
    int t,n;
    scanf("%d",&t);
    for(int j=0;j<t;j++){
        scanf("%d",&n);
        char k[n];
        scanf("%s",k);
        int f=0;
        for(int i=0;i<n/2;i++) {
            if(k[i]!=k[n-i-1]) {
                f++;
            }
        }
        printf("%d\n",(f+1)/2);
    }
	return 0;
}

