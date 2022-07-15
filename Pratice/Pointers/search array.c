#include<stdio.h>

int search(int *a,int n,int b) {
    int k;
    for(int i=0;i<n;i++) {
        if(b==*(a+i)) {
            printf("%d found at position: %d\n",*(a+i),i+1);
            k++;
        }
    }
    return k;
}

void read(int *a,int n) {
    for(int i=0;i<n;i++) {
        scanf("%d",&*(a+i));
    }
}

void main() {
int a[10],b,n;
printf("Enter Number of Elements and array");
int p=&a;
scanf("%d",&n);
read(p,n);
printf("Enter Number to Search");
scanf("%d",&b);
printf("%d found %d times in list",b,search(p,n,b));
}
