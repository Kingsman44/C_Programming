#include <stdio.h>
#include <math.h>

int check(int a[],int n,int m) {
    for(int i=0;i<n;i++) {
        if(a[i]==m) return 0;
    }
    return 1;
}

int main(void) {
	int t,n,num[100];
	scanf("%d",&t);
	while(t--) {
	   scanf("%d",&n);
	   int l=0,m,s;
	   for(int i=0;i<n;i++) {
	       scanf("%d",&m);
	       while(m>0) {
	          s=log2(m);
	          if(check(num,l,s)==1) {
	              num[l]=s;
	              l++;
	          }
	          m=m-pow(2,s);
	       }
	   }
	   printf("%d\n",l);
	}
	return 0;
}

