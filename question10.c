#include<stdio.h>
int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    a=a/10;
    a=a*10;
    printf("number stored in a variable with last digit zero is %d",a);
}