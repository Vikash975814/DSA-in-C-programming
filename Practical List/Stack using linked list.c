#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct nodetype{
   struct nodetype *next;
   int info;
}stack;
void push(stack **top,int item);
void pop(stack **top);
void main()
{
stack *top=NULL;
int item,ch;
clrscr();
while(1)
{
printf("Enter the choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("Enter the item ");
scanf("%d",&item);
push(&top,item);
break;
case 2:
pop(&top);
break;
default :
exit(0);
}
}
}
void push(stack **top,int item)
{
   stack *ptr;
   ptr=(stack*)malloc(sizeof(stack));
   ptr->info=item;
   if(ptr==NULL)
   {
   printf("Does not create memory");
   }
    else
    {
    ptr->next=*top;
    *top=ptr;
    }
    }

    void pop(stack **top)
    {
    stack *ptr;
    ptr=*top;
    if(*top==NULL)
    {
    printf("Stack is Empty\n");
    }
    else
    {
    *top=(*top)->next;
    printf("Your item is =%d\n",ptr->info);
     free(ptr);
    }
    }
