#include<stdio.h>
int hcf(int ,int ,int);
int main()
{
    int n1,n2,min;
    printf("enter the two numbers:");
    scanf("%d%d",&n1,&n2);
    min=n1<n2?n1:n2;
    printf("hcf of %d and %d is %d",n1,n2,hcf(n1,n2,min));
}
int hcf(int num1,int num2,int min)
{
    
    if(num1%min==0 && num2%min==0)
        return min;
    else
        hcf(num1,num2,min-1);
}