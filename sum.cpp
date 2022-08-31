/*Write a program to accept a 5 digit no then find the sum of all the digits 
#include<stdio.h>
int main()
{
    int a , b , c , d , s , n;
    printf("enter the no. is : ");
    scanf("%d",&n);
    a = n%10;
    n = n/10;
    b = n%10;
    n = n/10;
    c = n%10;
    n = n/10;
    d = n%10;
    n = n/10;
    s = a+b+c+d+n;
    printf("sum : %d",s);
    return 0;
}
/*Write a program to accept a 5 digit no. then find the sum of reverse all the digit 
#include<stdio.h>
int main()
{
     int a , b , c , d , s , n;
    printf("enter the no. is : ");
    scanf("%d",&n);
    a = n%10;
    n = n/10;
    b = n%10;
    n = n/10;
    c = n%10;
    n = n/10;
    d = n%10;
    n = n/10;
    s = a*10000+b*1000+c*100+d*10+n*1;
    printf("sum : %d",s);
    return 0;
}*/
