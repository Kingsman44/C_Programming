#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	while(n--) {
	    int a,b;
	    scanf("%d %d",&a,&b);
	    if(b>a) {
	        printf("%d\n",a);
	    } else {
	        printf("%d\n",b);
	    }
	}
	return 0;
}

