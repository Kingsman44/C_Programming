#include <stdio.h>

int main(void) {
    int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(b+c<=a) {
	    printf("yes");
	} else {
	    printf("no");
	}
	return 0;
}

