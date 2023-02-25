#include<stdio.h>
int sum_odd(int);
int main()
{
    int num;
    printf("enter the n:");
    scanf("%d",&num);
    printf("sum of %d odd numbers are:%d",num,sum_odd(2*num));
}
int sum_odd(int num)
{
    if(num>0)
   {
        if(num%2!=0)
            return num+sum_odd(num-1);
        else
            sum_odd(num-1);
   }
   else
       return 0;
}