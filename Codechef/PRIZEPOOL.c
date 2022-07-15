#include <stdio.h>

int main(void) {
	int n,m,k;
	scanf("%d",&n);
	while(n--) {
	    scanf("%d %d",&m,&k);
	    printf("%d\n",10*m+90*k);
	}
	return 0;
}

