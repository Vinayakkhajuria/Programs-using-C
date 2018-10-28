#include<stdio.h>
int main()
{
    float temp;
    printf("Enter the temperature in celcius : ");
    scanf("%f", &temp);
    printf("Equivalent temperature in degree fahrenhiet  is %f",temp*1.8+32);
}
