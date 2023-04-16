#include<stdio.h>
#include<conio.h>
void Addition(int A[3][3],int B[3][3],int C[3][3],int i,int j);
void Multiplication(int A[3][3],int B[3][3], int C[3][3],int i,int j,int k);
void main(){
int A[3][3],B[3][3],C[3][3],k,i,j,ch;
printf("Enter the First Array Element\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        scanf("%d",&A[i][j]);
    }
}
printf("Enter the Second Array Element\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        scanf("%d",&B[i][j]);
    }
}
printf("Your First Array Element\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%d ",A[i][j]);
    }
    printf("\n");
}
printf("Your Second Array Element\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%d ",B[i][j]);
    }
    printf("\n");
}
printf("Enter the Choice");
scanf("%d",&ch);
switch(ch){
case 1:
Addition( A, B, C, i, j);
break;
case 2:
Multiplication(A, B, C, i, j,k);
break;
default:
printf("Wrong Choice");
}
getch();
}
void Addition(int A[3][3],int B[3][3],int C[3][3],int i,int j)
{
printf("Addition is 2D Array Element\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        C[i][j]=A[i][j]+B[i][j];
    }
}
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf(" %d ",C[i][j]);
    }
    printf("\n");
}
}
void Multiplication(int A[3][3],int B[3][3], int C[3][3],int i,int j,int k)
{
printf("Multiplication is 2D Array Element\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        C[i][j]=0;
        for(k=0;k<3;k++){
            C[i][j]=C[i][j]+A[i][k]*B[k][j];
        }
    }
}
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
printf(" %d ",C[i][j]);
}
printf("\n");
}
}



