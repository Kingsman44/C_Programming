#include<stdio.h>
#include<stdlib.h>

struct data {
 char name[50],area[50];
 int flat,pincode;
 struct data *next;
};

typedef struct data *node;
node head=NULL;

node newnode() {
node temp=(node) malloc(sizeof(struct data));
char name[50],area[50];
int flat,pincode;
scanf("%s %s %d %d",temp->name,temp->area,&temp->flat,&temp->pincode);
return temp;
}

node ins(node head) {
node p=newnode();
if(head==NULL) {
    p->next=p;
    head=p;
    return head;
} else {
    node new1=head->next;
    head->next=p;
    p->next=new1;
    return head;
}
}


node ins_end(node head) {
node p=newnode();
if(head==NULL) {
    p->next=p;
    head=p;
    return head;
} else {
    node temp=head;
    while(temp->next!=head) {
        temp=temp->next;
    }
    temp->next=p;
    p->next=head;
    return head;
}
}

void display(node head) {
if(head==NULL) {
    printf("List is empty");
} else {
    node temp=head;
    while(temp->next!=head) {
        printf("%s %s %d %d\n",temp->name,temp->area,temp->flat,temp->pincode);
        temp=temp->next;
    }
}
}

void main() {
    while(1) {
        printf("1. Display \n2. Insert\n3. Insert at End\n4.Exit\n\n Enter Choice:");
        int c;
        scanf("%d",&c);
        switch(c) {
        case 1:
            display(head);
            break;
        case 2:
            head=ins(head);
            break;
        case 3:
            head=ins_end(head);
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid Choice !!\n Plz try again");
            break;

        }
    }
}
