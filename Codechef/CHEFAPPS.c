#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--) {
	    int a,b,c,d;
	    scanf("%d%d%d%d",&a,&b,&c,&d);
	    int max=b;
	    if(b<c) max=c;
	    if(a-b-c>=d) {
	        printf("%d\n",0);
	    } else if(a-b-c+max>=d) {
	        printf("%d\n",1);
	    } else {
	        printf("%d\n",2);
	    }
	}
	return 0;
}
