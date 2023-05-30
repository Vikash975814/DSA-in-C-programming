#include <stdio.h>
#include<stdlib.h>
void heapyfy(int a[],int n);
void reahypyphydownward(int a[],int start,int index);
void heapsort(int a[],int n);
int main(){
    int a[100], n;
    printf("Enter the size of an array");
    scanf("%d",&n);
    printf("Enter the Array element");
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    heapsort(a,n);
    printf("Your sorted heapsort is:\n");
    for(int i=1;i<=n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}

void heapyfy(int a[],int n){
    int index=n/2;
    for(int i=index;i>=1;i--){
        reahypyphydownward(a,i,n);
    }
}
void reahypyphydownward(int a[],int start,int finish){
    int lc,rc,max,index,temp;
    lc=2*start;
    rc=lc+1;
    if(lc<=finish){
        max=a[lc];
        index=lc;
        if(rc<=finish){
        if(a[rc]>max){
            max=a[rc];
            index=rc;
        }
    }
    if(a[start]<a[index]){
        temp=a[start];
        a[start]=a[index];
        a[index]=temp;
        reahypyphydownward(a,index,finish);
    }
}
}
void heapsort(int a[],int n){
    heapyfy(a,n);
    for(int i=n;i>1;i--){
        int temp=a[1];
        a[1]=a[i];
        a[i]=temp;
        reahypyphydownward(a,1,i-1);
    }
}
