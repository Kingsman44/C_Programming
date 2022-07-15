#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	while(n--) {
	    int a,b,c,d;
	    scanf("%d %d",&a,&b);
	    c=500-2*a+1000-4*(a+b);
	    d=1000-4*b+500-2*(a+b);
	    if(c>d) {
	        printf("%d\n",c);
	    } else {
	        printf("%d\n",d);
	    }
	    
	}
	return 0;
}

