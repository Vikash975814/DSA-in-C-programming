#include<stdio.h>
int main()
{
    int a[100];
    int n;
    printf("Enter the number to insert an arry");
    scanf("%d",&n);
    printf("Enter the Array element");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    Quicksort(a,0,n-1);
    printf("Your sorted Array element\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
void Quicksort(int a[],int lb,int ub)
{
    if(lb<ub){
    int loc=splitarray(a,lb,ub);
    Quicksort(a,lb,loc-1);
    Quicksort(a,loc+1,ub);
}
}
int splitarray(int a[],int beg,int end)
{
    int pivot=a[end];
    int i=beg-1;
    for(int j=beg;j<end;j++)
    {
        if(a[j]<=pivot){
            i++;
            int temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }
    }
    i++;
    int temp=pivot;
    a[end]=a[i];
    a[i]=temp;
    return i;
}
