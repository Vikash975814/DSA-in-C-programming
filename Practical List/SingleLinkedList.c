#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<alloc.h>
typedef struct nodetype{
  struct nodetype *next;
  int info;
 }node;
 void InsertAtBeg(node **head,int item) ;
 void InsertAtEnd(node ** head,int item);
 void Traverse(node *head);
 void DeleteAtBeg(node ** head);
 void DeleteAtEnd(node **head);
 void main(){
 int ch,item;
 node *head=NULL;
 clrscr();
 while(1)
 {
 printf("Enter the choice");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1:
 printf("Enter the Item");
 scanf("%d",&item);
 InsertAtBeg(&head,item);
 break;
 case 2:
 printf("Enter the item");

 scanf("%d",&item);
 InsertAtEnd(&head, item);
 break;
 case 3:
 DeleteAtBeg(&head);
 break;
 case 4:
 DeleteAtEnd(&head);
 break;
 case 5:
 Traverse(head);
 break;
 default:
 printf("Wrong Choice");
 exit(0);
 }
 }
 }
void InsertAtBeg(node **head,int item)
{
node *ptr;
ptr=(node*)malloc(sizeof(node));
ptr->info=item;
if(*head==NULL)
{
    ptr->next=NULL;
    }else{
    ptr->next=(*head);
    }
    (*head)=ptr;
    }
 void Traverse(node *head)
 {
 while(head!=NULL)
 {
  printf("Element=%d\n",head->info);
  head=head->next;
  }
  }
  void InsertAtEnd(node ** head,int item)
  {
  node * ptr;
  node * loc;
  ptr=(node*)malloc(sizeof(node));
  ptr->info=item;
  ptr->next=NULL;
  if(*head==NULL)
  {
  *head=ptr;
  }else
  loc=*head;
  {

       while(loc->next!=NULL)
       {
       loc=loc->next;
}
}
loc->next=ptr;
}
void DeleteAtBeg(node ** head)
{
node * loc;
if(*head==NULL)
{
printf("Delition is impossible");
}else{
printf("Your item is deleted in list=%d\n",(*head)->info);
(*head)=(*head)->next;
free(loc);
}
}
void DeleteAtEnd(node **head)
{
node * loc;
node *temp;
if((*head)==NULL)
{
printf("Delition is impossible");
}
else if((*head)->next==NULL)
{
loc=(*head);
(*head)=NULL;
free(loc);
} else{
loc=(*head)->next;
while(loc->next!=NULL)
{
    temp=loc;
    loc=loc->next;
}
     printf("Your item is deleted =%d\n",(*head)->info);
     temp->next=NULL;
     free(loc);
    }
 }
