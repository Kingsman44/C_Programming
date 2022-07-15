#include <stdio.h>

int main(void) {
	int n,m;
	char d[10];
	scanf("%d",&n);
	while(n--) {
	    scanf("%d",&m);
	    int a=0,b=0;
	    while(m--) {
	      scanf("%s",d);
	      int k=strcmp(d,"START38");
	      if(k==0) {
	          a++;
	      } else {
	          b++;
	      }
	    }
	    printf("%d %d\n",a,b);
	}
	return 0;
}

