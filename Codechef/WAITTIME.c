#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	while(n--) {
	    int a,b;
	    scanf("%d %d",&a,&b);
	    printf("%d\n",7*a-b);
	}
	return 0;
}

