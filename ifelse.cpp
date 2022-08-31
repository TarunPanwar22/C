/*Write a program to find which number is odd and even*/
#include<stdio.h>
int main()
{
    int a ;
    printf("enter the number is \n");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("the number is even\n");
    }
    else
    {
        printf("the number is odd\n");
    }
    return 0;
}