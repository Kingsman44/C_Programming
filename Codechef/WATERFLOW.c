#include <stdio.h>

void lit() {
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a+ c*d > b) {
        printf("overflow\n");
    } else if(a+ c*d < b) {
        printf("unfilled\n");
    } else {
        printf("filled\n");
    }
}

int main(void) {
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++) {
	    lit();
	}
	return 0;
}

