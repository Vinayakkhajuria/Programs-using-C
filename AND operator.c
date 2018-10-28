#include<Stdio.h>
int main()
{
int a;
printf("Enter a negative integer which is perfectly divisible by 2 : ");
scanf("%d", &a);
if ((a<0)&&(a%2==0))
{

    printf("Good Job!");

}
else
{
    printf("What's wrong with you?");
}

}
