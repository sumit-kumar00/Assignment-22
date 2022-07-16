#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,temp,c;
    printf("enter a three didgit number");
    scanf("%d",&a);
    temp=a;
    while(temp>0)
    {
        b=temp%10;
        c=c+b;
        temp=temp/10;
    }
    printf("addition of number is %d",c);
}