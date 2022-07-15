#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    char name[20];
    int rno;
    char add[50];
    struct node*next;
}*node;
//typedef struct Node*node;
node head,newnode,temp,cur;
node insertend(node);
node insertbeg(node);
node deleteend(node);
void display(node);
node deletebeg(node);
node head=NULL;
node getnode()
{
    newnode=(node)malloc(sizeof(struct Node));
    if(newnode==NULL)
    {
        printf("memory not allocated\n");
        exit(0);
    }
    return (newnode);
}
 void main()
 {
     int choice;
     while(1)
     {
         printf("\n1-insertend\n2-insertbeg\n3-display\n4-deleteend\n5-deletebeg\n6-exit\n");
         printf("enter choice:\n");
         scanf("%d",&choice);
         switch(choice)
         {
             case 1: head = insertend(newnode);break;
             case 2: head = insertbeg(newnode);break;
             case 3: display(head);break;
             case 4: head = deleteend(head);break;
             case 5: head = deletebeg(head);break;
             case 6: exit(0);break;
             default: printf("invalid input\n");break;
         }
     }
 }
 node read_details(node newnode)
 {
     printf("enter: (name rno area)");
     scanf("%s%d%s",newnode->name,&newnode->rno,newnode->add);
     newnode->next=NULL;
     return newnode;
 }
 node insertend(node newnode)
 {
     newnode=getnode();
     newnode=read_details(newnode);
     if(head==NULL)
     {
         newnode->next=newnode;
         head=newnode;
         return(head);
     }
     else
     {
         temp=head;
         while(temp->next!=head)
            temp=temp->next;
         newnode->next=head;
         temp->next=newnode;

         return(head);
     }
 }
 node insertbeg(node newnode)
 {
     newnode=getnode();
     newnode=read_details(newnode);
     if(head==NULL)
     {
         newnode->next=newnode;
         head=newnode;
         return(head);
     }
     else
     {
         newnode->next=head;
         temp=head;
         while(temp->next!=head)
            temp=temp->next;
         temp->next=newnode;
         head=newnode;
         return(head);
     }
 }
 void display(node head)
 {
     if(head==NULL)
     {
         printf("linked list is empty\n");
         exit(0);
     }
     else
     {
         temp=head;
         while(temp->next!=head)
         {
             printf("%s %d %s\n",temp->name,temp->rno,temp->add);
             temp=temp->next;
         }
         printf("%s %d %s\n",temp->name,temp->rno,temp->add);
     }
 }
 node deleteend(node head)
 {
     if(head==NULL)
     {
         printf("LL is empty\n");
         exit(0);
     }
     else
     {
         if(head->next==head)
         {
             printf("deleted=%s%d%s\n",head->name,head->rno,head->add);
             free(head);
             head=NULL;
             return(head);
         }
         else
         {
             temp=head;
             cur=head->next;
             while(cur->next!=head)
             {
                 temp=temp->next;
                 cur=cur->next;
             }
             printf("deleted=%s%d%s\n",cur->name,cur->rno,cur->add);
             free(cur);
             temp->next=head;
             return(head);
         }
     }
 }
 node deletebeg(node head)
 {
     if(head==NULL)
     {
         printf("LL is empty\n");
         exit(0);
     }
     else
     {
         if(head->next==head)
         {
             printf("deleted = %s%d%s\n",head->name,head->rno,head->add);
             free(head);
             head=NULL;
             return(head);
         }
         else
         {
             temp=head;
             cur=head->next;
             printf("deleted=%s%d%s\n",temp->name,temp->rno,temp->add);
             while(cur->next!=head)
             {
                 cur=cur->next;
             }
             cur->next=temp->next;
             head=temp->next;
             free(temp);

             return(head);
         }
     }
 }
