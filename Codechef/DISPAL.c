#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--) {
	    int n,c;
	    scanf("%d %d",&n,&c);
	    char ss[n+1];
	    int or1=c-1;
	    if(n%2==0) {
	        if(c<=n/2) {
	            for(int i=0;i<n/2;i++) {
	                printf("%c",'a'+or1);
	                ss[i]='a'+or1;
	                if(or1) {
	                    or1--;
	                }
	            }
	            for(int i=(n/2)-1;i>=0;i--) {
	                printf("%c",ss[i]);
	            }
	            printf("\n");
	        } else {
	            printf("%d\n",-1);
	        }
	    } else {
	        if(c<=(n+1)/2) {
	            for(int i=0;i<(n+1)/2;i++) {
	                printf("%c",'a'+or1);
	                ss[i]='a'+or1;
	                if(or1) {
	                    or1--;
	                }
	            }
	            for(int i=(n/2)-1;i>=0;i--) {
	                printf("%c",ss[i]);
	            }
	            printf("\n"); 
	        } else {
	            printf("%d\n",-1);
	        }
	    }
	}
	return 0;
}