#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("enter two values");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swaping a=%d and b=%d",a,b);
}