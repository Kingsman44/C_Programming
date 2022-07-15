#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	while(n--) {
	    int a;
	    scanf("%d",&a);
	    char b[a];
	    scanf("%s",b);
	    for(int i=0;i<(a/2);i++) {
	        if(b[2*i]=='0') {
	            if(b[2*i+1]=='0') {
	                printf("A");
	            } else {
	                printf("T");
	            }
	        } else {
	            if(b[2*i+1]=='0') {
	                printf("C");
	            } else {
	                printf("G");
	            }
	        }
	    }
	    printf("\n");
	}
	return 0;
}

