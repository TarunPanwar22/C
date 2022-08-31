/*//write a program to enter the radius  of the circle then find the area and circumference of the circle//
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
}*/
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
}
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
}*/
/*Write a program to enter the print swapping of two number with using third variable 
#include<stdio.h>
int main()
{
    int a , b , c;
    printf("Enter the two number is :\n");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("\nEnter the value swapping of a is : %d ",a);
    printf("\nEnter the value swapping of b is :%d ",b);
    return 0;
}*/
/*Write a program to enter the print swapping of two number without using third variable
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the two number is :\n");
    scanf("%d%d",&a,&b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nEnter the swapping value of a is : %d",a);
    printf("\nEnter the swappping value of b is :%d",b);
    return 0;
}*/
//Write a program to accept a 5 digit no. then find the sum of reverse all the digit
/*#include<stdio.h>
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
//Write a program to accept a 5 digit no. then find the sum of all the digit
/*#include<stdio.h>
int main()
{
    int a,b,c,d,s,n;
    printf("enter the no. is : \n");
    scanf("%d",&n);
    a = n%10;
    n = n/10;
    b = n%10;
    n = n/10; 
    c = n%10;
    d = n%10;
    n = n/10;
    s = a+b+c+d+s+n;
    printf("sum %d ",s);
    return 0;
}*/
/*Write a program to enter the no. of days then find out possible no. of year no. of months and remaining days.
#include<stdio.h>
int main()
{
     long y , m , d , w , h , mi , s ; 
     printf("Enter the no. of year \n");
     scanf("%ld",&y);
    m = y * 12 ;
    d = y * 365 ;
    w = y * 52 ;
    h = y * 365 * 24 ; 
    mi = y * 365 * 24 ;
    printf("\nYear : %ld \n",y );
    printf("\nDay: %ld", d);
    printf("\nweek : %ld\n",w);
    printf("\nHour : %ld", h);
    printf("\nMinute : %ld ", mi);
    printf("\nSecond: %ld",s);
    return 0;
}*/
/*Write a program to enter the distance in km then find convert it into meter  , cm , inches , feet .
#include<stdio.h>
int main()
{
    long km , m , cm , i , f ;
    printf("Enter the value of kilometer is : \n");
    scanf("%ld", &km);
    m = km * 1000;
    cm = km * 1000 * 100;
    i = cm /2.54 ;
    f = i/12;
    printf("\nKiometer : %ld\n ", km );
    printf("\nMeter : %ld\n ", m);
    printf("\ncentimeter : %ld\n ", cm );
    printf("\nInches : %ld\n " ,i);
    printf("\nfeet : %ld\n ", f);
    return 0;
}*/
/*write a program to enter the marks of the stdudent in 5 subject then  find the percentage and average in each 100 marks.
#include<stdio.h>
int main()
{
    float math , science , english , arts , hindi , percentage , average ;

    printf("Enter the number of the student marks obtained by maths : \n ");
    scanf("%f",&math);

    printf("Enter the number of the student marks obtained by science : \n ");
    scanf("%f",&science);

    printf("Enter the number of the student marks obtained by english : \n ");
    scanf("%f",&english);

    printf("Enter the number of the student marks obtained by arts : \n ");
    scanf("%f",&arts);

    printf("Enter the number of the student marks obtained by hindi : \n ");
    scanf("%f",&hindi);

    percentage = (math + science + english + hindi + arts)/500*100;
    average = (math + science + english + hindi + arts)/5;
    printf("\nPercentage %f\n", percentage);
    printf("\nAverage %f\n", average);
    return 0;
}*/
/*Write a program to find the area of the square if the perimeter is given 
#include<stdio.h>
int main()
{
    float area , perimeter , side ;
    printf("Enter the value of perimeter of the square : \n");
    scanf("%f",&perimeter);

    side = perimeter /4 ;
    area = side *side;
    printf("\nPerimeter of the square is : %f\n",side);
    printf("\nArea :%f\n ",area);
    return 0;
}*/
/*Write a program to enter the number then check the number is even or odd
#include<stdio.h>
int main()
{
    int a;
    printf("Enter any numbr :\n");
    scanf("%d",&a);
    if(a%2==0)
    printf("%d no. is even number");
    else
    printf("%d no is odd number");
    return 0;
}*/
/*Write a program to enter the year and check the year is leap year or not 
#include<stdio.h>
int main()
{
    int year ;
    printf("Enter any year is : \n");
    scanf("%d",&year);
    if(year%4==0)
    printf("%d year is a leap year", year);
    else
    printf("%d year is a not leap year, year");
    return 0;
}*/
/* Write a program to emnter any two no. of who is largest no.
#include<stdio.h>
int main()
{
    int a , b ;
    printf("Enter any two no. is : \n");
    scanf("%d%d",&a ,&b);
    if(a>b)
    printf("%d is largest no.",a);
    if(b>a)
    printf("%d is largest no.",b);
    return 0;
}*/
/*Write a program the three no. which is greatest no.
#include<stdio.h>
main()

{
    int a , b , c ;
    printf("Enter the value of three no. is \n ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    printf("\n%d is largest no.",a);
    else if(b>a && b>c)
    printf("\n%d is largest no.",b);
    else
    printf("\n%d is largest no.",c);
    return 0;
}*/
/*Write a progam the three no. which is smallest no.
#include<stdio.h>
int main()
{
    int a , b , c ;
    printf("Enter any three no. is \n ");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b && a<c)
    printf("\n%d is smallest no.",a);
    else if(b<a && b<c)
    printf("%\n%d is smallest no.", b);
    else
    printf("\n%d is smallest no.");
    return 0;
}*/
/*Write a program to enter the no. then check the no. is positive , negative and Zero. 
#include<stdio.h>
int main()
{
    printf("Enter the no. of a is \n ");
    scanf("%d",&a);
    if(a>0)
    printf("%d is positive no.",a);
    if(a<0)
    printf("%d is negative ",a);
    if(a==0)
    printf("%d is nor positive ",a);
    return 0;
}*/
/*Write a program to enter the age of a person find the person find the person find is elegible for voting or not
#include<stdio.h>
int main()
{
    int age ;
    printf("Enter the age of person is elegible voting is :\n ");
    scanf("%d",&age);
    if(age>=18)
    printf("%d is ilegible giving for vote",age);
    if(age<18)
    printf("%d is not  ilegible giving for vote",age);
    return 0;
}*/
/*Write a program to enter then find the last digit is 7 or not 
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value of last digit no.");
    scanf("%d",&a);
    if(a>=7)
    printf("\n%d is a last digit no.  ", a);
    else
    printf("\n%d is not a last digit no.",a);
    return 0;
}*/
/*Wtite a program to enter the sides then find the number is Equilateral , scalene and isocelles
#include<stdio.h>
int main()
{
    int eq , sc , is ;
    printf("Enter the value of the side is : \n");
    scanf("%d%d%d",&eq,&sc,&is);
    if(eq==sc && sc==is && is==eq)
    {
        printf("\n%d no. is equilateral triangle",eq);
    }
    else if(eq!=sc && sc!=eq && is!=eq)
    {
        printf("\n%d no. is isocellees triangle",is);
    }
    else
    {
        printf("\n%d no. is scalene triangle",sc);
    }
}*/
/*Write a program to enter the no. then check the no. is divisible by 3 display the square of that number other wise cube of that number 
#include<stdio.h>
int main()
{
    int a , s ;
    printf("Enter the value of a is : \n ");
    scanf("%d",&a);
    if(a%3==0)
    s = a * a ;
    {
        printf("\nthe square of the no. is : %d\n", s);
    }
    if(a%3!=0)
    {
        printf("\n the cube of the no. is : %d\n ",  s = (a * a * a ));
    }
    return 0;
}*/
/*Write a program to enter the three sides of a triangle then check the triangle or not
#include<stdio.h>
int main()
{
    int a , b , c ;
    printf("Enter the sides of triangle is : \n");
    scanf("%d%d%d", &a , &b , &c );
    if(a + b > c && b + c > a && c + a > b)
    printf("%d the three sides of triangle is possible " );
    else 
    printf("%d the three sides of triangle is not possible");
    return 0; 
}*/
/*Write a program to enter the no. then check the no. is divisible by 3 display the square of that number other wise cube of that number 
#include<stdio.h>
int main()
{
    int a , s ;
    printf("Enter the value of a is : \n ");
    scanf("%d",&a);
    if(a%3==0)
    {
        s = a * a ;
        printf("\nthe square of the no. is : %d\n", s);
    }
    else
    {
        s = (a * a * a );
        printf("\n the cube of the no. is : %d\n ",  s);
    }
    return 0;
}*/
/* Write a program to enter a no. then display the day of the week using switch case 
#include<stdio.h>
int main()
{
    int n ;
    printf("Enter any number is : \n");
    scanf("%d",&n);
    switch(n)
    {
        case 1 : printf("\nMonday");
                 break;
        case 2 : printf("\nTuesday");
                 break;
        case 3 : printf("\nWednesday");
                 break;
        case 4 : printf("\nThursday");
                 break;
        case 5 : printf("\nFriday");
                 break;
        case 6 : printf("\nSaturday");
                 break;
        case 7 : printf("\nSunday");
                 break;
        default :printf("\ninvalid number");
    } 
    return 0;
}*/
/*Write a program to enter the number then display all the colours of spectrum
                           //VIBGYOR
#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number is : \n");
    scanf("%d",&n);
    switch(n)
    {
        case 1 : printf("\nViolet");
                 break;
        case 2 : printf("\nIndigo");
                 break;
        case 3 : printf("\nBlue");
                 break;
        case 4 : printf("\nGreen");
                 break;
        case 5 : printf("\nYellow");
                 break;
        case 6 : printf("\nOrange");
                 break;
        case 7 : printf("\nRed");
                 break;
        default : printf("Invalid number");        
    }
    return 0;
}*/
/*Write a program a character then check the character is vowel or not a vowel
#include<stdio.h>
int main()
{
    char character ;
    printf("Ente any character is : \n");
    scanf("%c",&character);
    switch(character)
    {
        case 'a' : printf("Vowel a ");
                 break;
        case 'e' : printf("Vowel e");
                 break;
        case 'i' : printf("Vowel i");
                 break;
        case 'o' : printf("Vowel o");
                 break;
        case 'u' : printf("Vowel u");
                 break;
        default : printf("Invalid vowel");
    }
    return 0;
}*/
/*Write a program to create a menu program ti find the area of circle , rectangle and square
#include<stdio.h>
int main()
{
    int n ;
    float r , a , l , b , s ;
    printf("1. Area of circle is : \n");
    printf("2. Area of recrangle is :\n");
    printf("3. Area of square is : \n");
    printf("Enter the choice is : ");
    scanf("%d",&n);
    switch(n)
    {
        case 1 : printf("\nenter the radius is : ",n );
                 scanf("%f",&r);
                 printf("Area of circle is : %f\n", a = 3.14 * r * r);
                 break;
        case 2 : printf("\n Enter the length and breadth is ");
                 scanf("%f%f",&l,&b);
                 printf("\nArea of rectangle is : %f \n",r = l * b );
                 break;
        case 3 : printf("\nEnter the side is : ");
                 scanf("%f",&a);
                 printf("\nArea of square is : %f\n", s = a *a);
                 break;
        default : printf("\n Invaid choice");
    }
    return 0;
}*/
/*Write a program to volume of cube or cuboid 
#include<stdio.h>
int main()
{
int n , r , l , b ;
float cyl , cub , cube , side , h ;
    printf("1. Volume of cube : \n");
    printf("2. Volume of cuboid : \n ");
    printf("3. Volume of cylinder : \n");
    printf("Enter the choice : \n ");
    scanf("%d",&n);
    switch(n)
    {
        case 1 : printf("Enter the value of side is : \n ");
                 scanf("%f",&side);
                 cube = side * side * side ;
                 printf("Volume of cube is : %f\n",cube);
                 break;
        case 2 : printf("\nEnter the value of radius and height is : \n");
                 scanf("%d%f",&r,&h);
                 printf("Volume of cyclinder is : %f\n ",cyl = 3.14 * r * h );
                 break;
        case 3 : printf("\nEnter the Volume of length , breadth and height is : \n");
                 scanf("%d%d%f",&l,&b,&h);
                 printf("\nVolume of cuboid is :%f \n ",cub = l * b * h );
                 break;
        default : printf("Invalid choice");
    }
    return 0;
}*/
/*Write a program to enter the area perameter diagnol of rectangle
#include<stdio.h>
#include<math.h>
int main()
{
    int perimeter , area , diagnol , n ;
    float length , breadth ;
    printf("1. Enter the area of rectangle is :");
    printf("\n2. Enter the perimeter of rectangle is :");
    printf("\n3. Enter the diagnol of rectangle is : ");
    printf("\n4. Enter the diagnol of rectangle is : ");
    printf("\nEnter the choice of number is :");
    scanf("%d",&n);
    switch(n)
    {
        case 1 : printf("\nEnter the value of area length and breadth is : \n");
                 scanf("%f%f" , &length , &breadth );
                 area = length * breadth ;
                 printf("\nEnter the area of rectangle is : %d\n " , area );
                 break;
        case 2 : printf("\nEnter the value of perimeter length and breadth is : \n ");
                 scanf("%f%f", & length , & breadth);
                 perimeter = 2 * (length + breadth );
                 printf("\nEnter the perimeter of rectangle is : %d\n " , perimeter);
                 break;
        case 3 : printf("\nEnter the value of diagnol length and breadth is :\n ");
                 scanf("%f%f" , &length , & breadth);
                 diagnol = sqrt(length * length + breadth * breadth);
                 printf("\ndiagnol of rectangle is : %d\n",diagnol);
                 break;
        default : printf("\nInvalid number ");
    }
    return 0;
}*/
/*Write a program to enter covert temprature from ferhanite to calcius and then covert into calcius to ferahinite
#include<stdio.h>
int main()
{
    int temprature ;
    float f , c ;
    printf("1. Enter the value of calcius temprature is : ");
    printf("\n 2. Enter the value of fehranite temprature is : ");
    printf("\n 3. Enter the choice temprature is : ");
    scanf("%d",&temprature);
    switch(temprature)
    {
        case 1 : printf("\nEnter the value of temprature c is : \n ");
                 scanf("%f", & c);
                 f = ( c + 32 ) * 1.8;
                 printf("\n convert the c to f is : %f\n" , f );
                break;
        case 2 : printf("\nEnter the value of f temprature is : \n ");
                 scanf("%f" , & c );
                 c = ( f - 32 )/1.8 ;
                 printf("convert the f to c is : %f\n ", c);
                 break;
        default : printf("\n Invalid number");
    }
    return 0;
}*/
/*Write a program to enter one operator (+,-,*,/)then perform operators then according to the operator
#include<stdio.h>
int main()
{
    int a , b , c ;
    char n ;

    printf("\n + is defined as sum ");
    printf("\n - is defined as subtration ");
    printf("\n * is defined as multiply ");
    printf("\n / is defined as devision ");
    printf("\nEnter any chose operator(+,-,*,/)");
    scanf("%c",&n);
    switch(n)
    {
        case '+' : printf("Enter the value of a and b is : \n");
                 scanf("%d%d" , &a , &b);
                 c = a + b ;
                 printf("the sum of two number is : %d\n ", c);
                 break;
        case '-'   : printf("Enter the value of a and b is : \n ");
                 scanf("%d%d", &a , &b);
                 c = a - b ;
                 printf("the difference of two number is : %d\n",c);
                 break;
        case '*' : printf("Enter the value of a and b is : \n");
                 scanf("%d%d", &a , &b);
                 c = a * b ;
                 printf("\nThe multiply of two number is : %d\n ",c);
                 break;
        case '/' : printf("\nEnter the value of a and b is : ");
                 scanf("%d%d", &a , &b);
                 c = a / b ;
                 printf("\nThe divided of two number is : %d\n",c);
                 break;
        default : printf("\nInvalid number");
    }
    return 0;
}*/
/*Write a program to find the roots of quadratic equation if the discriment is given :

d = b * b - 4 * a * c '
condition - if (d >= 0)
r1 = (-b + sqrt(b * b - 4 * a * c))/ 2 * a
r2 = (-b - sqrt( b * b - 4 * a * c ))
if ( d <0 )
Roots is imaginary*/
/*
#include<stdio.h>
#include<math.h>
int main()
{
    float a , b , c , d , r1 , r2 ;
    printf("Enter the value of a , b and c is \n ");
    scanf("%f%f%f", &a , &b , &c );
    d = b *b - 4 * a * c ;
    if(d >=0)
    {
        r1  = (-b + b * sqrt(b * b + 4 * a * c ))/(2 * a) ;
        printf("\nthe value of r1 : %f\n ", r1);
        r2 = (-b + b * sqrt(b *b - 4 * a * c ))/ (2 * a) ;
        printf("\n the value of r2 is :%f \n ", r2);
    }
    else
    {
        printf(" Roots are Imaginary ");
    }
return 0;
}*/
/*Write a program the basic salary of an employes then calculate the following allowances according to the given table
bs > = 6000                           |bs < 6000 % of basic 
hra = 40 % of basic                   |hra = 35 % of basic 
da = 30 % of basic                    |da = 25 % of basic
ta = 20 % of basic                    |ta = 15 % of basic 
pf = 10 % of baisic                   |pf = 10 % of basic 
Gross = bs + hra + da + ta 
Net = gross - pf 
#include<stdio.h>
int main()
{
    float hra , da , ta , pf , gross , net , bs ;
    printf("Enter the basic salay=ry : \n");
    scanf("%f",&bs);
    if(bs>=6000)
    {
        hra = 40/100 * bs ;
        da = 30 /100 * bs ;
        ta = 20/100 * bs ;
        pf = 10 /100 * bs ;
        printf("\nhra , da , ta , pf :\n ");
        scanf("%f%f%f%f",&hra , &da , &ta , &pf);
    }
    else
    {
        hra = 35 /100 * bs ;
        da = 25 /100 * bs ;
        ta = 15 /100 * bs ;
        pf = 10 /100 * bs ;
        printf("\nhra , da , ta , pf value is :\n ");
        scanf("%f%f%f%f", &hra , &da , &ta , &pf );
    }        gross = hra + da + ta + pf ;
        net = gross - pf ;

    printf("Enter the gross value of is : %f ", gross);
    printf("\nEnter the net value of is : %f ", net);
    return 0;
}*/
/*Income tax on the basic of Anual salary 
Anual salary     |     tax
uto 100000       |      0
10001 to 15000   |    10 % of exceeded amount 
15001 to 25000   |    20 % of exceeded amount + 5000
more than 250000 |    30 % of exceeded amount + 25000
#include<stdio.h>
int main()
{
    float as , tax ;
    printf("Enter the value of basic salary is : ");
    scanf("%f", &as);
    if(as<=100000)
    {
    tax = 0 ;
        printf("\nTax 1: %f\n",tax);
    }
    else if(as >= 100001 && as <= 150000)
    {
    tax = ( as - 100000) * 10 / 100 ;
        printf("\nTax 2: %f\n",tax);
    }
    else if(as >= 150001 && as <= 250000 )
    {
    tax = ( as - 250000 ) * 20 / 100;
        printf("Tax 3 : %f\n ", tax );
    }
    else 
    {
    tax = ( as - 250000 ) * 30 / 100;
    printf("Tax 4 : %f " , tax );
    }
    return 0; 
}*/                               
/* Write a program to prepare the electricity bill according to the given terrif 
           unit              |       charges 
upto 100 units               | 1.50 paise per unit 
10 to 200 units              | 2 rupee pr unit 
more than 200 unit           | 3 rupee pr unit 
Additiory every consumer have to pay rupee 180 for service charge 
#include<stdio.h>
int main()
{
    float un , ch ;
    printf("Enter the value of electricity bill is : ");
    scanf("%f", &un);
    if( un <= 100 )
    {
        ch = 1.50 * un + 180 ;
        printf("\nCharges Pay is : %f \n", ch );
    }
    else if( un >= 101 && un <= 200 )
    {
        ch = 2 * un + 180 ;
        printf("\nCharges Pay :%f \n " , ch );
    }
    else 
    {
        ch = 3 * un + 180 ;
        printf("\nCharges Pay is : %f\n" , ch );
    }
    return 0;
}*/
/* Write a program to enter the shopping amount , then aval the following discount according to the given conditions .
            Amount       |       discount     |       Gift 
upto 5000                |  5%                |   pent 
5001 to 10000            |  10%               |   shirt 
10001 to 20000           |  15%               |   T - shirt
more than 20000          |  20%               |   Blanket
#include<stdio.h>
int main()
{
    float amt , dis , gift ;
    printf("Enter the customer perchase shopping amount is : \n");
    scanf("%f", &amt);
    if(amt <= 5000)
    {
        dis = amt * 5 / 100;
        amt = amt - dis ;
        printf("your Gif 1 st  is : %f\n", amt);
    }
    else if(amt >= 5001 && amt <= 10000)
    {
        dis = amt * 10 / 100 ;
        amt = amt - dis ;
        printf("\nyour Gift 2 nd is : %f\n", amt);
    }
    else if(amt >= 10001 && amt <= 20000)
    {dis = amt * 15 / 100 ;
    amt = amt - dis ;
    printf("\n your Gift 3 rd is : %f\n",amt);
    }
    else 
    {
        dis = amt * 20 / 100 ;
        amt = amt - dis ;
        printf("\nyour Gift 4 th is : %f\n", amt );
    }
    return 0;
}
*/
/* A shopkeeper offer 10 % discount on the printed price of a digital camera However , a customer has to pay 6 % safes tax on the remaining amount . Write a program to calculate the amount to be paid by the customer , taking printed price . 
#include<stdio.h>
int main()
{
    float amt , dis , st , Amt ;
    printf("Enter the shopping Amount of camera is : ");
    scanf("%f",&amt);
    dis = amt * 10 ;
    Amt = (amt - dis );
    st =  (amt + Amt * 6 /100);
    printf("Sale Taxes : %f", st);
    return 0; 
}
             Loops 
                 1 - for 
                 2 - do - while 
                 3 - while 
Write  a program to genrate natural number upto 10;
#include<stdio.h>
int main() 
{
    int i ;
    
        for(i = 1 ; i <= 10; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}*/
        // 2 nd method 
