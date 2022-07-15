#include <stdio.h>

void change(int a[],int n,int b) {
    int k=1,d=1;
    for(int i=0;i<n;i++) {
        if(b!=-1&&b==i) {
            a[i]=-1;
        } else {
            a[i]=d;
            if(k==5) {
                k=0;
                d++;
            }
            k++;
        }
    }
}

void print(int a[],int n) {
    for(int i=0;i<n;i++) {
        printf("%d ",a[i]);
    }
    printf("\n");
}

int compare(int a[],int b[],int n) {
    int s=0;
    for(int i=0;i<n;i++) {
        if(a[i]!=b[i]&&b[i]!=-1) {
            //printf("%d is chnaged\n",i);
            s++;
        }
    }
    return s;
}

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--) {
	    int a,b;
	    scanf("%d %d",&a,&b);
	    int c[a],d[a];
	    change(c,a,-1);
	    change(d,a,b-1);

	    printf("%d\n",compare(c,d,a));
	}
	return 0;
}

