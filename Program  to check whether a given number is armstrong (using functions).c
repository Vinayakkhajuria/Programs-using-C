#include<stdio.h>
int check_armstrong(int n);
void main()
{

    int n;
    printf("Armstrong numbers from 1 to 1000 are as shown : \n");
    for(n=1;n<=1000;n++)
        if(check_armstrong(n)==1)
        printf("%d",n );
    getch() ;
}
int check_armstrong(int n)
{

    int sum=0 , r, temp ;
    temp=n;
    while(n!=0)
    {
        r=n%10 ;
        sum=sum+r*r*r ;
        n=n/10;
    }
    if (sum==temp)
        return 1;
    else
        return 0;
}
