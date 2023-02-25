#include<stdio.h>
int sum(int );
int main()
{
    int num,s;
    printf("enter the n:");
    scanf("%d",&num);
    printf("the sum of %d natural numbers are:",num);
    s=sum(num);
    if(s!=0)
        printf("%d",s);
    else
        printf("%d",s);
}
int sum(int num)
{
    if(num)
        return num+sum(num-1); 
    else
       return 0;
}