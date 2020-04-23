#include<stdio.h>
#include<stdlib.h>
void displaystring(char str[]);

int main()
{
    char str[10];
    printf("enter string:");
    fgets(str, sizeof(str),stdin);
    displaystring(str);
    return 0;
}
    void displaystring(char str[])
{
    printf("string output:");
    puts(str);
}
