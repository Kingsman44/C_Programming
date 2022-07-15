#include<stdio.h>

#define p 30

char stops[100][10]={"Park A","Park B","Park C","Park D","Park E","Park F","Park G","Park H","Park I","Park J"};

typedef struct det {
char name[50];
int price,start,end;
} tp;

void read(tp t[],int n) {
for(int i=0;i<n;i++) {
    printf("Enter Person %d details (Name,start point (1-10), End point (1-10)\n",i+1);
    scanf("%s %d",t[i].name,&t[i].start);
    int s=1;
    while(s) {
        if(s==2) printf("Ending point must be greater than starting point\n");
        s=2;
        scanf("%d",&t[i].end);
        if(t[i].start < t[i].end) {
            s=0;
        }
    }
    t[i].price=(t[i].end-t[i].start)*p;
    printf("Price will be %d\n",t[i].price);
}
}

void print(tp t[],int n,int k) {
printf("Starting points \n");
for(int i=0;i<n;i++) {
    if(k==t[i].start)
    printf("%s %s %s %d\n",t[i].name,stops[t[i].start],stops[t[i].end],t[i].price);
}

printf("Ending points \n");
for(int i=0;i<n;i++) {
    if(k==t[i].end)
    printf("%s %s %s %d\n",t[i].name,stops[t[i].start],stops[t[i].end],t[i].price);
}
}

void main() {
printf("Metro Details\n");
for(int i=0;i<10;i++) {
    printf("Stop %d: %s\n",i+1,stops[i]);
}
tp t[100];
int n,k;
printf("Enter N:");
scanf("%d",&n);
read(t,n);
scanf("%d",&k);
print(t,n,k);
}
