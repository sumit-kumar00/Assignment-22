#include<stdio.h>
#include<conio.h>
int main()
{
    int num,dig;
    printf("enter a number");
    scanf("%d",&num);
    printf("enter a digit");
    scanf("%d",&dig);
    num=num*10;
    num=num+dig;
    printf("new number is %d",num);
}


