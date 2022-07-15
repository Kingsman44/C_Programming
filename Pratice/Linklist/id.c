#include<stdio.h>
#include<stdlib.h>

struct data {
int id;
struct data *next;
};

typedef struct data *n;

void display(n p) {

if(p==NULL) {
    printf("List is empty\n");
    return;
}
while(p!=NULL) {
    printf("%d\n",p->id);
    p=p->next;
}
}

n insert(n p) {
n temp;
temp=(n) malloc(sizeof(struct data));
printf("Enter ID:");
scanf("%d",&temp->id);
temp->next=p;
return(temp);
}

n append(n p) {
n node;
node=(n) malloc(sizeof(struct data));
printf("Enter ID:");
scanf("%d",&node->id);
node->next=NULL;
if(p==NULL) {
    return node;
} else {
    n temp=p;
    while(temp->next!=NULL) {
        temp=temp->next;
    }
    temp->next=node;
    return(p);
}
}

n del(n p) {
if(p==NULL) {
    return NULL;
}
n temp=p;
p=p->next;
free(temp);
return p;
}

n del_end(n p) {
if(p==NULL||p->next==NULL) {
    return NULL;
}
n temp=p;
n last=temp->next;
while(last->next!= NULL) {
    temp=last;
    last=last->next;
}
temp->next=NULL;
free(last);
return p;
}

n del_pos(n p) {
n temp=p;
printf("Enter Position:");
int t;
scanf("%d",&t);
if(t==1) {
    return del(p);
}
for(int i=0;i<t-2;i++) {
    if(temp->next==NULL) {
        printf("List size is greater");
        return p;
    } else {
        temp=temp->next;
    }
}
n cur=temp->next;
temp->next=cur->next;
free(cur);
return p;
}

void main() {
    n *p=NULL;
    while(1) {
        printf("\n1. Display \n2. Insert\n3. Append\n4. Delete\n5. Delete at Pos\n6. Exit\n\nEnter Choice:");
        int c;
        scanf("%d",&c);
        switch(c) {
        case 1:
            display(p);
            break;
        case 2:
            p=insert(p);
            break;
        case 3:
            p=append(p);
            break;
        case 4:
            p=del(p);
            break;
        case 5:
            p=del_pos(p);
            break;
        case 6:
            exit(0);
        default:
            printf("Invalid Choice !!\n Plz try again");
            break;

        }
    }

}
