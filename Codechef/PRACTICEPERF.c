#include <stdio.h>

int main(void) {
	int a,k=0;
	for(int i=0;i<4;i++) {
	    scanf("%d",&a);
	    if(a>=10) k++;
	}
	printf("%d",k);
	return 0;
}