/* #include<stdio.h>
int main()
{
    int i = 1;
    while( i <=10)
    {
       printf("%d\n", i);
       i++;
    }
    return 0;
*/
/*#include<stdio.h>
int main()
{
    int i = 1 ;
    do 
    {
        printf("%d\n", i );
        i++;
    }
    while(i<=10);
    return 0;
}*/
/* Write a program generate natural number upto .
#include<stdio.h>
int main()
{
    int i , n ;
    printf("Enter the no. is : \n");
    scanf("%d", &n);
    for(i = 1 ; i <= n ; i++)
    {
        printf("%d\n",i);
    }
    return 0;
}
         // 2nd method 
#include<stdio.h>
int main()
{
    int i = 1 , n ;
    printf("Enter any number is : \n ");
    scanf("%d", &n );
    do 
    {
        printf("%d\n" , i );
        i++;
    }
    while(i <= n);
    return 0;
}*/
       /*3 rd method */
/*#include<stdio.h>
int main()
{
    int i = 1 , n ;
    printf("Enter any number is :\n ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n", i);
        i++;
    }
    return 0
}*/
/* Write a program to enter a number then check it is one digit , 2 digit , 3 digit or  more than 3 digit number
#include<stdio.h>
int main()
{
    int n ;
    printf("Enter the number is : \n ");
    scanf("%d" , &n);
    if(n>=-9 && n<10)
    {
        printf("%d is a one digit number");
    }
    else if(n>=10 && n<100)
    {
        printf("%d is two digit number");
    }
    else 
    {
        printf("%d is three digit number");
    }
    return 0;
}*/
/*Write a program to find the sum of natural number upto n .
#include<stdio.h>
int main()
{
    int i , n , s = 0;
    printf("Enter the number is : \n");
    scanf("%d", &n);
    for(i = 1 ; i <= n ; i++)
    {
        s = s + i;
    }
    {
        printf("\nSum :\n %d ",s );
    }
    return 0;
}
             // 2nd method
#include<stdio.h>
int main()
{
    int n , s = 0 ;
    int i = 1 ;
    printf("Enter the number is : \n");
    scanf("%d",&n);
    while(i <= n ) 
    {
        s = s + i;
        i++; 
    }
    {
        printf("sum :\n%d\n",s);
    }
    return 0;
}*/
                //3 rd method
