/*Write a program to find which  number is greater */
#include<stdio.h>
int main()
{
    int a , b;
    printf("enter the value of a is \n");
    scanf("%d",&a);
    printf("enter the value of b is \n");
    scanf("%d",&b);
    if(a>b)
    {
        printf("a is greater ");
    }
    if(a<b)
    {
        printf("b is greater ");
    }
    return 0;
}