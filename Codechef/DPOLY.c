#include <stdio.h>

int main(void) {
	int n,m;
	scanf("%d",&n);
	while(n--) {
	    scanf("%d",&m);
	    int l[m],k=0;
	    for(int i=0;i<m;i++) {
	       scanf("%d",&l[i]);
	        if(l[i]!=0) {
	            k=i;
	        }
	    }
	    printf("%d\n",k);
	}
	return 0;
}

