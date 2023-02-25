#include<stdio.h>
int fact(int);
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    printf("factorial of %d numbers is %d",num,fact(num));
}
int fact(int num)
{
    if(num)
    {
        return num*fact(num-1);
    }
    else
        return 1;
}