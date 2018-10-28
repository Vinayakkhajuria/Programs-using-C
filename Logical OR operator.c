#include<stdio.h>
int main()
{
char  ch;
printf("Enter the alphabet 'a' :  ");
scanf("%c", &ch);
if((ch=='a')||(ch=='A'))
{
printf("WELL DONE!");
}
else
{
printf("Incorrect input");
}
}
