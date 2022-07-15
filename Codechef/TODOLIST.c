#include <stdio.h>

void check() {
    int n,k,l=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&k);
        if(k>=1000) {
            l++;
        }
    }
    printf("%d\n",l);
}

int main(void) {
	int cases;
	scanf("%d",&cases);
	for(int i=0;i<cases;i++) {
	    check();
	}
	return 0;
}

