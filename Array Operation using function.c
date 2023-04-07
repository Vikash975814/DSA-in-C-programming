#include <stdio.h>
#include <stdlib.h>
void traversal(int a[], int size);
void insertion(int a[],int size,int loc,int element);
void delition(int a[],int size,int element);
void linearsearch(int a[],int size,int element);
void binerysearch(int a[],int size,int element);
int main()
{
    int a[100];
    int element,loc,size,choice;
    printf("C Program to Traversal,Insertion,Deletion,Linear Search and Binery Search an Element in an Array using switch case\n");
    printf("1. Traversal an Element in an Array\n");
    printf("2. Insirtion an Element in an Array\n");
    printf("3. Delition an Element in an Array\n");
    printf("4. Linear search an Element in an Array\n");
    printf("5. Binery search an Element in an Array\n");
    printf("Enter the size of an array\n");
        scanf("%d",&size);
        printf("Enter %d array elements\n",size);
        for(int i=0;i<size;i++)
        {
            scanf("%d",&a[i]);
        }
    printf("Select your choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
   case 1:
        traversal(a,size);
        break;
   case 2:
        insertion(a, size, loc, element);
         break;
   case 3:
        delition( a, size,element);
        break;
   case 4:
        linearsearch(a,size, element);
         break;
   case 5:
     binerysearch( a,size,element);   
        break;
   default:
        printf("Wrong choice, Please try again later");
        }
    return 0;
}
// Traversal Operation
void traversal(int a[], int size)
{
printf("Traversal Element is: ");
        for(int i=0;i<size;i++)
        {
            printf("%d ",a[i]);
        }
}
// Insertion Operation
void insertion(int a[],int size,int loc,int element)
{
printf("\nEnter an element to insert\n");
        scanf("%d",&element);
        printf("Enter a position to insert an element %d\n",element);
        scanf("%d",&loc);
        loc--;
        for(int i=size-1;i>=loc;i--)
        {
            a[i+1]=a[i];
        }
        a[loc]=element;
        printf("List after Insertion: ");
        for(int i=0;i<size+1;i++)
        {
            printf("%d ",a[i]);
        }
}
// Delition Operation
void delition(int a[],int size,int element)
{
  printf("\nEnter an element to delete\n");
        scanf("%d",&element);
        for(int i=0;i<size;i++)
        {
            if(a[i]==element)
            {
                for(int j=i;j<(size-1);j++)
                {
                    a[j]=a[j+1];
                }
                break;
            }
        }
        printf("List after deletion\n");
        for(int i=0;i<(size-1);i++)
        {
            printf("%d ",a[i]);
        }
}
// LinearSearch Operation
void linearsearch(int a[],int size,int element)
{
    int i;
printf("Enter a number to search\n");
        scanf("%d", &element);
        for (i = 0; i< size; i++)
         {
        if (a[i] == element)    
        {
         printf("%d is present at location %d.\n", element, i);
         break;
         }
          }
        if (i == size)
     printf("%d isn't present in the array.\n",element);
}    
// BinerySearch Operation
void binerysearch(int a[],int size,int element)
{
   printf("Enter a number to search\n");
        scanf("%d",&element);
         int start=0,mid, end=mid-1; 
         mid = (start+end)/2;
         while(start<=end){
         if(a[mid] < element)
         start = mid + 1;
         else if (a[mid] == element) {
         printf("%d found at location %d.n", element, mid+1);
        break;
         }
        else
        end = mid - 1;
        mid = (start + end)/2;
        }
       if(start > end)
      printf("Not found! %d isn't present in the list.n", element);
}
