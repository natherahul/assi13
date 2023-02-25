#include<stdio.h>
int digits(int ,int);
int main()
{
    int num,i=0;
    printf("enter the number:");
    scanf("%d",&num);
    printf("digits in %d is %d",num,digits(num,i));
}
int digits(int num,int i)
{
     if(num>0)
     {
        i++;
        digits(num/10,i);
     }
    if(num==0)
        return i;
     

}