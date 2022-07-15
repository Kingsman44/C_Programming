#include <stdio.h>

char vo[5]={'a','e','i','o','u'};

int mod(int a) {
    if(a<0) {
        return (-1*a);
    } else {
        return a;
    }
}

int poss(char a) {
    int min=a-'a',k=0;
     for(int i=1;i<5;i++) {
        if(mod(a-vo[i])<=min) {
            min=mod(a-vo[i]);
        }
     }
     //printf("%d",min);
    for(int l=0;l<5;l++) {
        if(mod(a-vo[l])==min) {
            k++;
        }
     }
    return k;
}

int main(void) {
	int n,m;
	scanf("%d",&n);
	while(n--) {
	    scanf("%d",&m);
	    char s[m];
	    scanf("%s",s);
	    long long int ans=1;
	    for(int i=0;i<m;i++) {
	        ans*=poss(s[i]);
	        ans%=1000000007;
	    }
	    printf("%lld\n",ans);
	}
	return 0;
}