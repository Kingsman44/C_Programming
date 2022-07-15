#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--) {
	    int n,a;
	    scanf("%d %d",&n,&a);
	    printf("%d\n",n/10*a);
	}
	
	return 0;
}

