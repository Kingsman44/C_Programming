#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--) {
	    int a,b;
	    scanf("%d %d",&a,&b);
	    if(((a+b)/2)%2!=0) {
	        printf("bob\n");
	    } else {
	        printf("alice\n");
	    }
	}
	return 0;
}

