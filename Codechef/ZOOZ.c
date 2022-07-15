#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--) {
	    int n;
	    scanf("%d",&n);
	    printf("1");
	    for(int i=1;i<n-1;i++) {
	        printf("0");
	    }
	    printf("1\n");
	}
	return 0;
}