/*#include<stdio.h>
int main()
{
    int i = 1;
    int n , s = 0;
    printf("Enter the number is : \n");
    scanf("%d",&n);
    do
    {
        printf("\n%d",i);
        s = s + i ;
        i++ ;
    }
    while(i<=n);
    {
        
    printf("\nsum : %d ",s);
    }
    return 0;
}*/
/*Write a program to find the sum of even and odd number seperately. 
#include<stdio.h>
int main()
{
    int i , n , e = 0 , o = 0 ;
    printf("Enter the number is : \n");
    scanf("%d",&n);
    for(i = 1 ; i <= n ; i++)
    {
        if(n%2==0)
        {
            printf(" \n%d is even number ");
            e = e + i ;
        }
        else
        {
            printf("\n %d is odd number");
            o = o + i;
        }
        {
            printf("\nEven :%d\n", e);
            printf("\nOdd : %d\n", o);
        }
    }
    return 0;
}*/
/*Write a program to enter a number the print the table of the number .
#include<stdio.h>
int main()
{
    int i , n , t ;
    printf("Enter the number is : \n");
    scanf("%d",&n);
    for(i= 1 ; i <= 10 ; i++)
    {
        t = n * i ; 
        {
            printf("\nTable : %d\n",t);
        }
    }
    return 0;
}*/
/*Write a program to enter the number then find the factorial of the number . 
#include<stdio.h>
int main()
{
    int fact = 1 , i , n ;
    printf("Enter the number is : \n");
    scanf("%d",&n);
    for(i = 1 ; i <= 5 ; i++)
    {
        fact = fact * i ;
    }
    {
        printf("\nFactorial :\n%d ",fact);
    }
    return 0 ;
}*/
/*Write a program to ente a number then find the factors of the number (exceeded the number itself)
eq - 6 = 1,2,3 ;

#include<stdio.h>
int main()
{
	int i , n , f ;
	printf("Enter any number is : \n");
	scanf("%d",&n);
	for(i = 1 ; i <= n ; i++)
	{
		f = n /i ;
		printf("\nFactors: \n %d",f);
	}
	return 0;
}*/
/*Write a program to enter a number then check the number is perfect number or not .
//eq -: 6 = 1,2,3 = 1 + 2 + 3 = 6.
#include<stdio.h>
int main()
{
    int i , n , s =0 ;
    printf("Enter the number is : \n");
    scanf("%d",&n);
    for(i=1 ; i < n ; i++)
    if(n%i==0)
    {
        s = s + i;
    }
    if(n ==s )
    {
        printf("the number is perfect ");
    }
    else 
    {
        printf("the number is not perfect");
    }
    return 0;
}*/
/*Write a program to enter a number than find the sum of all the sum of all the digit of the number 
//eq:- 1234 = 1 + 2 + 3 + 4 = 10;
#include<stdio.h>
int main()
{
    int n , r , s = 0;
    printf("Enter the number is : \n ");
    scanf("%d",&n);
    while(n>0)
    {
        r = n % 10 ;
        n = n / 10 ;
        s = s + r ;
    }
    {
        printf("the sum of all the digit number is : %d",s);
    }
    return 0;
} */
/*Write a program to enter a number than check the reverse of a  number 
//eq :- 1234 = 4321 ; 
#include<stdio.h>
int main()
{
    int n , r , s = 0 ;
    printf("Enter the number is : \n");
    scanf("%d",&n);
    while(n>0)
    {
        r = n % 10 ;
        n = n / 10 ;
        s = s * 10 + r ;
    }
    {
        printf("Reverse : %d", s );
    }
    return 0;
}*/
/*Write a program to enter a number then check the number is palindrom or not 
                  //eq :-  121 , 111 , 101 , 202 , 555  =  121 , 111 , 101 , 202 , 555;
#include<stdio.h>
int main()
{
    int n , r , p , s = 0;
    printf("Enter the number is : \n");
    scanf("%d",&n);
    p = n ;
    while(n>0)
    {
        r = n % 10 ;
        n = n / 10 ;
        s = s * 10 + r ;
    }
    if(p==s)
    {
        printf("the number is palindrome",p);
    }
    else
    {
        printf("the number is not palindrome",p);
    }
    return 0;
}*/
/*Write a program to enter a number then check the number is Armstrong or not 
                   //eq :- 153 = 1^3 + 5^3 + 3^3 ;
#include<stdio.h>
int main()
{
    int n , r , s = 0 , arm ;
    printf("Enter the number is : \n");
    scanf("%d", &n );
    arm = n ;
    while(n>0)
    {
        r = n % 10 ;
        n = n / 10 ;
        s = s + r * r * r ;
    }
    if( arm == s )
    {
        printf("the number is armstrong",arm);
    }
    else
    {
        printf("the number is not armstrong",arm);
    }
    return 0;
}/*
/*Write a program to enter a number then check the number is mystrical number or not . 
               //eq :- 123 = 1 + 2 + 3 = 6 ;
#include<stdio.h>
int main()
{
    int n , r , s = 0 , m = 1 , M ;
    printf("Enter the number is : \n ");
    scanf("%d",&n);
    M = n ;
    while(n>0)
    {
        r = n % 10 ;
        n = n / 10 ;
        s = s + r ;
        m = m * r ;
    }
    if(s==m)
    {
        printf("the number is mystical number ");
    }
    else
    {
        printf("the number is not mystical number");
    }
    return 0;
}*/
/*Write a program to enter a number then check the number is neon number or not 
           //eq -:  9 = 81 = 8 + 1 = 9 ;
#include<stdio.h>
int main()
{
    int a , n , r , s = 0; 
    printf("Enter the neon number is : \n");
    scanf("%d",&n);
    a = n * n ;
    while(a >0)
    {
        r = a %10 ;
        s = s + r ; 
        a = a /10 ;
    }
    if(n==s)
    {
        printf("the number is neon number ");
    }
    else 
    {
        printf("the number is not neon number");
    }
    return 0;
}*/
/*Write a program to enter the swaping two number with temp variable and with temp variabe 
#include<stdio.h>
int main()
{
    int a , b  , c ;
    printf("Enter the number of a and b is : \n  ");
    scanf("%d%d",&a,&b);
    c = a ;
    a = b ;
    b = c ;
    printf("Enter the swapping of number c  is : %d ", c);
    printf("Enter the swapping of b is : %d ",a);
    return 0;    
}*/
/*#include<stdio.h>
int main()
{
    int a , b ;
    printf("Enter the before swapping value is : \n");
    scanf("%d%d" , &a,&b);
    a = a + b ;
    b = a - b ;
    a = a - b ;
    printf("Enter the after swapping value is a  : %d ", a );
    printf("Enter the after swapping value b is : %d ", b );
    return 0;
}*/
/*Write a program to search an element in an array
#include<stdio.h>
int main()
{
    int A[8]={2 , 3 , 4 , 23 , 42 , 45 , 13 , 8 };
    int x , p = -1 , i;
    printf("Enter a no. to search the value of array number is : \n");
    scanf("%d",&x);
    for(i=0 ; i < 8 ; i++ )
    {
        if(x == A[i])
        {
            p = i ;
            break ; 
        }
        
    }
    if(p==-1)
    {
        printf("\n%d not found in array element ",x );
    }
    else 
    printf("\n %d  is found at position %d",x,p);
    return 0;
}*/
/*Write a program to enter a number then check the number is nevin number or not . 
                     //eq : 72 = 7 + 2 = 9 ; 
                     //72 /9 = 8 ;
#include<stdio.h>
int main()
{
    int n , r , s = 0 ; 
    printf("Enter the number is : \n");
    scanf("%d", &n);
    while (n >0 )
    {
        r = n % 10 ;
        n = n / 10 ;
        s = s + r ; 
    }
        if (n%s==0)
        {
            printf("\nthe number is nevin number");
        }
        else 
        {
            printf("\nthe number is not nevin number");
    }
    return 0;
}*/
/* Write a program to enter the count number of the number .
              //eq : 1234 = 4 digit number
#include<stdio.h>
int main()                          
{
    int n , i = 0  , r , s = 0 ;
    printf("Enter the number is : \n");
    scanf("%d",&n);
    while ( n > 0 )
    {
        n = n / 10 ; 
        i ++ ; 
    }
    printf("Enter the digit number number Is : %d " , i);

}*/
/*Write a program to enter the number then find the largest digit of number . 
                //eq : 385 = 8 is largest number . 
#include<stdio.h>
int main()
{
    int n , r , max = 0 ;  
    printf("Enter the number is : \n");
    scanf("%d", &n);
    while (n>0)
    {
        r = n % 10 ;
        if (r > max )
        
            max= r ;
            n = n / 10 ; 
    }
        {
            printf("the largest number is : %d", max);
        }
        return 0 ;
    }*/
/*Write a program to enter the number then find the smallest digit of number. 
#include<stdio.h>
int main()
{
    int n , r , min = 9 ;
    printf("Enter the number is : \n ");
    scanf("%d",&n);
    while (n>0)
    {
        r = n % 10 ;
        if(min > r)
        min = r ;
        n = n / 10 ;
    }
    {
        printf("the smallest number is : %d", min);
    }
    return 0;
}*/
/*Write a program a number or number then the H.C.F.
#include<stdio.h>
int main()
{
    int a , b , i , h ; 
    printf("Enter the two number is : \n");
    scanf("%d%d", &a , &b );
    for ( i = 1 ; i <= a ; i++)
    {
    if(a%i==0 && b%i==0)
    h = i ; 
    }
    {
    printf("\nthe H.C.F number is :%d ", h);
    }
    return 0; 
}*/
/*Write a program a number or then the l.C.
#include<stdio.h>
int main()
{
    int a , b , i , h , Lcm ;
    printf("Enter the number is : \n");
    scanf("%d%d", &a , &b);
    for(i = 1 ; i <= a ; i++)
    {
        if (a %i ==0 && b % i == 0)
        h = i ;
        Lcm = a * b / h ;
    }
    {
        printf("\nthe L . C . M number is : %d", Lcm);
    }
    return 0;
}*/
/*Write a program to generate the febonicca series upto terms .
           // eq : 1 , 1 , 2 , 3 , 5 , 8 , 13 , 21 , 34 , 55 , 89 .
#include<stdio.h>
int main()
{
    int n , a = 0 , b = 0 , c = 1 , i ;
    printf("Enter the number is : \n");
    scanf("%d",&n);
    for(i=1; i<=n ; i++)
    {
         printf("%d\n",c);
         a = b ; 
         b = c ;
         c = a + b ;
    }
    return 0;
}*
                // NESTED LOOPS 
/*Write a program to draw to pattern USING NESTED LOOPING 
    1
    1 2 
    1 2 3 
    1 2 3 4
    1 2 3 4 5
#include<stdio.h>
int main()
{
    int i , j ; 
    for (i=1 ; i <= 5 ; i++)
    {
        for (j = 1 ; j <= i ; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}*/
