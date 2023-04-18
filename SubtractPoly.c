#include<stdio.h>
#include<stdlib.h>
typedef struct nodeType{
    int coff;
    int power;
    struct nodeType * next;
}node;
void createpoly(node **poly,int c,int p);
void Subtractpoly(node * poly1,node * poly2,node** poly3);
void displaypoly(node * poly3);
int main()
  {
        int c,p,n;
        printf("Enter the highest power of polynomial do you want to more");
        scanf("%d",&n);
     node * poly1=NULL,*poly2=NULL,*poly3=NULL;
     for(int i=1;i<n;i++)
     {
         printf("Enter the value of c and f POLY1");
         scanf("%d%d",&c,&p);
         createpoly(&poly1,c,p);
         
     }
     for(int i=1;i<n;i++)
     {
         printf("Enter the value of c and f POLy2");
         scanf("%d%d",&c,&p);
         createpoly(&poly2,c,p);
     }
      Subtractpoly(poly1,poly2,&poly3);
     displaypoly(poly3);
}
void createpoly(node **poly,int c,int p)
{
    node * ptr;
    ptr=(node*)malloc(sizeof(node));
    ptr->coff=c;
    ptr->power=p;
    if(*poly==NULL)
    {
        ptr->next=NULL;
        *poly=ptr;
    }else{
        ptr->next=*poly;
        *poly=ptr;
    }
}

void Subtractpoly(node * poly1,node * poly2,node** poly3)
{
    int c,p;
    while(poly1!=NULL && poly2!=NULL)
    {
        if((poly1->power)>(poly2->power))
        {
            c=poly1->coff;
            p=poly1->power;
            createpoly(poly3,c,p);
            poly1=poly1->next;
        }else if((poly1->power)<(poly2->power)){
            c=poly2->coff;
            p=poly2->power;
            createpoly(poly3,c,p);
            poly2=poly2->next;
        }else
        {
            c=(poly1->coff)-(poly2->coff);
            if(c!=0){
                p=poly1->power;
                createpoly(poly3,c,p);
            }
        }
        poly1=poly1->next;
        poly2=poly2->next;
    }
    if(poly1==NULL)
        for(;poly2!=NULL;poly2=poly2->next)
        {
            createpoly(poly3,poly2->coff,poly2->power);
        }else
        for(;poly1!=NULL;poly1=poly1->next)
        {
            createpoly(poly3,poly1->coff,poly1->power);
    }
}

void displaypoly(node * poly3)
{
    node * ptr;
    ptr=poly3;
    printf("Your equation is\n");
    while(ptr!=NULL)
    {
        
        printf(" + %dx^%d",ptr->coff,ptr->power);
        ptr=ptr->next;
    }
}
