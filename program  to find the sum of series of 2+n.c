#include<stdio.h>
void main()
{
    int n,i;
    int sum=0;
    printf("ENTER THE N i.e:max values of series: ");
    scanf("%d",&n);
    sum=(n * (n+1))/2;
    printf("SUM OF THE SERIES : ");
    for(i=1;i<=n;i++)
{
    if(i!=n)
        printf("%d+ ",i);
    else
        printf("%d =%d",i,sum);

}
return 0;
}
