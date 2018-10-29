#include<stdio.h>
 int palindrome(int n)
 {

     int r,rev = 0 ,temp;
     temp=n;
     while(n!=0)
     {
         r=n%10 ;
         rev=rev*10+r ;
         n=n/10;
          }
          if(rev==temp)
            return  1;
          else
            return 0 ;

 }
void main()
{
    int n,flag ;
    printf("Enter a number :");
    scanf("%d", &n);
    flag=palindrome(n);
    if(flag==1)
        printf("%d is a palindrome", n);
    else
    {
        printf("%d is not a palindrome", n);
        getch();
    }
}
