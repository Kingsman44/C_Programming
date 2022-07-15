#include<stdio.h>
#include<stdlib.h>

struct info {
    char name[50];
    int rno;
    struct info *next;
};

typedef struct info *n;

void display(n p) {
    if(p==NULL) {
        printf("Link List is empty");
        return ;
    }
    while(p!= NULL) {
        printf("%s %d\n",p->name,p->rno);
        p=p->next;
    }
}

n ins(n p) {
    n temp;
    temp=(struct info *) malloc(sizeof(struct info));
    if(temp==NULL) {
        printf("Memory Full");
        return ;
    }
    int a;
    char b[50];
    printf("Enter Name, Roll No:");
    scanf("%s %d",temp->name,&temp->rno);
    //printf("%s %d",temp->name,temp->rno);
    temp->next=p;
    p=temp;
    return (p);
}

n ins_end(n p) {
    n temp,r;
    int a;
    char b[50];
    r=(struct info *) malloc(sizeof(struct info));
    temp=(struct info *) malloc(sizeof(struct info));
    if(temp==NULL) {
        printf("Enter Name, Roll No:");
        scanf("%s %d",temp->name,&temp->rno);
        //printf("%s %d",temp->name,temp->rno);
        temp->next=p;
        p=temp;
        return (p);
    }
    //printf("%s %d",temp->name,temp->rno);
    while(temp->next!=NULL) {
        temp=temp->next;
    }
    printf("Enter Name, Roll No:");
    scanf("%s %d",r->name,&r->rno);
    r->next=NULL;
    temp->next=r;
    p=temp;
    return (p);
}

void main() {
    n *p;
    while(1) {
        printf("1. Display \n2. Insert\n3. Insert at End\n4.Exit\n\n Enter Choice:");
        int c;
        scanf("%d",&c);
        switch(c) {
        case 1:
            display(p);
            break;
        case 2:
            p=ins(p);
            break;
        case 3:
            p=ins_end(p);
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid Choice !!\n Plz try again");
            break;

        }
    }

}
