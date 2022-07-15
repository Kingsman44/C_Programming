#include<stdio.h>

int is_harshard(int);

void main() {
    int M,N,bool;
    printf("Enter Lower limit and upper limit : ");
    scanf("%d%d",&M,&N);
    if (M>0) {
        while(M<=N) {
            bool=is_harshad(M);
            if (bool==1&&M%2==0) {
                printf("%d\t",M);
            }
            M++;
        }
    } else {
        printf("M and N should be greater than 0");
    }
}

int is_harshad(int num) {
    int save_num=num,rem,sum=0;
    while(num) {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    if (save_num%sum==0) {
        return 1;
    } else {
        return 0;
    }
}

