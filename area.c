/*write a program to enter the length and breadth of the rectangle then find the area and perimeter of the rectangle
#include<stdio.h>
#include<math.h>
int main()
{
    int  area , length , breadth , perimeter , diagnol;
    printf("enter the value of length and breadth is :\n");
    scanf("%d%d",&length,&breadth);
    printf("the area of rectangle is %d ", area = (length * breadth));
    printf("\n perimeter of the rectangle is : %d ", perimeter = 2*(length +breadth));
    printf("\n diagnol of the rectangle is : %d ", diagnol = sqrt(length*length+breadth*breadth));
}*/
//write a program to enter the radius  of the circle then find the area and circumference of the circle//
#include<stdio.h>
int main()
{
    int r , a , c , a1,b,h;
    printf("enter the value of r is \n");
    scanf("%d",&r);
    printf("enter the area of circle is %d \n" , a = 3.14*r*r);
    printf("circumference of the circle is %d \n" , c = 2*3.14*r);
    printf("Enter the value of  base and height is :\n");
    scanf("%d%d",&b,&h);
    printf("Enter the area of triangle is=%d\n",a1=0.5*b*h);
}

