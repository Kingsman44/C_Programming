#include<stdio.h>

#define row 20
#define col 20

void read(int a[row][col],int r, int c);
void display(int a[row][col],int r, int c);
void matrix_sort(int a[row][col],int r, int c);
void sort(int a[row][col],int N, int c);

void main() {
    int r,c,a[row][col];
    scanf("%d%d",&r,&c);
    if(r>20||c>20||r<0||c<0) {
        printf("Invalid matrix");
        exit(0);
    }
    read(a,r,c);
    matrix_sort(a,r,c);
    display(a,r,c);
}

void read(int a[row][col],int r, int c) {
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            scanf("%d",&a[i][j]);
        }
    }
}

void display(int a[row][col],int r, int c) {
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            printf("%d ",a[i][j]);
        }
        printf("sorted \n");
    }
}
void matrix_sort(int a[row][col],int r, int c) {
    for(int i=0;i<r;i++) {
        sort(a,c,i);
    }
}

void sort(int a[row][col],int N, int c) {
    for(int i=0;i<N-1;i++) {
        for(int j=0;j<N-1;j++) {
            if(a[c][j]>a[c][j+1]) {
                int temp=a[c][j];
                a[c][j]=a[c][j+1];
                a[c][j+1]=temp;
            }
        }
    }
}
