#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--) {
	    int a,b;
	    scanf("%d %d",&a,&b);
	    if(a>b) {
	        printf("%d\n",7-a);
	    } else {
	        printf("%d\n",7-b);
	    }
	}
	return 0;
}

