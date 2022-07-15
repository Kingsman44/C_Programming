#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--) {
	    int x1,y1,x2,y2;
	    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	    if(x1!=x2&&y1!=y2) {
	        printf("%d\n",1);
	    } else {
	        printf("%d\n",2);
	    }
	}
	return 0;
}

