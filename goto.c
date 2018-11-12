#include<Stdio.h>
void main(){

int a=1;
printf("THE value of a is: %d\n",a);
for(a=1;a<=10;a++)
{
    printf("%d\n",a);

    if(a==4)
        goto OUT;
}
OUT :
    printf("We are out of the loop!\n");

}
