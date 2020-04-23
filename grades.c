#include<stdio.h>
void main()
{
    int a;
    printf("enter the obtained marks:");
    scanf("%d",&a);
    if(a>80&&a<=100)
    {
        printf("A-grade");
    }
    else if(a<80&&a>=70)
    {
        printf("B-grade");
    }
    else if(a<70&&a>=60)
    {
        printf("C-grade");
    }
    else if(a<60&&a>=50)
    {
        printf("D-grade");
    }
    else
    {
        printf("fail");
    }
}
