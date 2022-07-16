#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("now is %d and b is %d",a,b);
}