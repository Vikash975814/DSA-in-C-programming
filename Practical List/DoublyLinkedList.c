#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct nodetype{
    struct nodetype* prev;
    int info;
    struct nodeytpe* next;
}node;
void InsertAtBeg(node **head,node **tail,int item);
void InsertAtEnd(node **head,node **tail,int item);
void display(node *head);
void reverseorder(node *tail);
void DeletefromBeg(node **head);
void main()
{
    int ch,item;
    node *head=NULL;
    node *tail=NULL;
    while(1)
    {
        printf("enter the choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("Enter the item to insert");
            scanf("%d",&item);
             InsertAtBeg(&head,&tail,item);
             break;
             case 2:
            printf("Enter the item to insert");
            scanf("%d",&item);
             InsertAtEnd(&head,&tail, item);
             break;
             case 3:
             display(head);
             break;
             case 4:
             reverseorder(tail);
             break;
             case 5:
             DeletefromBeg(&head);
             break;
             default:
             printf("Wrong Choice");
             exit(0);
        }
    }
}
void InsertAtBeg(node **head,node **tail,int item)
{
    node *ptr;
    ptr=(node*)malloc(sizeof(node));
    ptr->info=item;
    if((*head)==NULL)
    
    {
        ptr->prev=NULL;
        ptr->next=NULL;
        (*head)=ptr;
        (*tail)=ptr;
    }else{
    (*head)->prev=ptr;
    ptr->prev=NULL;
    ptr->next=(*head);
    (*head)=ptr;
}
}
void InsertAtEnd(node **head,node **tail,int item)
{
    node *ptr;
    ptr=(node*)malloc(sizeof(node));
    ptr->info=item;
    if((*tail)==NULL)
    
    {
        ptr->prev=NULL;
        ptr->next=NULL;
        (*head)=ptr;
        (*tail)=ptr;
    }else{
    (*tail)->next=ptr;
    ptr->next=NULL;
    ptr->prev=(*tail);
    (*tail)=ptr;
}
}
void display(node *head)
{
    while(head!=NULL)
    {
        printf("Element is=%d\n",head->info);
        head=head->next;
    }
}
void reverseorder(node *tail)
{
    while(tail!=NULL)
    {
        printf("Element is=%d\n",tail->info);
        tail=tail->prev;
    }
}
void DeletefromBeg(node **head)
{
    node *temp;
    if(*head==NULL){
        printf("Delition is impossible");
    }else{
        printf("your item is %d",temp->info);
    temp=(*head);
    (*head)=(*head)->next;
    }
     free(temp);
}
