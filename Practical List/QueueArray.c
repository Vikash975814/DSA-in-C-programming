#include<stdio.h>   
#include<stdlib.h>  
void insert();  
void delete();  
int front = -1, rear = -1,n,ch;  
int queue[100];  
void main ()  
{  
    printf("Enter the size of queue");
    scanf("%d",&n);
    while(1)   
    {     
        printf("Enter your choice ?");  
        scanf("%d",&ch);  
        switch(ch)  
        {  
            case 1:  
            insert();  
            break;  
            case 2:  
            delete();  
            break;  
            default:
            exit(0);  
        }  
    }  
}  
void insert()  
{  
    int item;
    if(rear == n-1)  
    {  
        printf("OVERFLOW\n"); 
        return;
    }  
    printf("Enter the item");
    scanf("%d",&item);
    if(front == -1 && rear == -1)  
    {  
        
        front = 0;  
        rear = 0;  
    }  
    else   
    {  
    rear++; 
    }
    queue[rear] = item;  
}  
void delete()  
{  
    int item;   
    if (front == -1 || front > rear)  
    {  
        printf("UNDERFLOW\n"); 
        return ;
    }  
    if (front == rear)  
        { 
         printf("Your item is=%d",queue[front]);
            front = -1;  
            rear = -1 ;  
        }  
        else   
        { 
            printf("Your item is=%d",queue[front]);
            front = front + 1;  
        }
    }  
      

