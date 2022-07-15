#include<stdio.h>

typedef struct order_details {
char name[50],email[50],order_items[100][50],area[50];
int time_h,time_m,price,no_of_items,order_id;
} sg;

void read(sg p[],int n) {
for(int i=0;i<n;i++) {
    printf("\nEnter Customer %d Details \n",i+1);
    printf("Enter Name:");
    scanf("%s",p[i].name);
    printf("Enter Email:");
    scanf("%s",p[i].email);
    printf("Enter area:");
    scanf("%s",p[i].area);
    printf("Enter Order ID:");
    scanf("%d",&p[i].order_id);
    printf("Enter Time (HH MM):");
    scanf("%d %d",&p[i].time_h,&p[i].time_m);
    printf("Enter No of items:");
    scanf("%d",&p[i].no_of_items);
    printf("(USE '_' instead of space)\n");
    for(int j=0;j<p[i].no_of_items;j++) {
        printf("Enter Item %d:",j+1);
        scanf("%s",p[i].order_items[j]);
    }
    printf("Enter Price:");
    scanf("%d",&p[i].price);
}
}

void display(sg p) {
printf("\nName: %s",p.name);
printf("\nEmail: %s",p.email);
printf("\nArea: %s",p.area);
printf("\nOrder ID: %d",p.order_id);
printf("\nTime (HH MM): %d Hours, %d Minutes",p.time_h,p.time_m);
printf("\nNo of items: %d",p.no_of_items);
printf("\nItems: ");
for(int j=0;j<p.no_of_items;j++) {
    printf("%s ",p.order_items[j]);
}
printf("\nPrice: %d",p.price);
}

void sort(sg p[],int n) {
for(int i=0;i<n-1;i++) {
    for(int j=0;j<n-i-1;j++) {
        if(p[j].price<p[j+1].price) {
            sg temp=p[j];
            p[j]=p[j+1];
            p[j+1]=temp;
        }
    }
}
}

void search(sg p[],int n) {
int t=0;
char a[50];
printf("\nEnter Area to find Records:");
scanf("%s",a);
for(int i=0;i<n;i++) {
    if(strcasecmp(a,p[i].area)==0) {
        printf("\n-----Order Details----");
        display(p[i]);
        printf("\n------------------------\n");
        t++;
    }
}
printf("\nTotal No of records found in %s:%d",a,t);
}

void main() {
sg p[100];
int n;
printf("Enter no of orders:");
scanf("%d",&n);
read(p,n);
sort(p,n);
for(int i=0;i<n;i++) {
    printf("\n-----Order Details----\n");
    printf("Delivery No: %d",i+1);
    display(p[i]);
    printf("\n------------------------\n");
}
search(p,n);
}
