/*Write a program to divided two number
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the value of a is \n");
    scanf("%d",&a);
    printf("enter the value of b is \n");
    scanf("%d",&b);
    printf("The divided answer is %d",a/b);
    return 0;
}
second method*/
#include<stdio.h>
int main()
{
    int a , b , c ;
    printf("enter the value of a and b is \n");
    scanf("%d%d",&a,&b);
    c = a/b;
    printf("the divided answer is %d",c);
    return 0;
}