#include <stdio.h>

int main(void) {
	int m,n,l,k=0;
	scanf("%d",&n);
	while(n--) {
	  scanf("%d",&l);
	  k=0;
	  for(int i=0;i<4;i++) {
	      scanf("%d",&m);
	      if(m>k) { 
	          k=m;
	      }
	  }
	  printf("%d\n",k);
	}
	return 0;
}