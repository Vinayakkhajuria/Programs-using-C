#include<stdio.h>
void main()
{
int n,i,sum=0;
printf("ENTER ANY NUMBER : ");
scanf("%d",&n);
for(i=1;i<n;i=i+2)
{
    printf("%d \n",i);
    sum=sum+i;

}
printf("%d \n",n);
printf("\n sum=%d",sum+n);
}


