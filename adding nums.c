#include<stdio.h>
void main()
{
    int a,sum=0;
    do
    {
        printf("enter a number:");
        scanf("%d",&a);
        sum=sum+a;
    }while(a!=0);
    printf("total sum=%d",sum);
}
