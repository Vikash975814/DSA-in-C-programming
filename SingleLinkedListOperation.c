#include<stdio.h>
#include<stdlib.h>
typedef struct nodeType
{
int info;
struct nodeType * next;
}node;
void InsertAtFirst(node ** head,int item);
void InsertAtEnd(node ** head,int item);
void DeleteAtBeg(node ** head);
void DeleteAtEnd(node ** head);
node* LinearSearch(node * head,int item);
void InsertAtIndex(node ** head,int item,int index);
void Traverse(node * head);
int  main(){
int ch,item;
node * head=NULL,*ptr;
while(1){
printf("1.InsertAtFirst\n");
printf("2.InsertAtEnd\n");
printf("3.DeleteAtBeg\n");
printf("4.DeleteAtEnd\n");
printf("5.LinearSearch\n");
printf("6.traversal\n");
printf("Enter the choice\n");
scanf("%d",&ch);
switch(ch) {
case 1:
printf("Enter the element\n");
scanf("%d",&item);
InsertAtFirst(&head,item);
break;
case 2:
printf("Enter the element\n");
scanf("%d",&item);
InsertAtEnd(&head,item);
break;
case 3:
DeleteAtBeg(&head);
break;
case 4:
DeleteAtEnd(&head);
break;
case 5:
ptr=LinearSearch(head,item);
if(ptr!=NULL)
printf("Item is Found= %d\n",item);
else
printf("Not Found");
break;
case 6:
Traverse(head);
break;
default:
printf("Wrong choice");
exit(0);
}
}
}
void Traverse (node *head){
node * ptr;
ptr=head;
while(ptr!=NULL){
printf("Element:%d\n",ptr->info);
ptr=ptr->next;
 }
 }

void InsertAtFirst(node ** head,int item){
node * ptr;
ptr=(node*)malloc(sizeof(node));
ptr->info=item;
if(*head==NULL){
ptr->next=NULL;
}else{
ptr->next=*head;
}
*head=ptr;
}

void InsertAtEnd(node ** head,int item){
node * ptr;
node * loc;
ptr=(node*)malloc(sizeof(node));
ptr->info=item;
ptr->next=NULL;
if(*head==NULL){
*head=ptr;
}else{
loc=*head;
while(loc->next!=NULL){
loc=loc->next;
}
}
loc->next=ptr;
}

void DeleteAtBeg(node ** head)
{
node * loc;
if(loc==NULL){
printf("\nList is Empty");
}else{
loc=*head;
(*head)=(*head)->next;
free(loc);
printf("\nNode Deleted from Begining");
}
}

void DeleteAtEnd(node ** head)
{
node * loc;
node * temp;
if(*head==NULL)
{
printf("\nList is Empty");
}
else if((*head)->next==NULL)
{
loc=*head;
*head=NULL;
free(loc);
printf("\nNode is deleted for last");
}
else
{
loc=*head;
while(loc->next!=NULL)
{
temp=loc;
loc=loc->next;
}
temp->next=NULL;
free(loc);
printf("\nNode is deleted for last");
}
}

node* LinearSearch(node * head,int item)
{
node * ptr;
printf("Enter the item to search");
scanf("%d",&item);
ptr=head;
if(ptr==NULL)
{
printf("\nList is empty");
}
else
{
    
while(ptr!=NULL)
{
if(ptr->info==item)
{
return ptr;
}
ptr=ptr->next;
}
}
return NULL;
}
