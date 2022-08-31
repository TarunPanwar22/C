/*#include<stdio.h>
 int main()
{
    float a,b,c,d;
    printf("enter the value of a ,b and c is : \n");
    scanf("%f%f%f",&a,&b,&c);
    d=(a+b+c)/3;
    printf("the answer is %f",d);
    return 0;
}*/
#include<stdio.h>
int main()
{
    int a , r , c ; 
    printf("Enter the radius is : \n ");
    scanf("%d" , &r );
    a = 3.14 * r * r ; 
    c = 2 * 3.14 * r ;
    printf("Area is : %d ", a );
    printf("Circumference is : %d " , c );
    return 0;
}