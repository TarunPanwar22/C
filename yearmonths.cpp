/*#include<stdio.h>
int main()
{
    int y , m , d ;
    printf("Enter the days is : \n");
    scanf("%d",&d);
    y = d/365;
    d = d%365;
    m = d/30;
    d = d%30;
    printf("\nyear : %d ",y); 
    printf("month : %d ",m);
    printf("days : %d ",d);
    return 0;

}*/
#include<stdio.h>
int main()
{
    int a ,b , c , d ,e , A ;
    printf("enter the amount is \n");
    scanf("%d",&A);
    a = A/500;         // 3
    A = A%500;         //245
    b = A/100;          //2
    A = A%100;          //45
    c = A/50;          //0
    A = A%50;           //45
    d = A/10;          //4
    A = A%10;          //5
    e = A/2;           //2
    A = A%2;           //1
    printf("\n500 is %d ",a);
    printf("\n100 is %d ",b);
    printf("\n50 is %d ", c);
    printf("\n10 is %d ",d);
    printf("\n2 is %d ", e);
    printf("\n1 is %d ",A);
    return 0;

}