#include<stdio.h>
void main()
{
    int *ptr;
    int x=5;
    ptr=&x;
    printf("VALUE OF X : %d",x);
    printf("\nADDRESS OF x : %d", &x);
    printf("\n VALUE OF ptr : %d ",ptr);
    printf("\n VALUE AT THE ADDRESS STORED IN ptr : %d ",*ptr);
}
