#include<stdio.h>
long fact(int n);
void main()
{
int n,r;
long f1,f2,f3,b;
printf("Enter natural numbers n and r (n>r):  ");
scanf("%d %d", &n ,&r);
f1 =fact(n) ;
f2 =fact(r) ;
f3 =fact(n-r) ;
b = f1/(f2*f3) ;
printf("Binomial coefficient = %ld",b);
getch();
}
long fact(int n)
{
    int i;
    long f=1;
    for(i=1;i<=n;i++)
        f=f*i;
    return f;
}

