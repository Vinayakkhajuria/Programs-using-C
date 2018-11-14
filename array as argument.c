#include<stdio.h>
#include<math.h>
void function(int arr[],int val);
void  main()
{
    int array[5]={2,4,3,5,7};
    int power;
    printf("ENTER POWER VALUE :  ");
    scanf("%d",&power);
    function(array, power);
getch();
}
void function(int arr[],int val)
{
int i;
for(i=0;i<5;i++)
{
    printf("\n VALUE %d : %f",(i+1),pow(arr[i],val));
    }
}
