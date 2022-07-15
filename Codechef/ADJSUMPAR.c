#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--) {
	    int n;
	    scanf("%d",&n);
	    int a[n],s=0;
	    for(int i=0;i<n;i++) {
	        scanf("%d",&a[i]);
	        s=s+a[i];
	    }
	    if(s%2==1) {
	        printf("NO\n");
	    } else {
	       printf("YES\n"); 
	    }
	}
	return 0;
}

