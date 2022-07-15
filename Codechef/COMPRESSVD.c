#include <stdio.h>

void read(int a[],int n) {
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}

int count(int a[],int n) {
    int k=0;
    for(int i=0;i<n-1;i++) {
        if(a[i]==a[i+1]) {
            k++;
        }
    }
    return (n-k);
}

int main(void) {
	int n,m;
	scanf("%d",&n);
	while(n--) {
	    scanf("%d",&m);
	    int a[m];
	    read(a,m);
	    printf("%d\n",count(a,m));
	}
	return 0;
}