/*
5 4 3 2 1 
5 4 3 2
5 4 3 
5 4 
5 
#include<stdio.h>
int  main()
{
    int i , j ;
    for (i= 1 ; i <= 5 ; i ++ )
    {
        for (j =5 ; j >= i ; j-- )
    {
        printf("%d",j);
    }
    printf("\n");
    }
    return 0;
}*/
/*
5 4 3 2 1 
4 3 2 1 
3 2 1 
2 1 
1 
#include<stdio.h>
int main()
{
    int i , j ; 
    for (i = 5 ; i >= 1 ; i--)
    {
        for (j= i ; j >= 1; j--)
    {
        printf("%d",j);
    }
    printf("\n");
    return 0;
    }
}*/
/* 
1 
2 1 
3 2 1 
4 3 2 1 
5 4 3 2 1
#include<stdio.h>
int main()
{
    int i , j ; 
    for (i = 1 ; i <= 5 ; i++ )
    {
        for (j = i ; j >= 1 ; j--)
    {
        printf("%d",j);
    }
    printf("\n");
    }
    return 0;
}*\
1 2 3 4 5
2 3 4 5
3 4 5
4 5 
5 
#include<stdio.h>
int main()
{
    int i , j ; 
    for (i = 1 ; i <= 5 ; i++)
    {
        for (j = i; j <= 5; j++)
    {
        printf("%d",j);
    }
    printf("\n");
    }
    return 0;
}*/
/*
1
1 3 
1 3 5 
1 3 5 7 
1 3  5 7 9

#include<stdio.h>
int main()
{
    int i , j ; 
    for (i = 1 ; i <= 9 ; i = i+2)
    {
        for (j = 1 ; j <= i ; j = j+2 )
    {
        printf("%d",j);
    }
    printf("\n");
    }
    return 0;
}*/
/*
1 
3 1 
5 3 1 
7 5 3 1 
9 7 5 3 1 
#include<stdio.h>
int main()
{
    int i , j ;
    for(i = 1 ; i <= 9 ; i = i +2)
    {
        for (j = i ; j >= 1 ; j = j -2 )
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}*/
/*
1 3 5 7 9
1 3 5  7 
1 3 5 
1 3 
1
#include<stdio.h>
int main()
{
    int i , j ; 
    for (i = 9 ; i >=1; i = i - 2 )
    {
        for (j = 1 ; j <=i ; j = j +2)
        {
            printf("%d",j);
        }
        printf("\n");
    
    }
    return 0;
}*/
/*
1 3 5 7 9 
3 5 7 9
5 7 9
7 9
9 
#include<stdio.h>
int main()
{
    int i , j ;
    for (i = 1 ; i <=9 ; i= i+2)
    {
        for (j = i ; j <= 9 ; j =j+2 )
    {
        printf("%d",j);
    }
    printf("\n");
    }
    return 0;
}*\
\*
9 7 5 3 1 
9 7 5 3 
9 7 5 
9 7 
9 
#include<stdio.h>
int main()
{
    int i , j ; 
    for(i=1 ; i <= 9 ;i = i+2)
    {
    for (j=9 ; j >= i ; j =j-2)
    {
    printf("%d",j);
    }
    printf("\n");
    }
    return 0;
}*/
/* 
9 7  5 3 1 
7 5 3 1 
5 3 1 
3 1
1 

#include<stdio.h>
int main()
{
    int i , j ;
    for (i = 1 ; i <=9 ; i = i + 2 )
    {
        for (j = 9 ; j >= i ; j = j- 2 )
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}*/
/*
9
9 7
9 7 5 
9 7 5 3 
9 7 5 3 1

#include<stdio.h>
int main()
{
    int i , j ;
    for (i = 9 ; i >= 1 ; i = i - 2 )
    {
        for (j = i ; j >= 1 ; j = j - 2 )
    {
        printf("%d",j);
    }
    printf("\n");
    }
    return 0;
}*/
/*
9 
7 9
5 7 9
3 5 7 9 
1 3 5 7 9
#include<stdio.h>
int main()
{
    int i , j ; 
    for (i=9 ; i >= 1 ;i = i-2)
    {
        for (j=i ; j <= 9 ; j = j+2)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}*/
/*
1
2 2 
3 3 3
4 4 4 4
5 5 5 5 5
#include<stdio.h>
int main()
{
    int i , j ; 
   for( int i = 1 ; i <= 5 ; i++ )
   {
       for(j = 1 ; j <= i ; j++)
       {
           printf("%d",i);
       }
       printf("\n");
   }
       return 0;
}*/
/*
5 
4 4
3 3 3 
2 2 2 2 
1 1 1 1 1
#include<stdio.h>
int main()
{
    int i , j ; 
    for (i = 5 ; i >= 1 ; i--)
    {
        for(j = 5 ; j >=i ; j--)
    {
    printf("%d",i);
    }
    printf("\n"); 
    }
    return 0;
}*/
/*
1 1 1 1 1 
2 2 2 2
3 3 3 
4 4 
5 
#include<stdio.h>
int main()
{
    int i , j ; 
    for(i= 1 ; i <= 5 ; i++)
    {
    for (j = i ; j <= 5 ; j++ )
    {
        printf("%d",i);
    }
    printf("\n");
    }
    return 0;
}*/
/* 
1 
2 3 
4 5 6 
7 8 9 10
#include<stdio.h>
int main()
{
    int i , j , k = 0 ;
    for(i = 1 ; i <= 4 ; i++)
    {
        for(j=1 ; j <= i ; j++)
        {
            k++;
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}*/
 /*
 15 
 14 13 
 12 11 10
 9  8  7 6 
 5  4  3 2 1
 #include<stdio.h>
 int main()
 {
     int i , j , k = 16; 
     for (i = 1 ; i <=5 ; i++ )
     {
         for (j =1 ; j <=i ; j++ )
         {
            k = k-1;
             printf("%d",k);
         }
         printf("\n");
     }
     return 0;
    }*/
/*

1 1 1 1 1
2 2 2 2 
3 3 3 
4 4
5 
#include<stdio.h>
int main()
{
    int i , j ;
    for(i = 1 ; i <= 5 ; i++)
    {
        for (j = 5 ; j >= i ; j--)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}*/
/*
5 5 5 5 5 
4 4 4 4 
3 3 3
2 2 
1 
#include<stdio.h>
int main()
{
    int i , j ; 
    for (i = 5 ; i >= 1 ; i--)
    {
        for(j=i ; j >=1 ; j -- )
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}*/
/*
1   2   3   4   5 
6   7   8   9 
10  11  12
13   14
15
#include<stdio.h>
int main()
{
    int i , j , k =0 ;
    for (i = 1 ; i <= 5 ; i ++)
    {
        for (j = 5 ; j >= i ; j --)
        {
            k =k+1;
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}*/
/*
1 2 3 4 5
2 2 3 4 5
3 3 3 4 5 
4 4 4 4 5 
5 5 5 5 5 
#include<stdio.h>
int main()
{
    int i , j , k ;
        for(i= 1 ; i <=5 ; i++)
        {
            for(j = 1 ; j <= i ; j++ )
        {
            printf("%d",i);
        }
        for (k = i + 1 ; k <=5 ; k ++)
        {
            printf("%d",k);
        }
        printf("\n");    
        } 
    return 0;
    }
*/
/*
1 3 5 7 9 
3 5 7 9 1
5 7 9 1 3 
7 9 1 3 5 
9 1 3 5 7
#include<stdio.h>
int main()
{
    int i , j , k ;
    for(i=1 ; i <= 9 ;i = i+2)
    {
       for(j = i ; j <=9 ; j = j+2)
       {
           printf("%d",j);
       }
       for (k=1 ; k < i ;k = k+2)
       {
           printf("%d",k);
       }
    printf("\n");
    }
    return 0;
}*/
/* 
5 5 5 5 5 
5 4 4 4 4
5 4 3 3 3
5 4 3 2 2 
5 4 3 2 1
#include<stdio.h>
int main()
{
    int i , j , k ;
    for (i = 5 ; i >= 1 ; i--)
    {
        for (j = 5 ; j >= i ; j--)
        {
            printf("%d",j);
        }
        for (k = i ; k > 1 ; k = k-1 )
        {
            printf("%d" , k);
        }
        printf("\n");
    }
    return 0;
}*/
/* 
                          1 
                        1 2 1
                      1 2 3 2 1
                    1 2 3 4 3 2 1
                  1 2 3 4 5 4 3 2 1
                                     
#include<stdio.h>
int main()
{
    int i, j , k , p ;
    for (i = 1 ; i <= 5 ; i ++)
    {
        for (j = i ; j <= 4 ; j ++)
        {
            printf(" ",j);
        }
        for(k= 1 ; k <= i ; k ++)
        {
            printf("%d",k);
        }
        for (p = i - 1 ; p >= 1 ; p --)
        {
            printf("%d",p);
        }
        printf("\n");
    }
    return 0;
}*/
/*                1 2 3 4 5 4 3 2 1
                    1 2 3 4 3 2 1
                      1 2 3 2 1
                        1 2 1 
                          1 
#include<stdio.h>
int main()
{
    int i , j , k , p ; 
    for (i = 5 ; i >= 1 ; i --)
    {
        for (j = 5 ; j >= i ; j--)
        {
            printf(" " ,j);
        }
        for (k =1 ; k <= i ; k++)
        {
            printf("%d",k);
        }
        for ( p = i - 1 ; p >= 1 ; p --)
        {
            printf("%d",p);
        }
        printf("\n");
        }
        return 0; 
}*/
/*                       1 
                       1 2 1 
                     1 2 3 2 1
                   1 2 3 4 3 2 1
                 1 2 3 4 5 4 3 2 1
                   1 2 3 4 3 2 1
                     1 2 3 2 1 
                       1 2 1 
                         1
#include<stdio.h>
int main()
{
    int i , j , k ,  p ; 
    for (i = 1 ; i <= 5 ; i++)
    {
        for (j = i ; j <= 4 ; j++)
        {
            printf(" ",j);
        }
        for(k = 1 ; k <= i ; k++)
        {
            printf("%d",k);
        }
        for (p = i - 1 ; p >= 1 ; p --)
        {
            printf("%d",p);
        }
        printf("\n");
    }
    for (i = 4 ; i >= 1 ; i--)
    {
        for (j = i ; j <=4 ; j ++)
        {
            printf(" ",j);            
        }
        for (k = 1 ; k <= i ; k ++)
        {
            printf("%d" , k);
        }
        for (p = i - 1 ; p >= 1 ; p--)
        {
            printf("%d",p);
        }
        printf("\n");
        }
        return 0;
    }*/
                          // A S C I CODE 
            //( A MERICAN STANDARD CODE INFORMATION INTERCHANGE )
