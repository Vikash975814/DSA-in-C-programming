#include <stdio.h>
#include<stdlib.h>
int stack[100], top=-1, item,ch,n;
void push();  
void pop();  
void main ()  
{  
printf("Enter the number of elements in the stack ");   
scanf("%d",&n); 
    while(1)  
    {  
        printf(" Enter your choice");        
        scanf("%d",&ch);  
        switch(ch)  
        {  
            case 1:  
                push();  
                break;  
            case 2:  
                pop();  
                break;  
            default:  
            exit(0);
            }   
    }  
}   
void push ()  
{  
    if (top == n-1)
    {
    printf("Overflow");   
    }else{   
        printf("Enter the item");  
        scanf("%d",&item);         
        top++;   
        stack[top] = item;   
}   
}  
void pop ()   
{   
    if(top == -1) {
    printf("Underflow");
    }
    else{
    printf("Your element is %d\n",stack[top]);
    top--;   
}
    }   

 
