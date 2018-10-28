#include<stdio.h>
void main()
{

int a;
printf("Enter 1 or 2 :  ",a);
scanf("%d", &a);
if (a==1)
{
    printf("You Entered 1");
}
else
{
    if (a==2)
    {
        printf("You entered 2");
    }
    else
    {
        printf("What is wrong with you");
    }
}
}