/* 
 0 - 255 
 A - Z    - 65 - 90 
 a - z    - 87 - 122 
 0 - 9    - 48 - 57 
 REST OF THE CODES ARE CALLED SPECIAL CHARACER */   
/* 
           A 
           A B 
           A B C 
           A B C D 
           A B C D E ; 
           
#include<stdio.h>
int main()
{
    int i , j ; 
    for (i = 65 ; i <= 69 ; i++)
    {
        for ( j = 65 ; j <= i ; j ++ )
        {
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}*/
/* 
                  AA 
                  BB BB 
                  CC CC CC 
                  DD DD DD DD 
                  EE EE EE EE EE
#include<stdio.h>
int main()
{
    int i , j ; 
    for (i = 65 ; i <= 69 ; i ++)
    {
        for (j = 65 ; j <= i ; j++)
        {
            printf("%c",i);
        }
        printf("\n");
    }
    return 0;
}*/
/*
                  AA 
                  AA CC 
                  AA CC EE 
                  AA CC EE GG 
#include<stdio.h>
int main()
{
    int i , j ; 
    for(i = 65 ; i <= 71; i = i+2)
    {
        for (j = 65 ; j <= i ;j = j+2)
        {
            printf("%c",j);
        }
        printf("\n");
    }
}*/
/*  
                  A 
                  B C 
                  D E F 
                  G H I J 
                  K L M N O 
#include<stdio.h>
int main()
{
    int i , j , k = 64 ; 
    for(i = 1 ; i <= 5 ; i++)
    {
        for(j = 1 ; j <= i ; j++)
        {
           k = k+1;
            printf("%c",k);
        }
        printf("\n");
    }
    return 0;
}*/
/* 
            A A A A A 
            B B B B
            C C C 
            D D 
            E

#include<stdio.h>
int main()
{
    int i , j , k ;
    for (i = 65 ; i <= 69 ; i++)
    {
        for (j = i ; j <= 69 ; j++)
        {
            printf("%c",i);
        }
        printf("\n");
    }
    return 0;
}*/
/* 
             
            A C E G I
            C E G I
            E G I
            G I 
            I
             
#include<stdio.h>
int main()
{
    int i , j ; 
    for (i = 65 ; i <= 73 ; i = i +2 )
    {
        for (j = i ; j <= 73 ; j = j+2 )
        {
            printf("%c", j);
        }
        printf("\n");
    }
    return 0;
}*/
/*
              I G E C A 
              I G E C 
              I G E 
              I G 
              I 
#include<stdio.h>
int main()
{
    int i , j ; 
    for ( i = 65 ; i <= 73 ; i = i + 2  )
    {
        for ( j = 73 ; j >= i ; j = j - 2  )
        {
            printf(" %c ",j);
        }
        printf("\n");
    }
    return 0;
}

/* 
             A 
             A C E 
             A C E G 
             A C E G I 
#include<stdio.h>
int main()
{
    int i , j ; 
    for ( i = 65 ; i <= 73 ; i = i + 2 )
    {
        for ( j  = 65 ; j <= i ; j = j + 2 )
        {
            printf(" %c ",j);
        }
        printf("\n");
    }
    return 0;
}*/
/*
                    E D C B A 
                    D C B A 
                    C B A 
                    B A
                    A
#include<stdio.h>
int main()
{
    int i , j ;
    for (i = 69 ; i >= 65 ; i--)
    {
        for (j = i ; j >= 65; j--)
        {
            printf(" %c ",j);
        }
        printf("\n");
    }
    return 0;
}*/
/* 
               A B C D E 
               A B C D 
               A B C 
               A B
               A 
#include<stdio.h>
int main()
{
    int i , j ; 
    for ( i = 69 ; i >= 65 ; i--)
    {
        for(j = 65  ; j <= i ; j++)
        {
            printf(" %c ", j);
        }
        printf("\n");
    }return 0;
}*/
 /* 
       JUMPT STATEMENTS OR BREAK STATEMENTS : - 
       IT  is used to terminate the loop at any stage . It is also used in switch as construct . */

/*QUESTION - Way to accept the 100 number then find the sum of entered number number but if the user 
wants to terminate the loop any stage , loop should be terminated and the program will display the sum of 
the entered number . 
#include<stdio.h>
int main()
{
    int i , n , s = 0 ;
    for (i = 1 ; i <= 100 ; i++)
   {
        printf("\nEnter the number is : \n"); 
        scanf("%d",&n);
        if( n == -4 )
        break ; 
        s = s + n ; 
        printf("\nsum of the number is : %d", s );
    }
        return 0;        
}*/
/* Write a program to enter the number is using loop for prime number or not . 
#include<stdio.h>
int main()
{
    int i = 2 , n ; 
    printf("\nEnter the number is :\n ");
    scanf("%d", &n );

    while (i < n)
    {
        if( n%i==0)
        {
            printf("Number is not prime.\n");
            break;
        }
        else
        {
            //printf("\nthe number is not a prime numeber ");
            i++;
        }
    }
    //printf("The value of 'i' after loop = %d", i);
    if(i == n)
    {
        printf("Number is Prime.\n");
    }
    return 0;
}*/
/* CONTINUE STATEMENTS : - 
It is used to skip all subsequent statements the controlling part of the program . 
*/ 
/*example : -   
#include<stdio.h>
int main()
{
    int i ; 
    for ( i = 1 ; i <= 10 ; i++ )
    {
        if (i <= 5 )
        continue ;
        printf("\nthe number is : %d " , i );
    }
    return 0;
}*/
/*The control part of the program 
#include<stdio.h>
int main()
{
    int i ; 
    for ( i = 1 ; i <= 10 ; i++)
    {
        if ( i < 7)
        continue;
        {
            printf("\n Welcome ", i );
        }
    }
    return 0;
}*/
/* Write a program to find the sum of only +ve number in 10 natural numnber 
#include<stdio.h>
int main()
{
    int i , n , sum = 0 ; 
    for(i = 1 ; i <= 10 ; i++)
    {
        printf("Enter the  number is : \n ");
        scanf("%d",&n);

        if ( n < 0 )
        continue ; 
        sum = sum  + n ;
    }
        printf("\n Sum of enteree number : %d " , sum );
    return 0;
}*/
/*Write a program to print only even number . 
#include<stdio.h>
int main()
{
    int i ; 
    for( i = 1 ; i <= 20 ; i++ )
    {
        if ( i % 2!= 0 )
        continue;
        printf("\neven number : %d\t ", i );
    }
    return 0;
}*/
/*Write a program to print the table of a nunber . 
#include<stdio.h>
int main()
{
    int i =1  , n , t ; 
        printf("Enter the number is : \n");
        scanf("%d",&n);
        table : 
                t = n * i ; 
                printf("The table of a numebr is : %d\t " , t );
                i++ ;
                if ( i <= 10 )
                goto table ;
                return 0;  
}*/
/* Write a program to accept a number then display the square of the number 
but if the nunber is negative then it will ask to enter the number again .
#include<stdio.h>
int main()
{
    int sqr , n ;  
            
    square : 
            printf("Enter the number is : \n ");
            scanf("%d",&n);
            if ( n < 0 )
           goto square ;
           else 
           {
               sqr = n * n ; 
               printf("square is : %d ", sqr);
           }
            return 0;
}*/
                         // ARRAY 
/*ARRAY - An array is the collection of similar type of data at conditions locateion referred by a common name . */
//There are two type of array 
//1. One dimensional Array 
//2. Two dimensional Array 
// Declaration of one dimensional Array
//int a [ 5 ] ;
//Initonal of one dimensional array ;
/*int a [ 5 ] = { 7 , 4 , 1 , 6 , 8 }
             or 
             int a [ 5 ] , i ;
for ( i = 0 ; i<= 5 ; i++)
{
    printf("Enter the number ");
    scanf("%d",&a [i]);
}*/
/*Write a program to accept the number array then display the contents of the array .
#include<stdio.h>
int main()
{
    int a[5] , i ; 
    for ( i = 0 ; i < 5 ; i++)
    {
        printf("Enter the number of value is : \n ");
        scanf("%d",&a[i]);
    }
    printf("contents of the array \n ");
    for ( i = 0 ; i < 5 ; i++)
    {
    printf("contents of the array number is : %d\t",a[i]);
    }
    return 0;
}*/
/*Write a program to find the sum of the array . 
#include<stdio.h>
int main()
{
    int a [5] , i , s = 0 ; 
    for ( i =  0 ; i < 5 ; i++)
    {
        printf("Enter the number is : \n ");
        scanf("%d",&a[i]);
    }
    for ( i = 0 ; i < 5 ; i ++)
    {
        printf("\nthe number is : %d\n",a[i]);
        s = s + a[i] ; 
        printf("the total number of the sum value is : %d\n",s);
    }
    return 0;
}*/
/*Write a program to find the maximum value of the array .
#include<stdio.h>
int main()
{
    int a[5] , i , max = 0  ; 
    for (i = 0 ; i < 5 ; i++)
    {
        printf("Enter the number of the value is : \n ");
        scanf("%d",&a[i]);
    }
        for(i = 0 ; i < 5 ; i++)
        {
        if (max < a[i])
            max = a[i] ;
            printf("\nthe maximum value of the number is : %d\n", max );
        }
        return 0;
}*/
                //SEARCHING
/*SEARCHING - There are two type of searching . 
1. Linear searching 
2. Binary searching 
/*
/*Write a program to search a particular number in array by using linear search method . 
#include<stdio.h>
int main()
{
    int a [5] , i , n , k = 0;
   
    for (i = 0 ; i < 5 ; i++)
    {
        printf("Enter the number is :\n ");
        scanf("%d",&a[i]);
    }
    printf("Enter the number of value n is : \n ");
    scanf("%d",&n);
    printf("\n%d\n ",a[i]);
    for ( i = 0 ; i < 5 ; i++)
    {
    if ( n == a[i] )
    {
        k = 1 ;
    }
    }
        if ( k == 1 )
        {
        printf("the number is found ");
        }
    else 
    {
        printf("the number is not found");
    }
    return 0; 
}*/
/*Find the frequency of the number in the array .
#include<stdio.h>
int main()
{
    int a [ 5 ] , i , n , k = 0 ; 
    for ( i = 0 ; i < 5 ; i++)
    {
        printf("Enter the number is : \n");
        scanf("%d",&a[ i ]);
    }
    printf("\nEnter the number if you want to search (n)  is : \n");
    scanf("%d",&n);
    for ( i = 0 ; i < 5 ; i++)
    {
        if ( n == a[i])
        {
            k ++ ; 
        }
        printf(" \nthe number is repeated %d times \n ", k );
    }
    return 0;
}*/
/*
BINARY SEARCH 
// SEARCHING BY USING BINARY SEARCH METHOD .
#include<stdio.h>
int main()
{
    int a[10] , i , mid , n , k =0 , lb = 0 , ub = 9 ;
    for ( i = 0 ; i < 10 ; i++ )
    {
        printf("Enter the number is : \n ");
        scanf("%d",&a[i]);
    }
        printf("Enter the number u want to be search \n ");
        scanf("%d", &n );
        while ( lb <= ub)
        {
            mid = ( lb + ub ) / 2 ;
            if ( n < a[mid])
            ub = mid - 1 ;
            else if( n > a[ mid ])
            {
                lb = mid + 1 ; 
            }
            else if ( n == a [mid])
           {
             k = 1 ; 
            break ; 
            }
        }
        if ( k == 1 )
        {
            printf("found");
        }
        else 
        {
        printf("not found");
        }
    return 0;
}*/
/*  Write a program to accept the number in the array then short the using buble sort method . 
#include<stdio.h>
int main()
{
    int a[10] , i , j , k ;
    for ( i = 0 ; i < 10 ; i ++ )
    {
        printf("Enter the number is : \n ");
        scanf("%d",&a[i]);
    } 
    for ( i = 0 ; i < 10 ; i ++)
    {
    for ( j = i + 1 ; j < 10 ; j ++)
    {
        if ( a[i] > a[j])
        {
            k = a[i] ;
            a[i] = a[j] ;
            a[j] = k ;
        }
    }
    }
    for ( i = 0 ; i < 10 ; i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}*/
