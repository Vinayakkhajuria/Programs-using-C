#include<stdio.h>
#include<conio.h>
void main()
{
long unsigned sec,age;
printf("ENTER YOUR AGE:");
scanf("%lu",&age);
sec=age*365*24*60*60;
printf("YOUR AGE IN SECONDS IS:%lu",sec);
getch();
}
