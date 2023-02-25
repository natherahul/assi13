#include<stdio.h.>
void fibbonacci(int ,int,int);
int main()
{
    int num,n1=-1,n2=1;
    printf("enter the number:");
    scanf("%d",&num);
    printf("first %d fabbonacci numbers are ",num);
    fibbonacci(num,n1,n2);
}
void fibbonacci(int num,int n1,int n2)
{
    int n3;
    if(num)
    {
        n3=n1+n2;
        n1=n2;n2=n3;
        printf("%d ",n3);
        num--;
        fibbonacci( num,n1,n2);
      
    }

}