#include<stdio.h>

int xx(int a,int b) {
    int t=0;
    while(a-b>0) {
        a--;
        b--;
        t++;
    }
    return t;
}

void main() {
    int t;
    scanf("%d",&t);
    while(t--) {
        int ans=1,s=0,tt[2],x=0,y=0,j=1;
        tt[0]=0;
        tt[1]=0;
        char a[8];
        while(j<=8) {
            scanf("%s",a);
            s=0;
            if(ans==1) {
                for(int i=0;i<8;i++) {
                    if(a[i]=='#') {
                        tt[s]=i+1;
                        s++;
                    }
                }
                if(s==2) {
                    ans=0;
                    x=tt[0]+(tt[1]-tt[0])/2;
                    y=j+(tt[1]-tt[0])/2;
                }
            }
            j++;
        }
        ans=1;
        printf("%d %d\n",y,x);
    }
}
