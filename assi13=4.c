#include<stdio.h>
int sum_digits(int );
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    printf("sum of %d numbers digit are %d",num,sum_digits(num));
} 
int sum_digits(int num)
{
    if(num)
    {
         
        return sum_digits(num/10)+(num%10);
    }
}