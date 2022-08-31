/*write a program the base and perpendicullar of triangle then find the hypotenous of triangle 
#include<stdio.h>
#include<math.h>
int main()
{
    float b,p,h;
    printf("enter the value of base and perpendicular is : \n");
    scanf("%f%f",&b,&h);
    h = sqrt(b*b+h*h);
    printf("\nthe anwer is :%f",h);
    return 0;
}*/
/*write a program to enter the three side of a scalene triangle then find the area using heron's formula 
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s, ar;
    printf("enter the three side is :\n");
    scanf("%f%f%f",&a,&b,&c);
    s = (a+b+c)/2;
    ar=sqrt((s*(s-a)*(s-b)*(s-c)));
    printf("\nthe answer is :%f",ar);
    return 0;
}*/
/*Write a program to enter the side of an equilateral triangle then find the area of the triangle
#include<stdio.h>
#include<math.h>
int main()
{
    float a,s;
    printf("enter the three side of an equilateral triangle is :\n");
    scanf("%f",&s);
    a = sqrt(3)*s*s/4;
    printf("\nthe answer of the three side is : %f",a);
    return 0;
}*/
/*Write a program to enter the two sides of an isolasious triangle and then find the area
#include<stdio.h>
#include<math.h>
int main()
{
    float ar, a , b ;
    printf("enter the twp side of an isolasious triangle is : \n");
    scanf("%f%f",&a,&b);
    ar =b/4*sqrt(4*a*a-b*b);
    printf("\nthe answer is :%f",ar);
    return 0;

}*/
/*Write a program to enter the temprature feharenheit then converted into calcius
#include<stdio.h>
#include<math.h>
int main()
{
    float c,f;
    printf("enter the value of f is :\n");
    scanf("%f",&f);
    c =(f -32)/1.8;
    printf("\nthe answer of f is :%f ",c);
    return 0;
}*/
/*Write a program to enter the temprature calcius then converted into faharenheit
#include<stdio.h>
#include<math.h>
int main()
{
    float f,c;
    printf("enter the value of c is : \n");
    scanf("%f",&c);
    f =1.8*c+32;
    printf("the answer of feharenheit is : %f",f);
    return 0;
}*/
