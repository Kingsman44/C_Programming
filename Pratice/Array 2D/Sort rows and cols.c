#include<stdio.h>

void read(int a[20][20],int r,int c) {
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            scanf("%d",&a[i][j]);
        }
    }
}

void display(int a[20][20],int r,int c) {
    printf("\n");
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

void sort_c(int a[20][20],int r,int c) {
    for(int k=0;k<r-1;k++) {
        for(int i=0;i<r-1;i++) {
            for(int j=0;j<c-1;j++) {
                if(a[i][j]>a[i][j+1]) {
                    int temp=a[i][j];
                    a[i][j]=a[i][j+1];
                    a[i][j+1]=temp;
                    printf("\nSwaping %d and %d\n",a[i][j],a[i][j+1]);
                }
            }
        }
    }
}

void sort_r(int a[20][20],int r,int c) {
    for(int i=0;i<r-1;i++) {
        for(int j=0;j<c-1;j++) {
            if(a[i][j]>a[i+1][j]) {
                int temp=a[i][j];
                a[i][j]=a[i+1][j];
                a[i+1][j]=temp;
            }
        }
    }
}

void main() {
    int r,c;
    scanf("%d%d",&c,&r);
    int a[r][c];
    read(a,r,c);
    sort_c(a,r,c);
    sort_r(a,r,c);
    display(a,r,c);
}
