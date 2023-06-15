#include <stdio.h>  
void merge(int a[], int beg, int mid, int end)    
{    
    int i, j, k;  
    int n1 = mid - beg + 1;    
    int n2 = end - mid;    
    int A1[n1],A2[n2];  
    for (int i = 0; i < n1; i++)
    { 
    A1[i] = a[beg + i];    
    }
    for (int j = 0; j < n2; j++)
    {
    A2[j] = a[mid + 1 + j];   
    }
    i = 0;  
    j = 0;  
    k = beg;  
    while (i < n1 && j < n2)    
    {    
        if(A1[i] <=A2[j])    
        {    
            a[k] = A1[i];    
            i++;    
        }    
        else    
        {    
            a[k] =A2[j];    
            j++;    
        }    
        k++;    
    }    
    while (i<n1)    
    {    
        a[k++] =A1[i++];    
    }    
    while (j<n2)    
    {    
        a[k++] =A2[j++];  
    }    
}    
void mergeSort(int a[], int beg, int end)  
{  
    if (beg < end)   
    {  
        int mid = (beg + end) / 2;  
        mergeSort(a, beg, mid);  
        mergeSort(a, mid + 1, end);  
        merge(a, beg, mid, end);  
    }  
}  
int main()  
{  
       int a[100], n;
       printf("Enter the size of an array");
       scanf("%d",&n);
       printf("Enter the Array Element");
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
         mergeSort(a, 0, n - 1);  
        printf("Your Array Element is:\n");
        for(int i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
      return 0;  
}  
