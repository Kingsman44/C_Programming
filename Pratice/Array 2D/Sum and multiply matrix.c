#include<stdio.h>


void read(int a[20][20],int r,int c) {
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            scanf("%d",&a[i][j]);
        }
    }
}

void display(int a[20][20],int r,int c) {
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

void sum(int s[20][20],int a[20][20],int b[20][20],int r,int c) {
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            s[i][j]=a[i][j]+b[i][j];
        }
    }
}

void mul(int s[20][20],int a[20][20],int b[20][20],int r,int c) {
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            s[i][j]=0;
            for(int k=0;k<c;k++)
            {
                s[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
}

void main() {
    int r1,c1,r2,c2,a[20][20],b[20][20],s[20][20];
    scanf("%d%d",&r1,&c1);
    scanf("%d%d",&r2,&c2);
    if(r1>20 || c1>20 || c2>20 || r2>20 || c1 != r2) {
        printf("The matrix is not supported");
        exit(0);
    }
    read(a,r1,c1);
    read(b,r2,c2);
    mul(s,a,b,r1,c2);
    display(s,r1,c2);
}
