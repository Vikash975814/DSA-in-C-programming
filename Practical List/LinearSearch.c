#include<stdio.h>
int main()
{
    int Arr[100], element,i,n,loc;
    printf("Enter the size of an array");
    scanf("%d",&n);
    printf("Enter the Array element");
    for(i=0;i<n;i++){
        scanf("%d",&Arr[i]);
    }
    printf("Enter the Element do you want to search");
    scanf("%d",&element);
     for(i=0;i<n;i++){
         if(Arr[i]==element){
             printf("Your element is :%d And Location is: Arr[%d] ",element,Arr[i-1]);
             break;
         }
     }    
     if(i==n){
         printf("Not found element");
     }
     return 0;
}
