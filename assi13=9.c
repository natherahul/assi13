#include<stdio.h>
int power(int ,int,int);
int main()
{
    int num,i,s=1;
    printf("enter the number:");
    scanf("%d",&num);
    printf("enter the power of number:");
    scanf("%d",&i);
    printf("power of %d rays to %d is %d",num,i,power(num,i,s));
}
int power(int n,int i,int s)
{
    if(i>0)
    {
        
        s=s*n;
        power(n,--i,s);
    }
    if(i==0)
        return s;
}