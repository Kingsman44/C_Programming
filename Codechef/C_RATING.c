#include <stdio.h>

int main(void) {
	int n,a,b;
	scanf("%d",&n);
	for(int j=0;j<n;j++) {
	    scanf("%d %d",&a,&b);
	    int i=0;
	    while(b>a){
	        a=a+8;
	        i++;
	    }
	    printf("%d\n",i);
	}
	return 0;
}

