#include<stdio.h>
void main()
{
  char operator;
  int a,b;
  printf("enter an operator (+,-,%,*,/):");
  scanf("%c",&operator);
  printf("enter two numbers:");
  scanf("%d%d",&a,&b);

    switch(operator)
    {
    case '+':
        printf("sum of %d + %d = %d",a,b,a+b);
        break;
    case '-':
       printf("difference of %d - %d = %d",a,b,a-b);
       break;
    case '*':
        printf("product of %d * %d = %d",a,b,a*b);
        break;
    case '%':
        printf("remainder of %d % %d = %d",a,b,a%b);
        break;
    case '/':
        printf("quotient of %d / %d = %d",a,b,a/b);
        break;
    }
}
