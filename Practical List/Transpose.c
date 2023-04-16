#include<stdio.h>
int main()
{
    int A[10][10],B[10][10],i,j,n,m;
    printf("Enter the row and column do you want to in matrix");
    scanf("%d%d",&m,&n);
    printf("Enter the Array element:\n");
    for(i=0;i<m;i++){
    for(j=0;j<n;j++)
        scanf("%d",&A[i][j]);
    }
printf("your  Array element is:\n");
    for(i=0;i<m;i++){
    for(j=0;j<n;j++)
        printf(" %d ",A[i][j]);
    printf("\n");
}
for(i=0;i<m;i++){
    for(j=0;j<n;j++)
        B[j][i]=A[i][j];
}
printf("Transpose of 2D matrix is:\n");
for(i=0;i<n;i++){
    for(j=0;j<m;j++)
        printf(" %d ",B[i][j]);
    printf("\n");
}
return 0;
}