/*Write a program to find the smallest and largest in the array .
#include<stdio.h>
int main()
{
    int a[10] , i , high , low ; 
    for ( i = 0 ; i < 10 ; i ++ )
    {
        printf("Enter the number is : \n ");
        scanf("%d",&a[i]);
    }
    high = low = a[0] ; 
    for ( i = 1 ; i < 10 ; i++ )
    {
        if ( a[i] > high )
        {
            high = a[i] ;
        }
        else if (a[i] < low )
        {
            low = a[i];
        }
    }
    printf("Smallest number is : %d \n",low);
    printf("Highest numeber is : %d \n ", high );
    return 0;
}*/
/*Write a program to sort the contents by using selection sort method .
#include<stdio.h>
int main()
{
    int a[10] , i , j , min , k ; 
    for ( i = 0 ; i < 10 ; i++)
    {
        printf("Enter the number is : \n ") ; 
        scanf("%d", &a[i]);
    }
    for ( i = 0 ; i < 10 ; i ++ )
    {
        min = i ; 
        for ( j = i + 1 ; j < 10 ; j ++ )
        {
             if (a[j] < a[min])
             {
                 min = j ; 
             }
        }
    k = a[i] ; 
    a[i] = a [min] ;
    a[min] = k ; 
    }
    printf("\n Contents of sorted array \n ");
    for ( i = 0 ; i < 10 ; i++ )
    {
        printf("%d \t ", a[i]);
    }
    return 0;
}*/
                                  // 2 nd ARRAY
//int a[3][3];
//Initialization 
//int a[3][3] = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 };
                 //or
/*
int a[3][3] , i , j ; 
for(i = 0 ; i < 3 ; i++ )
{
    for( j = 0 ; j < 3 ; j++ )
    {
        printf("Enter the number is : \n ");
        scanf("%d",&a[i][j]);
    }
        printf("\n");
    return 0;
}
}*/
/*Write a program to enter the number in a 2-D Array then display the Array in matrix form . 
#include<stdio.h>
int main()
{
    int a[3][3] , i , j ; 
    for ( i = 0 ; i < 3 ; i++ )
    {
        for ( j = 0 ; j < 3 ; j++)
        {
        printf("Enter the number is : \n ");
        scanf("%d", &a[i][j]);
        }
    }
    for ( i = 0 ; i < 3 ; i ++)
    {
        for ( j = 0 ; j < 3 ; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
   
    return 0;
}*/
/*Write a program to enter the number in sum of the matrix number.
#include<stdio.h>
int main()
{
    int a[3][3] , i , j , s = 0 ;
        for ( i = 0 ; i < 3 ; i++)
        {
            for ( j = 0 ; j < 3 ; j++ )
            {
                printf("Enter the number is : \n ");
                scanf("%d" , &a[i][j]);
            }
        }
            for ( i = 0 ; i < 3 ; i++ )
            {
                for ( j = 0; j < 3 ; j ++ )
                {
                printf("%d\t",a[i][j]);
                s = s + a[i][j];
                }
                printf("\n");
            }
            printf("The sum of the number is : %d ", s);
            return 0;
}*/
/*Write a program to find the sum of the array as row - wise. 
#include<stdio.h>
int main()
{
    int a[3][3] , i , j , s = 0 ;
    for (i = 0 ; i < 3 ; i ++ )
    {
        for ( j = 0 ; j < 3 ; j ++ )
        {
            printf("Enter the number is : \n ");
            scanf("%d",&a[i][j]);
        }
    }
       for ( i = 0 ; i < 3 ; i++ )
       {
           for ( j = 0 ; j < 3 ; j ++ )
           {
               printf("%d\t",a[i][j]);
               s= s + a[i][j];
            }
            printf("sum : %d", s );
           s = 0 ;
           printf("\n");
       }
       return 0;
}*/
/* Write a program to find the sum of the  left diagnol . 
#include<stdio.h>
int main()
{
    int a[3][3] , i , j , s = 0 ; 
    for (i = 0 ; i < 3 ; i++ )
    {
        for ( j = 0 ; j < 3 ; j ++ )
        {
            printf("Enter the number is : \n ");
            scanf("%d",&a[i][j]);
        }
    }
       for ( i = 0 ; i < 3 ; i ++ )
       {
           for ( j = 0 ; j < 3 ; j ++ )
           {
               printf("%d\t",a[i][j]);
               if ( i == j )
               s = s + a[i][j];
           }
           printf("\n");
       }
       printf("the sum of the left diagnol number is : %d\n " , s );
       return 0;
}*/
/* Write a program to find the sum fo the right diagnol. 
#include<stdio.h>
int main()
{
    int a[3][3] , i , j , s = 0 ; 
    for ( i = 0 ; i < 3 ; i ++ )
    {
        for ( j = 0 ; j < 3 ; j ++ )
        {
            printf("Enter the number is : \n ");
            scanf("%d",&a[i][j]);
        }
    }
    for( i = 0 ; i < 3 ; i ++ )
    {
        for ( j = 0 ; j < 3 ; j ++ )
        {
            printf("%d\t",a[i][j]);
            if ( i + j == 2 )
            {
             s = s + a[i][j];
            }
        }
        printf("\n");
    }
    printf("The sum of the right diagnol is : %d\n ", s );
    return 0;
}*/
                          //MATRIX ADDITION 
/* Write a program to find the sum of matrix number. 
#include<stdio.h>
int main()
{
    int a[3][3] , b[3][3] , c[3][3] , i , j ;
    for ( i = 0 ; i < 3 ; i ++ )
    {
        for ( j = 0 ; j < 3 ; j ++ )
        {
            printf("Enter the number is : \n ");
            scanf("%d",&a[i][j]);
        }
    }
    for ( i = 0 ; i < 3 ; i ++ )
    {
        for ( j = 0 ; j < 3 ; j ++ )
        {
            printf("Enter the number is : \n ");
            scanf("%d",&b[i][j]);
        }
    }
    for ( i = 0 ; i < 3 ; i ++ )
    {
        for ( j = 0 ; j < 3 ; j ++ ) 
        {
            c[i][j] = a[i][j] + b[i][j] ;
        }
    }
    for ( i = 0 ; i < 3 ; i ++ )
    {
        for ( j = 0 ; j < 3 ; j ++ )
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/
/* Write a program to enter the number in a 2 . D Array then find the transpose . 
#include<stdio.h>
int main()
{
    int a[3][3] , b[3][3] , i , j ; 
    for ( i = 0 ; i < 3 ; i ++ )
    {
        for ( j = 0 ; j < 3 ; j ++ )
        {
            printf("Enter the number is : \n ");
            scanf("%d",&a[i][j]);
        }
    }
    for ( i = 0 ; i < 3 ; i ++ )
    {
        for ( j = 0 ; j < 3 ; j ++ )
        {
            b[j][i] = a[i][j] ;
        }
    }
    for ( i = 0 ; i < 3 ; i ++ )
    {
        for ( j = 0 ; j < 3 ; j ++ )
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/
                // MATRIX MULTIPLICATION 
/*Write a program to enter the number in a 2 - D Array then find the transpose . 
#include<stdio.h>
int main()
{
    int a[3][3] , b[3][3] , i , j , k , c[3][3]; 
    for ( i = 0 ; i < 3 ; i ++ )
    {
        for ( j = 0 ; j < 3 ; j ++ )
        {
            printf("Enter the number is : \n ");
            scanf("%d",&a[i][j]);
        }
    }
    for ( i = 0 ; i < 3 ; i ++ )
    {
        for ( j = 0 ; j < 3 ; j ++ )
        {
            printf("Enter the number is : \n ");
            scanf("%d" , &b[i][j]);
        }
    }
    for (i = 0 ; i < 3 ; i ++ )
    {
        for (j = 0 ; j < 3 ; j ++ )
        {
            c[i][j] = 0 ; 
        for ( k = 0 ; k < 3 ; k ++ )
        {
            c[i][j] = c[i][j] + a[i][k] * b[k][j] ; 
        }
        }
    }
    for ( i = 0 ; i < 3 ; i++ )
    {
        for ( j = 0 ; j < 3 ; j ++ )
        {
            printf("%d\t" , c[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/
/*    
    FUNCTION : - A function is a block of 
statements used to perform a particular task . It is the building block of a program .
// How to create a function . 
#include<stdio.h>
main()
{
    printf("Welcome in c ");
    display();
    printf("For good learning ");
    return 0;
}
display()
{
    printf("All the best");
}*/
                             /*// CATEGORY OF FUNCTION 
// FIRST CATEGORY : - 
                     // The function of first category doesn't receive 
the parameters as well as doesn't return a value . 
// SECOND CATEGORY : - 
                    // The function of second category receive 
 the parameters but doesn't return as value . 
// THIRD CATEGORY : - 
                    // The function of third category receive
 the parameters as wwll as return a value .*/
 /*Write a program to add 2 number by all the categories .
 // FIRST CATEGORIES 
 #include<stdio.h>
 void sum();
 int main()
 {
     sum();
     return 0;
 }
 void sum()
 {
     int a , b , c ; 
     printf("Enter the two number is : \n ");
     scanf("%d%d", &a , &b );
     c = a + b ;
     printf("the sum of the two number is : %d " , c );
 }*/
  // SECOND CATEGORY 
  
/*#include<stdio.h>
void sum(int,int);
main()
{
    int a , b , c ;   
    printf("Enter the number is : \n ");
    scanf("%d%d",&a,&b);
    sum(a , b );
}
void sum(int x , int y )
{
int z ; 
z = x + y ; 
printf("the sum of the two number is : %d\n " ,z );
}*/
   //THIRD CATEGORY 
/*#include<stdio.h>
int sum(int , int );
main()
{
    int a , b , c ;
    printf("Enter the number is : \n ");
    scanf("%d%d",&a , &b );
    c = sum( a , b );
    printf("The sum of the number is : %d ", c );
}
sum(int x , int y )
{
    int z ; 
    z = x + y ; 
    return z;
}
/*Write a program to find the factorial of a number . 
  // FIRST CATEGORY 
#include<stdio.h>
void facto();
int main()
{
    facto();
    return 0;
}
 void facto()
{
    int i , n , f = 1  ; 
    printf("Enter the number is : \n ");
    scanf("%d", &n );
    for ( i = 1 ; i < n ; i ++ )
    f = f * i ; 
    printf("the factorial of the number is : %d " , f );
}*/
  // SECOND CATEGORY
/*#include<stdio.h>
void facto(int);
int main()
{
    int n ;
    printf("Enter the number is : \n ");
    scanf("%d", &n );
    facto( n );
    return 0;
}
void facto( int x )
{
    int i , f = 1 ;
    for ( i = 1  ; i < x ; i ++ )
    {
        f = f * i ;
    }
    printf("the factor of a number is : %d " , f );
}*/
  // THIRD CATEGORY 
