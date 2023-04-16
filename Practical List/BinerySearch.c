#include<stdio.h>
int main()
{
    int Arr[100], element,i,n,loc,start,mid,end;
    printf("Enter the size of an array");
    scanf("%d",&n);
    printf("Enter the Array element");
        for(i=0;i<n;i++){
        scanf("%d",&Arr[i]);
        }
    printf("Enter the Element do you want to search");
    scanf("%d",&element);
    start=0;
    end=n-1;
      mid=(start+end)/2;
      while(start<=end){
          if(Arr[mid]<element){
              start=mid+1;
          }else if(Arr[mid]==element){
               printf("Your element is :%d And Array Location is:Arr[%d]",element,mid);
               break;
          }else{
             end=mid-1;
             mid=(start+end)/2;
              break;
          }
      }
      if(start>end){
          printf("Not found element");
      }
     return 0;
}
