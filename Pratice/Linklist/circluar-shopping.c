#include<stdio.h>
#include<stdlib.h>
struct mall {
char brand[50];
int price,discount,qty;
struct mall *item;
};

typedef struct mall *node;

node create() {
char brand[50];
int price,discount,qty;
node temp=(node) malloc(sizeof(struct mall));
scanf("%s %d %d %d",temp->brand,&temp->price,&temp->discount,&temp->qty);
temp->item=temp;
return temp;
}

node insert(node head) {
node items=create();
node temp=head;
if(head==NULL) {
    items->item=items;
    return items;
} else {
while(temp->item!=head) {
    temp=temp->item;
}
items->item=head;
temp->item=items;
return head;
}
}

void display(node head) {
if(head==NULL) {
    printf("No Items to display !!\n");
}
else {
    node temp=head;
    int tp=0,i=1;
    while(temp->item!=head) {
        printf("-------\nItem No %d\n",i);
        printf("Brand: %s\nPrice: %d\nDiscount: %d\%\nQty: %d\n------\n",temp->brand,temp->price,temp->discount,temp->qty);
        i++;
        tp+=(temp->price*(100-temp->discount)/100*temp->qty);
        temp=temp->item;
    }
    printf("-------\nItem No %d\n",i);
    printf("Brand: %s\nPrice: %d\nDiscount: %d\%\nQty: %d\n------\n",temp->brand,temp->price,temp->discount,temp->qty);
    i++;
    tp+=(temp->price*(100-temp->discount)/100*temp->qty);
    printf("\nTotal: %d\n",tp);
}
}

void main() {
node head=NULL;
while(1) {
    printf("1. Insert\n2. Display Bill\n3. Exit\n");
    int k;
    scanf("%d",&k);
    switch(k) {
        case 1:
            head=insert(head);
            break;
        case 2:
            display(head);
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("Invalid\n");
            break;
    }
}

}