/*#include<stdio.h>
int facto( int );
int main()
{
    int n , f ;
    printf("Enter the number is : \n ");
    scanf("%d", & n );
    f = facto ( n );
    printf("The factorial of the number is : %d " , f );
}
 facto (int x)
{
    int i , y = 1 , z ;
    for ( i = 1 ; i < x ; i ++ )
    {
        y = y * i ;
    }
    return y; 
}*/
/* Write a program to enter a number then find the sum of all the digit number . 
  // FIRST CATEGORY 
#include<stdio.h>
void sum();
int main()
{
    sum();
    return 0;
}
void sum()
{
    int n , r , s = 0 ;
    printf("Enter the number is : \n ");
    scanf("%d", &n );
    while ( n > 0 )
    {
        r = n % 10 ; 
        n = n / 10 ;
        s = s + r ;
    }
    printf("Sum of the digit number is : %d " , s );
}*/
  // SECOND CATEGORY 
/* #include<stdio.h>
void sum ( int );
int main()
{
    int n ; 
    printf("Enter the number is : \n ");
    scanf("%d", & n );
    sum ( n );
}
 void sum ( int x )
{
    int r , s = 0 ; 
    while ( x > 0 )
    {
        r = x % 10 ; 
        x = x / 10 ;
        s = s + r ; 
    }
    printf("the sum of the digit number is : %d " , s );
}*/
  // THIRD CATEGORY 
/*
#include<stdio.h>
int sum ( int );
int main()
{
    int n , s = 0 ; 
    printf("Enter the number is : \n ");
    scanf("%d" , & n ); 
    s = sum ( n );
    printf("the sum of thedegit number is : %d ", s );
    return 0;
}
sum ( int x )
{
int y  = 0 , r ; 

    while ( x > 0 )
    {
        r = x % 10 ; 
        x = x / 10 ; 
        y = y + r ; 
    }
    return y;
}*/
/* Write a program to enter a number then find the reverse number . 
// FIRST CATEGORY 
#include<stdio.h>
void reverse ();
int main()
{
    reverse ();
}
void reverse ()
{
    int n , r , s = 0 ; 
    printf("Enter the number is : \n ");
    scanf("%d" , &n );
    while ( n > 0 )
    {
        r = n % 10 ; 
        n = n / 10 ;
        s = s * 10 + r ; 
    }
    printf("Reverse number is : %d " , s );
}*/
// SECOND CATEGORY 
/* 
#include<stdio.h>
void reverse ( int );
int main()
{
    int n ; 
    printf("Enter the number is : \n ");
    scanf("%d", &n );
    reverse ( n );
}
void reverse ( int x  )
{
    int r , s = 0 ;
    while ( x > 0 )
    {
        r = x  % 10 ; 
        x = x / 10 ; 
        s = s * 10 + r ; 
    } 
    printf(" Reverse number is : %d " , s );
}*/
// THIRD CATEGORY 
/*
#include<stdio.h>
int reverse ( int );
int main()
{
    int n , s = 0 ; 
    printf("Enter the number is : \n ");
    scanf("%d" , & n );
    s = reverse ( n );
    printf("Reverse number is : %d " , s );
}
int reverse( int x )
{
    int y = 0 , r ; 
    while ( x > 0 )
    {
        r = x % 10 ; 
        x = x / 10 ; 
        y = y * 10 + r ; 
    }
    return y; 
}*/
                          // prime number or not prime number using with function . 
/*
#include<stdio.h> 
void prime ();
int main()
{
     prime ();
}
void prime ()
{
    int n , i , s = 0 ;
    printf("Enter the number is : \n ");
    scanf("%d" , &n );
    for ( i = 1  ; i <= n ; i ++ )
    {
        if ( n % i == 0 )
        {
            s = s + 1 ;
        }
    }
        if ( s == 2 )
        {
            printf("the number is prime number ");
        }
        else
        {
            printf("the number is not prime number ");
        }
}*/
  // SECOND CATEGORY 
/*
#include<stdio.h>
void prime ( int );
int main()
{
    int n ; 
    printf("Enter the number is : \n ");
    scanf("%d", &n );
    prime ( n );
}
void prime( int x )
{
    int s = 0 , i ; 
    for ( i = 1 ; i <= x ; i ++ )
    {
        if ( x % i == 0 )
        {
            s = s + 1 ; 
        }
    }
        if ( s == 2 )
        {
            printf("the number is prime number ");
        }
        else 
        {
            printf("Not Prime number ");
        }
}*/
  // THIRD CATEGORY 
  /*
#include<stdio.h>
int prime ( int );
int main()
{
	int n , s ;
	printf("Enter the number is : \n ");
	scanf("%d", &n );
	s = prime ( n );
	if ( s == 1 )
	{
		printf("the number is prime number ");
	}
	else 
	{
		printf("the number is not prime number");
	}
}
prime ( int x )
{
   int i , s = 0 ;
   for (i = 1 ; i <=x ; i ++ )
   {
   	if ( x % i  == 0 )
   	{
   		s ++ ;
	}
    }
	if ( s == 2 )
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}*/

/* 1 st CATEGORY - #include<stdio.h>
                   void sum ()
    2 nd CATEGORY -  #include<stdio.h>
                    void  sum ( int , int )
    3 rd CATEGORY - #include<stdio.h>
                   int sum ( int , int )
*/
                        // PASSING ARRAY IN FUNCTION 
/*#include<stdio.h>
void show(int a[]);
int main()
{
    int n , a[5] , i ;
    for ( i = 0 ; i < 5 ; i ++ )
    {
        printf("Enter the number of array element is : " , i );
        scanf("%d", &a[i]);
    }
    show(a);
    return 0;
}
void show(int a[])
{
    int i ; 
    for ( i = 0 ; i < 5 ; i ++ )
    {
        printf("%d\n" , a[i] * a[i]);
    }
}*/
//-------------------------------------------Storage class----------------------------------------------------------
/*Every variable has its own storage class. It is used to determine the life and scope of the variabl.
There are three types of storage class . 
1.) Auto or internal or local variable :- 
                                            when we declare a variable inside a function then that variable is 
called internal . We can not access the value of the variable outside of the block . We can access the value
of that variable only within that function. 

2.)Global variable :- 
                        when we declare a function outside of cell the function , then that variable accessed 
anywhere in the program and it is called global or external variable .

3.) Static variable :- 
                        It is used to retain (Pressure) the value of that variable.*/
