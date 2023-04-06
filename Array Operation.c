#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[100];
    int element,i,loc,size,n,j,choice,search,start=0,end=(size-1),mid;
    printf("C Program to Traversal,Insertion,Deletion,Linear Search and Binery Search an Element in an Array using switch case\n");
    printf("1. Traversal an Element in an Array\n");
    printf("2. Insirtion an Element in an Array\n");
    printf("3. Delition an Element in an Array\n");
    printf("4. Linear search an Element in an Array\n");
    printf("5. Binery search an Element in an Array\n");
    printf("Enter the size of an array\n");
        scanf("%d",&size);
        printf("Enter %d array elements\n",size);
        for(i=0;i<size;i++)
        {
            scanf("%d",&a[i]);
        }
    printf("Select your choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
   case 1:
        // Traversal Operation
        printf("Traversal Element is: ");
        for(i=0;i<size;i++)
        {
            printf("%d ",a[i]);
        }
        break;
    case 2:
        // Insertion Operation
        printf("\nEnter an element to insert\n");
        scanf("%d",&element);
        printf("Enter a position to insert an element %d\n",element);
        scanf("%d",&loc);
        loc--;
        for(i=size-1;i>=loc;i--)
        {
            a[i+1]=a[i];
        }
        a[loc]=element;
        printf("List after Insertion: ");
        for(i=0;i<size+1;i++)
        {
            printf("%d ",a[i]);
        }
         break;
    case 3:
        //Delation Operation
        printf("\nEnter an element to delete\n");
        scanf("%d",&n);
        for(i=0;i<size;i++)
        {
            if(a[i]==n)
            {
                for(j=i;j<(size-1);j++)
                {
                    a[j]=a[j+1];
                }
                break;
            }
        }
        printf("List after deletion\n");
        for(i=0;i<(size-1);i++)
        {
            printf("%d ",a[i]);
        }
        break;
    case 4:
        //Linear Search Operation
        printf("Enter a number to search\n");
        scanf("%d", &search);
        for (i = 0; i< size; i++)
         {
        if (a[i] == search)    
        {
         printf("%d is present at location %d.\n", search, i);
         break;
         }
          }
        if (i == n)
         printf("%d isn't present in the array.\n", search);
         break;
case 5:
        // Binery Search Operation
        printf("Enter a number to search\n");
        scanf("%d",&search);
         mid = (start+end)/2;
         while(start<=end){
         if(a[mid] < search)
         start = mid + 1;
         else if (a[mid] == search) {
         printf("%d found at location %d.n", search, mid+1);
        break;
         }
        else
        end = mid - 1;
        mid = (start + end)/2;
        }
       if(start > end)
      printf("Not found! %d isn't present in the list.n", search);
        break;
   default:
        printf("Wrong choice, Please try again later");
        }
    return 0;
}
