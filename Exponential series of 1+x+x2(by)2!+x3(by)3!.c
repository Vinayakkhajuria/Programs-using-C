#include<stdio.h>
void main()
{

    int x,n,fact,i,j;
    float sum=1;
    printf("ENTER THE 'x' VALUE : ");
    scanf("%d",&x);
    printf("\n ENTER THE 'n' VALUE : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=1;
        for(j=1;j>=1;j--)
            fact=fact*j;
        sum=sum+(pow(x,i)/ fact);
    }
    printf("\n SUM OF SERIES : %f",sum);
}
