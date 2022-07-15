#include<stdio.h>

int isPrime(int n){
    int i = 2;
    if(n==2) return 1;
    if(n==1) return 0;
    while(i<=n/2) {
        if(n%i==0) {
            return 0;
        }
        i++;
    }
    return 1;
};

int main(){
    int m,n;
    int ans =0;
    scanf("%d%d",&m,&n);
    for(int i = m; i<=n;i++){
        if(isPrime(i)){
            printf("%d\n",i);
           ans =ans+i;
        }
    }
    printf("\n%d",ans);
    return 0;
}
