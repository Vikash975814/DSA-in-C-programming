#include<stdio.h>
#include<stdlib.h>
void BubbleSort(int a[],int n);
void InsertionSort(int a[],int n);
void SelectionSort(int a[],int n);
int main()
{
    int i,j,n,a[100],ch;
    printf("Enter the Size of Array");
    scanf("%d",&n);
    printf("Enter the Array Element");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    while(1)
    {
        printf("Enter the choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            BubbleSort(a,n);
            break;
            case 2:
            InsertionSort(a,n);
            break;
            case 3:
            SelectionSort(a,n);
            break;
            default:
            exit(0);
        }
    }
}
void BubbleSort(int a[],int n)
{
    int pass,j,temp;
    for(pass=0;pass<n-1;pass++)
    {
        for(j=0;j<n-pass-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Your Array Element is :\n");
    for(j=0;j<n;j++)
    {
        printf("%d ",a[j]);
    }
}
void SelectionSort(int a[],int n)
{
    int i,j,temp,small;
    for(int i=0;i<n-1;i++)
    {
        small=i;
        for (j = i+1; j < n; j++){
            if(a[small]>a[j])
            {
                small=j;
            }
        }
        temp=a[small];
        a[small]=a[i];
        a[i]=temp;
}  
  printf("Your Array Element is :\n");
    for(j=0;j<n;j++)
    {
        printf("%d ",a[j]);
    }
}
void InsertionSort(int a[],int n)
{
    int i, item, j; 
    for (i = 1; i < n; i++) {
       item = a[i];
        j = i - 1;
    while (j >= 0 && a[j] > item) { 
            a[j + 1] = a[j]; 
             j--; 
        } 
        a[j + 1] = item; 
    } 
    printf("Your Array Element is :\n");
    for(j=0;j<n;j++)
    {
        printf("%d ",a[j]);
    }
}







