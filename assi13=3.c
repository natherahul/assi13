#include<stdio.h>
int sum_square(int );
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    printf("square of %d natural numbers %d ",num,sum_square(num));
}
int sum_square(int num)
{
    if(num)
        return (num*num)+sum_square(num-1);
}