//Example of local variable - 
/*
#include<stdio.h>
void f1();
void f2();
int main()
{
    int x = 10 ; 
    f1();
    f2();
    printf("value of x inside main : %d\n" , x );
    return 0;
}
void f1()
{
    int x = 100;
    printf("Value of x inside f1 : %d \n " , x );
}
void f2()
{
    int x = 10 ;
    x = x + 10 ; 
    printf("value of x inside f2 :%d\n " , x );
}
// Example of Global variable - 
#include<stdio.h>
int x();
void f1();
void f2();
int main()
{
    int x = 10 ;
    f1();
    f2();
    printf("Value of x inside main : %d\n " , x );
    return 0;
}
void f1()
{
    int x = 100 ; 
    printf("Value of x inside f1 : %d \n" , x );
}
void f2()
{
    int x = 10 ; 
    x = x + 10 ; 
    printf("Value of x inside f2 : %d\n " , x );
}
// Example of Glocal variable without static 
#include<stdio.h>
void f1();
int main()
{
    int count = 0 ; 
    for ( count = 0 ; count < 3 ; count ++ )
    {
        f1();
    }
}
void f1()
{
    int i = 0 ; 
    printf("Value of %d\n" , i );
}
//Example of Global variable with static . 
#include<stdio.h>
void f1();
int main()
{
    int count = 0 ; 
    for ( count = 0 ; count < 3 ; count ++ )
    {
        f1();
    }
}
void f1()
{
    static int i = 0 ; 
    i ++ ; 
    printf("Value of %d\n " , i );
}*/
//---------------------------------------------String--------------------------------------------------------------
/*
String : - 
            A String is the collection of more than one character . In a string one extra byte is 
reserved for string terminator that is represented by '/O' (NULL) character . */
//How to declare a string . 
//char str[5] = "amit";
//Write a program to accept a string max 20 character long then display the string . 
/*#include<stdio.h>
int main()
{
    char str[21];
    printf("Enter the string :");
    //scanf("%s" , &str );
    gets(str);
    printf("%s" , str );
    return 0;
}*/
/*Write a program some operations on a string .
#include<stdio.h>
#include<string.h>
int main()
{
    char str [21] ; 
    printf("Enter the String :- ");
    gets(str);
    printf("Length is : %d\n", strlen(str));
    printf("Upper Case is : %s\n " , strupr(str));
    printf("Reverse is :%s\n " , strrev(str));
    return 0;
}*/
/*Write a program to accept string then find the reverse of the string . 
Reverse ----- >  Tarun ----> nuraT 
#include<stdio.h>
int main()
{
	char str[21] , str1[21] ;
	int i , j =0 ; 
	printf("Enter the string is : ");
	gets(str);
	for( i = 0 ; str[i] != '\0' ; i ++ );
		i -- ;
		while ( i >= 0 )
		{
			str1 [j] = str [i] ;
			i -- ;
			j ++ ; 
		}
		str [j] = '\0';
		printf("Reverse is : %s " , str1);
		return 0;
}*/
/* Write a program to concatenate 2 string . 
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[21] , str2[21] , str3[21] ;
    int i, j ; 
    printf("Enter the first string : ");
    gets(str1);
    printf("Enter the second string : ");
    gets(str2);
    for ( i = 0 ; str1[i] != '\0' ; i ++ , j ++ )
    {
        str3[j] = str1[i];
    }
    str3[j] = ' ';
    j ++ ;
    for ( i = 0 ; str2[i] != '\0' ; i ++ , j++ )
    {
        str3[j] = str2[i];
    }
    str3[j] = '\0';
    printf("Conantenated String is : %s " , str3);
    return 0;
}*/
// Some more string handling functions . 
/*Strlen:-
            It is used to find the length of the string . 
#include<stdio.h>
#include<string.h>
int main()
{
    char str[10] = "aman";
    int k ; 
    k = strlen(str);
    printf("Length is :%d " , k );
    return 0;
}*/
/*strcpy :-
             It accept two string then copy the content of second string over the first sring . 
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[21] = "humpty";
    char str2[21] = " dumpty";
    strcpy(str1 , str2 );
    printf("First string : %s\n " , str1 );
    printf("Second string : %s\n" , str2);
    return 0;
}*/
/*strcat :- It accept two string then add the contents of second string at the last of the first string . 
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[41] = "humpty" ;
    char str2[41] = "dumpty"; 
    strcat(str1, str2 );
    printf("First string : %s ", str1 );
    printf("Second Sring : %s " , str2 );
    return 0;
}*/
/*strcmp :- It accept two strng then compare teh contents of the first string with a second string character
in terms of their asci codes and then return the difference value , if any . 
1.) 0 is both a string are equal . 
2.) >0 is first string is greater than second. 
3.)<0 is second string is greater than first. 
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[21] , str2[21] ; 
    int k ;  
    printf("Enter the first string : ");
    gets(str1);
    printf("Enter the second string : ");
    gets(str2);
    k = strcmp(str1 , str2 );
    if ( k == 0 )
    {
        printf("Both string are equal");
    }
    else if ( k > 0 )
    {
        printf("First strings as greater ");
    }
    else 
    {
        printf("Second string is greater");
    }
    return 0;
}*/
/*Write a program t accept a string the check the string is pallindrome or not . 
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char str1[21] , str2[21] ;
    int i  , j = 0 , a = 0 , b = 0 ;
    printf("Enter the first string : ");
    gets(str1);
    a = strlen(str1);
    printf("%d" , a );
    b = a ; 
    for ( i = 0 ; i < a  ; i ++ )
    {
        str2[j] = str1[b] ; 
        printf("%s" , str2[j]);
        j++ ;
        b--;
    }
    printf("Original String : %s\n " , str1 );
    printf("Reversed String : %s\n " , str2 );
    if ( strcmp ( str1 , str2 ) == 0 )
    {
        printf("Pallindrome");
    }
    else 
    {
        printf("Not pallindrome");
    }
    return 0;
}*/
/*---------------------------------------------Structure------------------------------------------------------------
Structure :- A structure is a collection of different types of data . It is used to create user defined data 
type . We can structure in 'C' language by struct keyword . 
How to declare a structure . 
struct book 
{
    char name[21]; 
    int page ; 
    int price ; 
};
How to declare structure variable struct book b1 ; 
or 
struct book b1, b2 , b3 ; 
How to access structure members . \
b.1 name ; 
b.2 page ; 
b.3 price ; 
*/
/*Write a Program to store the details of 3 books . 
#include<stdio.h>
int main()
{
	struct book 
	{
		char name[21] ;
		int page ; 
		int price ; 
	};
	struct book b1 , b2 , b3 ; 
	printf("Enter the 1st name of the  book :  " );
	gets(b1.name);
	fflush(stdin);
	printf("Enter the page is : ");
	scanf("%d" , &b1.page );
	fflush(stdin);
	printf("Enter the price is : ");
	scanf("%d" , &b1.price );
	fflush(stdin);
	printf("Enter the 2nd name of the  book :  " );
	gets(b2.name);
	fflush(stdin);
	printf("Enter the page is : ");
	scanf("%d" , &b2.page );
	fflush(stdin);
	printf("Enter the price is : ");
	scanf("%d" , &b2.price );
	fflush(stdin);
	printf("Enter the 3st name of the  book :  " );
	gets(b3.name);
	fflush(stdin);
	printf("Enter the page is : ");
	scanf("%d" , &b3.page );
	fflush(stdin);
	printf("Enter the price is : ");
	scanf("%d" , &b3.price );
	fflush(stdin);
	printf("\n Details of the book : \n ");
	printf("Name of the 1st book , price and page is :%s\t%d\t%d\n " , b1.name , b1.price , b1.page );
	printf("Name of the 2nd book , price and page is :%s\t%d\t%d\n " , b2.name , b2.price , b2.page );
	printf("Name of the 3rd book , price and page is :%s\t%d\t%d\n " , b3.name , b3.price , b3.page );
	return 0;
	
}*/
// Array of Structure 
/*Write a program to store the details of 100 books . 
#include<stdio.h>
int main()
{
    struct book 
    {
        char name[21];
        int page ; 
        int price ; 
    };
    struct book b[100] ; 
    int i ; 
    for ( i = 0 ; i < 100 ; i ++ )
    {
        printf("Enter the name of the book : ");
        gets(b[i].name);
        flushall();
        printf("Enter the price : ");
        scanf("%d" , &b[i].price );
        flushall();
        printf("Enter the page : ");
        scanf("%d" , &b[i].page );
        flushall();
    }
    printf("\n Details of books : \n ");
    for ( i = 0 ; i < 100 ; i ++ )
    {
        printf("%s\t%d\t%d\n " , b[i].name , b[i].page , b[i].price );
    }
    return 0;
}*/
/*//Nested structure 
#include<stdio.h>
int main()
{
    struct emp
    {
    char name[21];
    int age ; 
    struct address 
    {
        char city[21];
        long pin ;
    }a1;
    };
struct emp e1 = {"amit" , 20 , "sre" , 247001 };
printf("Name : %s\n " , e1.name );
printf("Age : %d\n " , e1.age );
printf("City : %s\n ", e1.a1.city);
printf("Pin : %ld\n" , e1.a1.pin); 
return 0;
}*/
//2nd method
/*
#include<stdio.h>
int main()
{
    struct address 
    {
        char city[21];
        long pin ;
    };
    struct emp
    {
        char name [21];
        int age ;
        struct address a1;
    }
    struct emp e1 = {"amit" , 20 , "sre" , 247001 };
    printf("Name : %s\n" , e1.name);
    printf("Age : %d\n " , e1.age );
    printf("City : %s\n " , e1.a1.city);
    printf("Pin : %d\n " , e1.a1.pin);
    return 0;
}
*/
/*//Nested structure using with the help of fucntion
#include<stdio.h>
    struct address
    {
        char city[21];
        long pin ;
    };
    struct emp
    {
        char name [21];
        int age ; 
        int salary ;
        struct address a1; 
       
    };
void show(struct emp );
int main()
{
    struct emp e1 = {"amit" , 20 , 25000 , "Saharanpur" , 247001 };
    show( e1 );
    return 0;
}
void show (struct emp e1 )
{
    printf("%s\t%d\t%d\t%s\t%d\n", e1.name , e1.age , e1.salary , e1.a1.city , e1.a1.pin );
}*/
// 2nd Mehtod 
//???????????????????????????????????????????????????????????????????????????????????????????????????????????????????
// One structure variable can be copied to another variable also .
//???????????????????????????????????????????????????????????????????????????????????????????????????????????????????
/*// Write a prepare marksheet of 2 students .
#include<stdio.h>
int main()
{
    struct student
    {
        char name [21] ; 
        int age ; 
        int marks [5];
        int total ; 
    };
    struct student s[21];
    int i , j , sum = 0 ; 
    for ( i = 0 ; i < 2 ; i ++ )
    {
        printf("\n Enter the name is : ");
        gets(s[i].name );
        fflush(stdin);
        printf("\n Enter the age : ");
        scanf("%d" , &s[i].age);
        fflush(stdin);
        for ( j = 0 ; j < 5 ; j ++ )
        {
            printf("\n Enter the marks int 5 subject : ");
            scanf("%d" , &s[i].marks[j] );
            fflush(stdin);
            sum = sum + s[i].marks[j];
        }
            s[i].total = sum ; 
            sum = 0 ; 
    }
        for( i = 0 ; i < 2 ; i ++ )
        {
            printf("\n Student %d \n : " , i ++ );
            printf("\n Name : %s \t Age : %d \n " , s[i].name , s[i].age );
            printf("Name : %s \t Age : %d \n " , s[i].name , s[i].age );
            printf("\n Marks \n ");

        for ( j = 0 ; j < 5 ; j ++ )
        {
            printf("%d\t " , s[i].marks[j]);
        }
        printf("\n Total marks : %d " , s[i].total );
        }
        return 0 ;
}*/
//-------------------------------------------Pointer-------------------------------------------------------------
// &               |        *                   | %u 
//Address Operator |  value of Operator         | Format Specifier
/*
#include<stdio.h>
int main()
{
    int x = 10 ; 
    printf("Value of x %d \n " , x );
    printf("Value of x : %u\n " , &x );
    printf("Value of x : %d\n " , *(&x));
    return 0;
}*/
/*How to declare a pointer variable :- 
int x = 10 , *ptr ; 
int x = 10 , *ptr ; 
How to assign the address to pointer variable . 
ptr = &n 
How to access the value of a variable by using pointer . 
#include<stdio.h>
int main()
{
    int x = 10 , *ptr ; 
    ptr = &x ; 
    printf("Value of x is : %d\n " , *ptr );
    printf("Address of x : %u \n " , ptr );
    return 0;
}*/
/*// Pointer with array 
#include<stdio.h>
int main()
{
    int a[5] , i , *ptr ; 
    for( i = 0 ; i < 5 ; i ++ )
    {
        printf("Enter the number %d : " , i );
        scanf("%d" , &a[i]);
    }
        ptr = &a[0];
        for ( i = 0 ; i < 5 ; i ++ )
        {
            printf("Address %u value : %d \n" , ptr , *ptr );
            ptr ++ ; 
        }
    return 0;
}*/
/*// Poiner with structure 
#include<stdio.h>
int main()
{
    struct emp 
    {
        char name [21];
        int age ; 
        int salary ;
    }; 
    struct emp e1 = {"amit" , 20 , 25000 };
    struct emp *ptr , empe1 ; 
    ptr = &e1 ; 
    printf("%s\t%d\t%d\n" , e1.name , e1.age , e1.salary );
    printf("%s\t%d\t%d\n" , ptr->name , ptr-> age , ptr-> salary );
    return 0;
}*/
/*// Pointer of pointer 
#include<stdio.h>
int main()
{
    int x = 10 , *y , ** z ; 
    y = &x ; 
    z = &y ;
    printf("Value of x : %d \n " , x );
    printf("Value of y : %d \n " , *y );
    printf("Value of z : %d \n " , **z );
    return 0;
}*/
/*// Pointer Arithmatics 
#include<stdio.h>
int main()
{
    int x = 10 , y = 20 ; 
    int  *ptr1 , *ptr2 ; 
    ptr1 = &x ;
    ptr2 = &y ;
    printf("Value of x using ptr1 : %d\n ", *ptr1 );
    printf("Value of y using ptr2 : %d\n " , *ptr2 ); 
    
    ptr1 = ptr2 ; 
    printf("Value of y using ptr1 : %d \n ", *ptr1);
    printf("Value of y using ptr 2 : %d \n " , *ptr2 );
    x = *ptr2 + 5 ; 
    printf("Value of x : %d \n " , x );
    printf("Value of y : %d \n " , y );

    ptr1 = &x ; 
    *ptr1 = *ptr2;  
    printf("Value of x using ptr1 : %d \n " , *ptr1); 
    printf("Value of y using ptr2 : %d\n " , *ptr2 );
    return 0;
}*/
/*// Pointer with function - 
                                One function can return only value in any condition function Inovocation . 
There are two methods to invoke a function Invocation . 
1.) Call by Value 
2.)Call by reference 
// Call by value :-  
                    In call by value method we are passing a duplicate set of the values to the called function .
If we are trying to modify the values of the variables inside the called function then changes will not be reflect 
to the changes will not be reflect to the caller function . 
// Call by reference : - 
                          In call by reference method we are passing teh references (address) of the variables to 
the called function . If we are trying to modify the value of the variables then the changes will automatically 
reflect to the caller function . */
/*// W A P to swap two number with call by value and call by reference . 
#include<stdio.h>
void swap( int a, int b );
int main()
{
    int a , b ; 
    printf("Enter the two number : ");
    scanf("%d%d" , &a , &b );
    printf("Value of a and b before swapping : %d and %d \n " , a , b );
    printf("Value of a and b after swapping ");
    swap( a , b );
    return 0;
}
void swap(int x , int y )
{
    int z  ;
    z = x ; 
    x = y ; 
    y = z ; 
    printf(" Values of x and y after swapping %d and %d \n " , x , y );
}*/
/*// Swaping with call by reference 
#include<stdio.h>
void swap( int * , int * );
int main()
{
    int a , b ; 
    printf("Enter the two number : ");
    scanf("%d%d" , &a , &b );
    printf("Value of a and b before swapping : %d %d\n " , a , b );

    swap(&a , &b );
    printf("Values of a and b after swapping %d %d \n " , a , b );
    return 0;
}
void swap(int *x , int *y )
{
    int z ;
    z = *x ; 
    *x = *y ; 
    *y = z ; 
    printf("Values of a and b after swapping %d %d \n " , *x , *y );
}*/







