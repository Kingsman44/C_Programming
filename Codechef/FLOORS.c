#include <stdio.h>

int set(int n) {
    if((n/10.0)>(n/10)) {
        return ((n/10)+1);
    } else {
        return n/10;
    }
}


int main(void) {
	int t;
	scanf("%d",&t);
	while(t--) {
	    int a,b;
	    scanf("%d %d",&a,&b);
	   if(a-b>0) {
	       printf("%d\n",set(a)-set(b));
	   } else {
	        printf("%d\n",set(b)-set(a));
	    }
	    
	}
	return 0;
}

