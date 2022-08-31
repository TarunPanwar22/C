//************************************All Basic C Programming question*************************************
/*Write a program to find power of any number 
5 ^ 3 = 125 
#include<stdio.h>
#include<math.h>
int main()
{
    int base , power , expo ; 
    printf("Enter the number is : \n ");
    scanf("%d",&base);
    printf("Enter the exponent is : \n ");
    scanf("%d",&expo);
    power = pow(base , expo); 
    printf("%d ^ %d = %d", base , expo , power );
    return 0;
}*/
/*Write a program to calculate simple interest 
#include<stdio.h>
int main()
{
    float SI , PRINCIPAL , RATE , TIME ; 
    printf("Enter the Principal amount is :- \n ");
    scanf("%f" , &PRINCIPAL);
    printf("Enter the Rate amount is :- \n ");
    scanf("%f" , &RATE);
    printf("Enter the Time is :- \n ");
    scanf("%f" , &TIME);
    SI = (PRINCIPAL * RATE * TIME )/ 100 ;
    printf("Simple interest is : %f\n " , SI);
    return 0;
}*/
/*Write a program to calculate compound interest 
#include<stdio.h>
#include<math.h>
int main()
{
    float CI , RATE , TIME , PRINCIPLE ;
    printf("Enter the Principle amount is :- \n ");
    scanf("%f" ,&PRINCIPLE);
    printf("Enter the rate is :- \n ");
    scanf("%f",&RATE);
    printf("Enter the time is :- ");
    scanf("%f" , &TIME);
    CI = PRINCIPLE *  pow(( 1 + RATE / 100 ), TIME);
    printf("Compound interest is :- \n%f " , CI);
    return 0;
}*/
/* Write a program to check even or odd number using bitwise operator 
#include<stdio.h>
int main()
{
    int n ; 
    printf("Enter the number is :- \n ");
    scanf("%d" , &n);
    if ( n % 2 == 0 )
    {
        printf("The number is even number ");
    }
    else 
    {
        printf("The number is odd number");
    }
    return 0;
}*/
/* Write a program to find maximum between two number using conditional operator 
#include<stdio.h>
int main()
{
    int a , b ; 
    printf("Enter the two number is : - \n");
    scanf("%d%d" , &a , &b );
    if ( a > b )
    {
        printf("A is maximum number ");
    }
    else 
    {
        printf("B is maximum number ");
    }
    return 0;
}*/
/*Write a program to check wheter character is an alphabet or not usiig conditional operator .
#include<stdio.h>
int main()
{
    char ch , a , z ; 
    printf("Enter the alphabet is :- \n ");
    scanf("%ch" , &ch );
    if ( 'a' <= ch && 'z' >= ch )
    {
        printf("there is an alphabet character ");
    }
    else 
    {
        printf("there is not an alphabet character ");
    }
    return 0;
}*/
/*Write a program to find maximum between three numbers 
#include<stdio.h>
int main()
{
    int a , b , c ; 
    printf("Enter the three number is :- \n ");
    scanf("%d%d%d" , &a , &b , &c );
    if ( a > b && a > c )
    {
        printf("%d is a maximum number " , a);
    }
    else if ( b > a && b > c )
    {
        printf("%d is maximum number " , b );
    }
    else if ( c > a && c > b )
    {
        printf("%d is a maximum number " , c ); 
    }
    return 0;
}*/
/*Write a program to check wheter a number is negative , positive and zero . 
#include<stdio.h>
int main()
{
    int n ; 
    printf("Enter the number is :- \n ");
    scanf("%d",&n);
    if( n > 0 )
    {
        printf("the is a positive number");
    }
    if( n < 0 )
    {
        printf("the  is a negative number");
    }
    if ( n == 0 )
    {
        printf("the is a zero number");
    }
    return 0;
}*/
/* Write a program to check wheter a number is devisible by 5 and 11 or not .
#include<stdio.h>
int main()
{
    int n ; 
    printf("Enter the number is :- \n ");
    scanf("%d" , &n );
    if( n % 5 == 0 )
    {
        printf(" the number is divisible by 5 ");
    }
    else 
    {
        printf(" the number is not divible by 5 ");
    }
    if ( n % 11 == 0 )
    {
        printf(" \n the number is divible by 11 ");
    }
    else 
    {
        printf(" \n the number is not divible by 11 ");
    }
    return 0;
}*/
//2nd Method 
/*
#include<stdio.h>
int main()
{
    int n ; 
    printf("Enter the number is :- \n ");
    scanf("%d" , &n );
    if ( n % 5 == 0 && n % 11 == 0 )
    {
        printf("%d number is divible by 5 and 11 " , n );
    }
    else 
    {
        printf("%d number is not a divible by 5 and 11 " , n );
    }
    return 0;
}*/
/* Write a program to wheter a year is leap year or not . 
#include<stdio.h>
int main()
{
    int year ; 
    printf("Enter the year is :- \n ");
    scanf("%d" , &year );
    if ( year % 400 == 0 )
    {
        printf("%d is a leap year " , year );
    }
    else if ( year % 100 == 0 )
    {
        printf("%d is a leap year ", year );
    }
    else if ( year % 4 == 0 )
    {
        printf("%d is a leap year" , year );
    }
    else 
    {
        printf("%d is not a leap year " , year );
    }
    return 0;
}*/
//2 nd Method 
/*
#include<stdio.h>
int main()
{
    int year ; 
    printf("Enter the year is :- \n ");
    scanf("%d" , &year );
    if ( year % 400 == 0 || year % 100 == 0 || year % 4 == 0 )
    {
        printf("%d is a leap year " , year );
    }
    else 
    {
        printf("%d is not a leap year" , year );
    }
    return 0;
}/*
 Write a program to check wheter a character is alphabet or not . 
 #include<stdio.h>
 int main()
 {
     char ch ; 
     printf("Enter the charcter is : - \n ");
     scanf("%c" , &ch);
     if ( ch >= 'a' && ch <= 'z' )
     {
         printf(" the Alphabet is a character");
     }
     else 
     {
         printf(" the Alphabet is not a character");
     }
     return 0;
 }*/
 /* Write a program to check wheter a character is alphabet , digit or special character . */
 //using with ASCII CODES
 /*
 #include<stdio.h>
 int main()
 {
     char ch ;
     printf("Enter any character is :- \n ");
     scanf(" %c " , &ch );
     if (( ch >= 97 && ch <= 122) || ch >= 65 && ch <= 90)
     {
         printf("%c is a alphabet character ", ch );
     }
     else if ( ch >= 48 && ch <= 57 )
     {
         printf("%c is a digit character " , ch );
     }
     else 
     {
        printf("%c is a special character ", ch );
     }
     return 0;
}*/
//2 nd Method ( not using ASCII CODE )
/*
#include<stdio.h>
int main()
{
    char ch ; 
    printf("Enter the character :- \n ");
    scanf("%c" , &ch );
    if (( ch >= 'a' && ch <= 'z') || ch >= 'A' && ch <= 'Z')
    {
        printf("%c is alphabet character " , ch );
    }
    else if ( ch >= '0' && ch <= '9')
    {
        printf("%c is digit character" , ch );
    }
    return 0;
}*/
/*Write a program to input any alphabet and check wheter it is vowel or consonant . 
#include<stdio.h>
int main()
{
	char ch ; 
	printf("Enter the character is :- \n ");
	scanf("%c" , &ch );
	if ( ch == 'a' || ch == 'e' || ch == 'i'|| ch == 'o' || ch == 'u' 
	  || ch == 'A' || ch == 'E' || ch == 'I'|| ch == 'O' || ch == 'U')
	  {
	  	printf("%c is a vowel " , ch );
	  }
	  else if ( ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
	  {
	  	printf("%c is a consonant " , ch );
	  }
	  else 
	  {
	  	printf("%c is not alphabet ");
	  }
	  return 0;
}*/
/*Write a program to check wheter a character is uppercase or lowercase alphabet . 
#include<stdio.h>
int main()
{
    char ch ; 
    printf(" Enter the alphabet character is :- \n ");
    scanf("%c" , &ch );
    if ( ch >= 'a' && ch <= 'z')
    {
        printf("%c alphabet character is lowercase" , ch );
    }
    else if ( ch >= 'A' && ch <= 'Z')
    {
        printf("%c alphabet character is Uppercase" , ch );
    }
    return 0;
}*/
//-------------------------------------SWITCH CASE--------------------------------------------------
/*Write a program to input week number and week day . 
#include<stdio.h>
int main()
{
    int week ;
    printf("Enter the week is :- \n ");
    scanf("%d" , &week );
    if ( week == 1 )
    {
        printf("Monday");
    }
    else if ( week == 2 )
    {
        printf("Tuesday");
    }
    else if ( week == 3 )
    {
        printf("Wednesday");
    }
    else if ( week == 4 )
    {
        printf("Thursday");
    }
    else if ( week == 5 )
    {
        printf("Friday");
    }
    else if ( week == 6 )
    {
        printf("Saturday ");
    }
    else if ( week == 7 )
    {
        printf("Sunday");
    }
    else if ( week => 7 )
    {
        printf(" No days");
    }
    return 0;
}*/
/*Write a program to print number of days in a month .
#include<stdio.h>
int main()
{
    int month ;
    
    printf("Enter the month is ( 1 - 12 ) is : - \n ");
    scanf("%d" , &month );

    if ( month == 1 )
    {
        printf("January contains is 31 days ");
    }
    else if ( month == 2 )
    {
        printf("February contains is 28 or 29 days ");
    }
    else if ( month == 3 )
    {
        printf("March contains is 31 days ");
    }
    else if ( month == 4 )
    {
        printf("April contains is 30 days ");
    }
    else if ( month == 5 )
    {
        printf("May contains is 31 days ");
    }
    else if ( month == 6 )
    {
        printf("June contains is 30 days ");
    }
    else if ( month == 7 )
    {
        printf("July contains is 31 days ");
    }
    else if ( month == 8 )
    {
        printf("August contains is 30 days ");
    }
    else if ( month == 9 )
    {
         printf("September contains is 31 days ");
    }
    else if ( month == 10 )
    {
        printf("October contains is 30 days ");
    }
    else if ( month == 11 )
    {
        printf("November contains is 31 days ");
    }
    else if ( month == 12 )
    {
        printf("December contains is 30 days ");
    }
    else 
    {
        printf("Invalid month ");
    }
    return 0;
}*/
    /*Write a program to count total numeber of notes in given amount . 
#include<stdio.h>
int main()
{
    int amount , A , B , C , D , E ,F , G ; 
    printf("Enter the amount is :- \n ");
    scanf("%d" , &amount );
    A = amount / 500 ;
    amount = amount % 500 ;
    B = amount / 100 ;
    amount = amount % 100 ;
    C = amount / 50 ;
    amount = amount % 50 ; 
    D = amount / 10 ;
    amount  = amount % 10 ;
    E = amount / 5 ;
    amount = amount % 5 ; 
    F = amount / 2 ;
    amount = amount % 2 ; 
    G = amount / 1 ;
    printf(" \nNumber of notes (500) : %d " , A );
    printf("\nNumber of notes (100) : %d" , B );
    printf("\nNumber of notes (50) : %d" ,  C );
    printf("\nNumber of notes (10) : %d" ,  D );
    printf("\nNumber of notes (5) : %d " , E);
    printf("\nNumber of notes (2): %d " , F );
    printf("\nNumber of notes (1) : %d " , G);
    return 0;
}*/
// 2nd Method 
/*
#include<stdio.h>
int main()
{
    int A , a , b , c , d , e , f , g ; 
    printf("Enter the amount is :- \n ");
    scanf("%d" , &A);
    
    if ( A >= 500 )
    {
        a = A / 500 ;
        A = A % 500 ;
    }
    if ( A <= 100 )
    {
        b = A / 100 ; 
        A = A % 100 ; 
    }
    if ( A >= 50 )
    {
        c = A / 50 ; 
        A = A % 50 ; 
    }
    if ( A > 10 )
    {
        d = A / 10 ;
        A = A % 10 ; 
    }
    if ( A >= 5 )
    {
        e = A / 5 ; 
        A = A % 5 ; 
    }
    if ( A <= 2 )
    {
        f = A / 2 ; 
        f = f % 2 ; 
    }
    if ( A <= 1 )
    {
        g = A / 1 ; 
        A = A % 1 ; 
    }
     printf(" \nNumber of notes (500) : %d " , a);
    printf("\nNumber of notes (100) : %d" , b );
    printf("\nNumber of notes (50) : %d" ,  c );
    printf("\nNumber of notes (10) : %d" ,  d);
    printf("\nNumber of notes (5) : %d " , e);
    printf("\nNumber of notes (2): %d " , f );
    printf("\nNumber of notes (1) : %d " , g);
    return 0;
}*/
/*Write a program to check whether triangle is valid or not if angles are given
#include<stdio.h>
int main()
{
    int a1 , a2 , a3 , sum ;
    printf("Enter the three side of a trianlgle is : \n ");
    scanf("%d%d%d" , &a1 , &a2 , &a3 );
    sum = a1 + a2 + a3 ; 
    if ( sum == 180 && a1 > 0 && a2 > 0 && a3 > 0 )
    {
        printf("This angle is a triangle");
    }
    else 
    {
        printf("this angle is not a triangle");
    }
    return 0;

}*/
/*Write a program to input all sides of a triangle and check whether triangle is valid or not . 
#include<stdio.h>
int main()
{
    int a , b , c ;
    printf("Enter the three sides of a triangle is : \n ");
    scanf("%d%d%d" , &a , &b , &c );
    if (a + b > c  && a + c > b && b + a > c && b + c  > a && c + b > a && c + a > b )
    {
        printf("abc is a triangle ");
    }
    else 
    {
        printf("abc is not a triangle");
    }
    return 0;
}*/
/*Write a program to check wheter the triangle is equilateral , isosceles or scalene triangle . 
#include<stdio.h>
int main()
{
    int a , b , c ; 
    printf("Enter the three side of a triangle is : \n ");
    scanf("%d%d%d ", &a , &b , &c );
    if ( a == b && b == c && c == a )
    {
        printf("the triangle is equilateral triangle ");
    }
    else if ( a == b && b != c && c != a )
    {
        printf("The triangle is isosceles triangle ");
    }
    else
    {
        printf("the triangle is scalene triangle ");
    }
    return 0;
}*/
/*Write a program to calculate profit or loss 
#include<stdio.h>
int main()
{
    float sp , cp , profit , loss ;
    printf("Enter the value of sp is : \n ");
    scanf("%f " , &sp );

    printf("Enter the second value of cp is : \n ");
    scanf("%f" , &cp );

    if ( sp >= cp )
    {
        profit = sp - cp ; 
    }
    else if ( cp >= sp )
    {
        loss = cp - sp ;
    }
    printf("Profit : %f ", profit );
    printf("Loss : %f " , loss );
    return 0;
}*/
/*Write a program to input marks of five subjects Physics , Chemistry , Biology , 
Mathematics and Computer . Calculate percentage and grade according to following . 
percentage >= 90 % : Grade A 
percentage >= 80 % : Grade B 
percentage >= 70 % : Grade C
percentage >= 60 % : Grade D
percentage >= 40 % : Grade E
percentage >= 40 % : Grade F

#include<stdio.h>
int main()
{
    int physics , chemistry , biology , mathematics , computer , percentage ; 
    printf("Enter the Five subject (physics , chemitry , biology , mathematics ,computer ) is : \n ");
    scanf("%d%d%d%d%d", &physics , &chemistry , &biology , &mathematics , &computer );
    percentage = ( physics + chemistry + biology + mathematics + computer )*100/500 ; 

    if ( percentage >= 90 )
    {
        printf("The total grade of the student who want to get marks in anual examination :- Grade A " );
    }
    else if ( percentage >= 80 )
    {
        printf("The total grade of the student who want to get marks in annual examination :- Grade B " );
    }
    else if ( percentage >= 70 )
    {
        printf("The total grade of the student who want to get marks in anual examination :- Grade C ");
    }
    else if ( percentage >= 60 )
    {
        printf("The total grade of the student who want to get marks in anual examination :- Grade D ");
    }
    else if ( percentage >= 40 )
    {
        printf("The total grade of the student who want to get marks in anual examination :- Grade E ");
    }
    else if ( percentage < 40 )
    {
        printf("the total grade of the student who want to get marks in anual examination :- Grade F ");
    }
    return 0;

}*/
/*Write a program to input basic salary of an employee and calculate its Gross salary according to following.
#include<stdio.h>
int main()
{
    float  bs , da , hra , gross ;
    printf("Enter the basic salary of an amount is : \n ");
    scanf("%f" , &bs );

    if ( bs <= 10000 )
    {
        da = bs * 80 / 100 ; 
        hra = bs * 20 / 100 ;
    }
    else if ( bs <= 20000 )
    {
        da = bs * 90 / 100 ;
        hra = bs * 25 / 100 ;
    }
    else if ( bs > 20000 )
    {
        da = bs * 95 / 100 ;
        hra = bs * 30 / 100 ; 
    }
    gross = bs + hra + da ; 
    printf("Gross salary of employee = %.2f ", gross );
}*/
                      // SWITCH CASE
/*Write a program to print day of week name using switch case . 
#include<stdio.h>
int main()
{
    int n ; 
    printf("Enter the days is : \n ");
    scanf("%d " , &n);
    
    switch (n)
    
    {
        case 1 : 
             printf("Monday");
             break; 
        case 2 : 
             printf("Tuesday");
             break; 
        case 3 : 
             printf("Wednesday");
             break;
        case 4 : 
             printf("Thrusday");
             break;
        case 5 : 
             printf("Friday ");
             break;
        case 6 :  
             printf("Saturday");
             break ;
        case 7 : 
             printf("Sunday");
             break ; 
        default : printf("Invalid number of days ");
             break ; 
    }
    return 0;
} */
/* Write a program print a month using switch case .
#include<stdio.h>
int main()
{
    int day ;
    printf("Enter the days is : \n ");
    scanf("%d" , &day );

    switch (day)
    {
        case 1 : printf("January");
                 break ; 
        case 2 : printf("February");
                 break ; 
        case 3 : printf("March");
                 break ; 
        case 4 : printf("April");
                 break ; 
        case 5 : printf("May");
                 break ; 
        case 6 : printf("June");
                 break ; 
        case 7 : printf("July");
                 break ; 
        case 8 : printf("August");
                 break ; 
        case 9 : printf("September");
                 break ; 
        case 10 : printf("October");
                 break ; 
        case 11 : printf("November");
                 break ; 
        case 12 : printf("December ");
                 break ; 
        default : printf("Invalid months ");
                 break ; 
    }
    return 0; 
}*./
/*Write a program to print number of days in a month using switch case 
#include<stdio.h>
int main()
{
    int day ; 
    printf("Enter the months is :- \n ");
    scanf("%d", &day );

    switch (day)
    {
        case 1 : printf("January contains 31 days ");
                 break ; 
        case 2  : printf("February contains 28 / 29 days ");
                 break ; 
        case 3 : printf("March contains 31 days ");
                 break ; 
        case 4 : printf("April contains 30 days ");
                 break ; 
        case 5 : printf("May contains 31 days ");
                 break ;
        case 6 : printf("June contains 30 days ");
                 break ; 
        case 7 : printf(" July contains 31 days ");
                 break ; 
        case 8 : printf("August contains 30 days ");
                 break ; 
        case 9 : printf("September contains 31 days ");
                 break ; 
        case 10 : printf("Ocober contains 30 days ");
                 break ; 
        case 11 : printf("November contains 31 days ");
                 break ; 
        case 12  : printf("December contains 30 days ");
                 break ; 
        default : printf("Invaid month ");
                 break ; 
    }
    return 0; 
}
/*Write a program to check whether an alphabet is vowel or consonant using switch case . 
#include<stdio.h>
int main()
{
    char ch ; 

    printf("Enter the character in alphabet :- \n ");
    scanf("%c" , &ch );
    
    switch ( ch )
    {
        case 'a' : printf("vowel ");
                   break ;
        case 'e' : printf("vowel");
                   break ; 
        case 'i' : printf("vowel");
                   break ; 
        case 'o' : printf("vowel ");
                   break ; 
        case 'u' : printf("vowel");
                   break ; 
        case 'A' : printf("vowel ");
                   break ; 
        case 'E' : printf("vowel");
                   break ; 
        case 'I' : printf("vowel");
                   break ; 
        case 'U' : printf("vowel");
                   break ; 
        default : printf("%c is consonant " , ch );
                  break ;
    }
    return 0;
}*/ 
/*Write a program to find maximum between two number using switch case 
#include<stdio.h>
int main()
{
    int n , m ; 
    printf("Enter any two number is :- \n ");
    scanf("%d%d" , &n , &m );

    switch ( n > m )
    {
        case 0 : printf("%d is a maximum number" , m  );
               break ; 
        case 1 : printf("%d is a maximum number " , n );
    }
    return 0 ;
}*/
/*Write a program to check whether a number is even or odd using switch case . 
#include<stdio.h>
int main()
{
    int n ; 
    printf("Enter any number is : - \n ");
    scanf("%d" , &n );

    switch ( n % 2 == 0 )
    {
        case 1 : printf("%d is an even number " , n );
                 break ; 
        case 0 : printf("%d is an odd number " , n );
                 break ; 
    }
    return 0; 
}*/
/*Write a program to check whether a number is negative possitive or zero using switch case. 
#include<stdio.h>
int main()
{
    int n ; 
    printf("Enter any number is :- \n ");
    scanf("%d" , &n );

    switch ( n > 0 && n > 0 )
    {
        case 1 : printf("%d is a positive number " , n );
                 break ; 
        case 0 : 
        switch (n < 0 )
        {
        case 1 : printf("%d is a negative number", n );
                 break ; 
        case 0 : printf("%d is a zero number" , n );
                 break ; 
        }
        break; 
    }
    return 0;
}*/
/* Write a program to create simple calculator .
#include<stdio.h>
int main()
{
    char ch ; 
    int a , b , c   ; 

    printf("************************* WECLOME TO CREATE A SIMPLE CALCULATOR ***********************************");
    printf("\n '+' is defined as a sum ");
    printf("\n '-' is defined as difference");
    printf("\n '*' is defined as multiply ");
    printf("\n '/' is defined as division ");
    printf("Enter any operator ( '+' , '-' , '*', '/') is :- \n ");
    scanf("%c", &ch );

    switch ( ch )
    {
        case '+': printf("Enter the value of a and b is :- is \n ");
                  scanf("%d%d" , &a , &b );
                  c = a + b ; 
                  printf(" \n the sum of two number is :- %d\n " , c );
                  break ; 
        case '-': printf("Enter the value of a and b is :- is \n ");
                  scanf("%d%d" , &a , &b );
                  c = a - b ; 
                  printf(" \n the difference of two number is :- %d\n " , c );
                  break ; 
        case '*' : printf("Enter the value of a and b is :- is \n ");
                  scanf("%d%d" , &a , &b );
                  printf(" \n the multiply of two number is :- %d\n " , c );
                  c = a * b ; 
                  break ; 
        case '/': printf("Enter the value of a and b is :- is \n ");
                  scanf("%d%d" , &a , &b );
                  printf(" \n the division of two number is :- %d\n " , c );
                  c = a / b ; 
                  break ; 
    }
    return 0;
}*/

//--------------------------------------------LOOPING-----------------------------------------------------//

/*Write a program to print all natural number from 1 to n . 
#include<stdio.h>
int main()
{
    int i , n ; 
    printf("Enter the number is : - \n ");
    scanf("%d" , &n );

    for( i = 1 ; i < n ; i ++ )
    {
        printf("Natural number is : %d\n " , i  );
    }
    return 0;
}
//2nd method while loop 
#include<stdio.h>
int main()
{
    int i = 0 , n ;
    printf("Enter the number is :- \n ");
    scanf("%d" , &n );
     while ( i <= n )
     {
         printf("Natural number is : %d\n " , i );
         i++ ; 
     }
     return 0; 
}*/ 
// 3rd methood do while loop 
/*
#include<stdio.h>
int main()
{
    int i = 1 , n ; 
    printf("Enter the number is :- \n ");
    scanf("%d " , &n ); 
    do 
    {
        printf(" Natural number is : %d\n " , i );
        i++; 
    }
    while ( i <= 10 );
    return 0; 
}*/
/*Write a program to print all natural number in reverse (from n to 1 ). - using while loop.
#include<stdio.h>
int main()
{
    int i , n ; 
    printf("Enter the number is :- \n ");
    scanf("%d" , &n );
    for ( i = n ; i >= 1 ; i-- )
    {
         printf("Reverse : %d\n " , i );
    }
    return 0;
}
// 2nd methood while loop 
#include<stdio.h>
int main()
{
    int i = 10, n ; 
    printf("Enter the number is :- \n ");
    scanf("%d" , &n );
    while ( i >= n )
    {
        printf("Reverse Number is : %d\n " , i );
         i-- ;
    }
    return 0;
}
// 3rd do while loop 
#include<stdio.h>
int main()
{
    int i = 10  , n ; 
    printf("Enter the number is :- \n ");
    scanf("%d", &n );
    do 
    {
        printf("Reverse : %d " , i );
        i-- ;
    }
    while (i >= n );
    return 0;
}*/
/* Write a program to print all allphabet from a to z . *
#include<stdio.h>
int main()
{
    char ch ; 
     
    printf("Enter the alphabet character is :- \n ");
    scanf("%c", &ch );
    for ( ch = 'a' ; ch <= 'z' ; ch ++ )
    {
        printf("alphabet character is : %c \n " , ch );
    }
    return 0;
}
                 //      OR 
// 2nd methood alphabet using ascii code 
#include<stdio.h>
int main()
{
    char ch ; 
     int i ; 
    printf("Enter the alphabet character is :- \n ");
    scanf("%c", &ch );
    for ( i = 97 ; i <= 122 ; i ++ )
    {
        printf("alphabet character is : %c \n " , i  );
    }
    return 0;
}
            // using WHILE loop

#include<stdio.h>
int main()
{
    int i ; 
    char ch ; 
    printf("Enter the character is : \n ");
    scanf("%d" , &ch );
    while ( i <= 122 )
    {
        printf("Alphabet character is : %ch \n " , i );
        i++ ; 
    }
    return 0; 
}*/
/*Write a program o print all even number between 1 to 100 :- usiing while loop . 
c
// using for loop 
#include<stdio.h>
int main()
{
    int i , n  ;
    printf("Enter the number is :- \n ");
    scanf("%d" , &n );
    
   for ( i = 1 ; i <= n ; i ++ )
    {
        if ( i % 2 == 0 )
        {
            printf("Even number is : %d\n  " , i );
        }
    }
    return 0;
}*/
/* Write a program to print all odd number between 1 to 100. 
#include<stdio.h>
int main()
{
    int i  , n ; 
    printf("Enter the value of n is : - \n ");
    scanf("%d" , &n );
    for ( i = 1 ; i <= n ; i ++ )
    {
        if ( i % 2 != 0 )
        {
            printf("Odd number is : %d\n  " , i );
        }
        i++ ;
    }
    return 0;
}
          // 2nd method while loop 
#include<stdio.h>
int main()
{
    int i = 1 , n  ;
    printf("Enter the number is :- \n ");
    scanf("%d" , &n );
    
    while ( i <= n )  
    {
        if ( i % 2 != 0 )
        {
            printf("Even number is : %d\n  " , i );
        }
        i++ ;
    }
    return 0;
}*/
/* Write a program to find sum of all natural numbers between 1 to n . 
#include<stdio.h>
int main()
{
    int i , n , s = 0 ; 
    printf("Enter the number is : \n ");
    scanf("%d " , &n );
    for ( i = 1 ; i <= n ; i ++ )
    {
        s = s + i ; 
        printf("Sum of all natural number is : %d " , s );
    }
    return 0;
}
              // while loop 
#include<stdio.h>
int main()
{
    int i = 1  , n , s = 0 ; 
    printf("Enter the number is : \n ");
    scanf("%d " , &n );
    while (i <= n )
    {
        s = s + i ; 
        printf("Sum of all natural number is : %d " , s );
        i++ ; 
    }
    return 0;
}*/
/* Write a program to print multiplication table of any number . 
#include<stdio.h>
int main()
{ 
    int n , i  ; 
    printf("Enter the number is : \n ");
    scanf("%d" , &n );
    for ( i = 1 ; i <= 10 ; i ++ )
    {
        printf("Table : %d * %d = %d\n " , n , i , n * i ); 
    }
    return 0;
}
                   // 2nd method while loop 
#include<stdio.h>
int main()
{
    int i = 1  , n ; 
    printf("Enter the number is :- \n ");
    scanf("%d" , &n );
    while ( i <= 10 )
    {
        printf("Table is : %d * %d = %d\n  " , n , i , n * i );
        i++ ;
    }
    return 0; 
}*/
/* Write a program to count number of digits in a number . 
// ex 12345 = 5 digit number 
#include<stdio.h>
int main()
{
    int n , i , r , count = 0 ; 
    printf("Enter the digit number is : - \n ");
    scanf("%d" , &n );
    while ( n > 0 )
    {
        r = n % 10 ; 
        count ++ ; 
        n = n / 10 ; 
    }
    printf("Counting number is : %d " , count );
    return 0 ;
} 
//        2nd method 
#include<stdio.h>
int main()
{
    int n , count = 0 ; 
    printf("Enter the digit number is : - \n ");
    scanf("%d" , &n );
    while ( n > 0 )
    {
       if ( n % 10 != 0 )
       {
           n = n / 10 ;
           count ++ ;
       } 
    }     
    printf("Counting number is : %d " , count );
    return 0 ;
}*/
/* Write a program to find sum of first and last digit of a  number 
#include<stdio.h>
int main()
{
    int n , last , sum ; 
    printf("Enter the number is : - \n ");
    scanf("%d" , &n );
    last = n % 10 ; 
    while ( n >= 10 )
    {
        n = n / 10 ; 
    }
    sum = n + last ; 
    printf("Sum :\n %d + %d = %d " , n , last , n + last );
    return 0;
}*/
/* Write a program to find first and last digit of a number . 
#include<stdio.h>
int main()
{
    int n , last ; 
    printf("Enter the number is :- \n ");
    scanf("%d" , &n );
    last = n % 10 ; 
    while ( n >= 10 )
    {
        n = n / 10 ; 
    }
    printf("The last digit is : %d " , last );
    printf("The first digit is : %d " , n );
    return 0 ; 
}*/
/* Write a program to calculate sum of  digits of a  number 
#include<stdio.h>
int main()
{
    int n , r , sum = 0 ;
    printf("Enter the number is :- \n ");
    scanf("%d" , &n );
    while ( n > 0 )
    {
        r = n % 10 ;
        n = n / 10 ; 
        sum = sum + r ;  
    }
    printf("the sum of the value is : %d\n " , sum );
    return 0; 

}*/
/* Write a program to calculate sum of  digits of a  number 
#include<stdio.h>
int main()
{
    int n , r , multiply = 1 ;
    printf("Enter the number is :- \n ");
    scanf("%d" , &n );
    while ( n > 0 )
    {
        r = n % 10 ;
        n = n / 10 ; 
        multiply = multiply * r ; 
    }
     printf("the multiply of the value is : %d\n " , multiply ); 
    return 0; 
}*/
/*Write a program to find reverse of a number 
#include<stdio.h>
int main()
{
    int n , sum = 0 , r ; 
    printf("Enter the number is :- \n ");
    scanf("%d" , &n );
    while ( n > 0 )
    {
        r = n % 10 ; 
        n = n / 10 ; 
        sum = sum * 10+ r ; 
    }
    printf("The value of Reverse  is : %d " , sum );
    return 0;
}*/
/* Write a program to check whether a number is palindrome or not . 
#include<stdio.h>
int main()
{
    int n , p , r , s = 0 ;
    printf("Enter the number is : - \n ");
    scanf("%d" , &n );
    p = n ; 
    while ( n != 0 )
    {
        r = n % 10 ; 
        n = n / 10 ;
        s = s * 10 + r ;  
    }
    if ( p == s )
    {
        printf("The number is palindrome ");
    }
    else 
    {
        printf("The number is not palindrome ");
    }
    return 0 ; 
}*/
/* Write a program to print number in words .
#include<stdio.h>
int main()

{
    int n , num = 0 ; 
    printf("Enter the number is :- \n ");
    scanf("%d" , &n );
    while ( n > 0 )
    {
        num = ( num * 10 ) + ( n % 10 );
        n = n / 10 ; 
    }
    while ( num > 0 )
    {
        switch ( num % 10 )
        {
            case 1 : printf("One");
                     break ; 
            case 2 : printf("Two");
                     break ;
            case 3 : printf("Three");
                     break ; 
            case 4 : printf("Four");
                     break ; 
            case 5 : printf("Five");
                     break ; 
            case 6 : printf("Six");
                     break ; 
            case 7 : printf("Seven");
                     break ; 
            case 8 : printf("Eight");
                     break ; 
            case 9 : printf("Nine");
                     break ;
            default : printf("Invalid words");
                     break ; 
        }
        num = num / 10 ; 
    }
    return 0 ; 
}*/
/* Write a program to find frequency of each digit in a given integer .
#include<stdio.h>
#define BASE 10 //constant 
int main()
{
    int num , frequency[10] , n , last , i  ;
    printf("Enter the number is : \n ");
    scanf("%d" , &num);
    for ( i = 0 ; i <= 9 ; i ++ )
    {
        frequency[i] = 0 ; 
    }
    n = num ; 
    while ( n > 0 )
    {
        last = n % 10 ; 
        n = n / 10 ; 
        frequency [last] ++ ; 
    }
    printf("Frequency of each digit in %d \n " , num );
    for ( i = 0 ; i <= 9 ; i ++ )
    {
        printf("Frequency of %d = %d \n " , i , frequency[i]);
    }
    return 0; 
}*/
/* Write a program to print all ASCI character with their values . 
#include<stdio.h>
int main()
{ 
    int i ; 
    for ( i = 0 ; i <= 255 ; i ++ )
    {
        printf("ASCI value of character %c = %d\n  " , i , i );
    }
    return 0 ; 

}*/
/* Write a program to find power of a number using for loop 
#include<stdio.h> 
#include<math.h>
int main()
{
    int n , i ,  base , exponent ;
    printf("Enter the number and base is :- \n ");
    scanf("%d%d" , &n , &base );
   for ( i = 0 ; i <= base ; i++ )
   {
        exponent = pow(n , base );
   }
   printf("Power %d ^ %d is %d " , n , base , exponent);
   return 0;
}
// 2nd Method 
#include<stdio.h>
int main()
{
    int power = 1 , base , exponent , i  ;  
    printf("Enter the base is :- \n ");
    scanf("%d" , &base );
    printf("Enter the exponent is :- \n ");
    scanf("%d" , &exponent );
    for ( i = 1 ; i <= exponent ; i ++ )
    {
        power = power * base ;
    }
    printf("Power %d ^ %d = %d " , base , exponent , power );

}*/
/* Write a program to find all factors of a number . 
#include<stdio.h>
int main()
{
    int n , i ; 
    printf("Enter the number is : - \n ");
    scanf("%d" , &n );
    for ( i = 1 ; i <= n ; i ++ )
    {
        if ( n % i == 0 )
        {
            printf("Factors %d is a factor of %d\n  " , i , n );
        }
    }
    return 0;
}*/
/* Write a program to find all factors of a number .
#include<stdio.h>
int main()
{
    int n , i , factorial = 1;
    printf("Enter the number is : - \n ");
    scanf("%d" , &n );
    for ( i = 1 ; i <= n ; i ++ )
    {
        factorial = factorial * i ; 
    }
    printf("Factorial is : %d " , factorial );
    return 0; 
}*/
/*Write a program find LCM of two number 
#include<stdio.h>
int main()
{
    int a , b , max = 0 , i , lcm ; 
    printf("Enter the two number is : - \n ");
    scanf("%d%d" , &a , &b );
    for ( i = 1 ; i <= a ; i ++ )
    {
        if ( a % i == 0 && b % i == 0 )
        {
            max = i ; 
            lcm = a * b / max ; 
        }
    }
    printf("LCM is %d" , lcm );
    return 0;
}*/
/* Write a program to find HCF of two numbers 
#include<stdio.h>
int main()
{
    int n1 , n2 , i , hcf ;  
    printf("Enter the two number is :- \n ");
    scanf("%d%d" , &n1 , &n2 );
    for ( i = 1 ; i <= n1 ; i ++ )
    {
        if ( n1 % i == 0 && n2 % i == 0 )
        {
            hcf = i ; 
        }
    }
    printf("HCF is : %d " , hcf );
    return 0;
}*/
/* Write a program to convert binary to decimal number system .
#include<stdio.h>
int main()
{
    int n , decimal= 0 , num ; 
    printf("Enter the binary number is  :- \n ");
    scanf("%d",&n);
    num = n ; 
    while( n > 0 )
    {
        num = n % 10 ; 
        n = n / 10 ;
        decimal = 2 * decimal + num ; 
    }
    printf("Binary number is : %d ", n  );
    printf("Decimal number is : %d " , decimal );
    return 0;
}*/
/* Write a program  to check whether a number is prime number or not .
#include<stdio.h>
int main()
{
    int n , i , sum = 0 ; 
    printf("Enter the number is :- \n ");
    scanf("%d" , &n );
    for ( i = 1 ; i <= n ; i ++ )
    {
        if ( n % i == 0 )
        {
            sum ++ ;
        }
    }
    if ( sum == 2 )
    {
        printf("%d is a prime number " , n );
    }
    else 
    {
        printf("%d is not a prime number " , n );
    }
    return 0 ;
}
/*Write a program to print all prime number between 1 to n . 
// eq = n1 = 10 --------   n2 = 20 ; 
// check prime number between in this number 11 , 13 , 17 , 19 .  
#include<stdio.h>
int main()
{
    int n1 , n2 , i , j ; 
    printf("Enter the two number is :- \n ");
    scanf("%d%d" , &n1 , &n2 );
    for ( i = n1 ; i <= n2 ; i++ )
    {
        for ( j = 2 ; j <= i ; j ++ )
        if ( i % j == 0 )
        break ; 
        if ( i == j )
        {
           printf("Prinme number is : %d " , i);
        }
    }
    return 0;
}*/
/*Write a program to find sum of prime number in given range 
#include<stdio.h>
int main()
{
    int n1 , n2 , i , j , s =0 ; 
    printf("Enter the two number is :- \n ");
    scanf("%d%d" , &n1 , &n2 );
    for ( i = n1 + 1 ; i <= n2 - 1 ; i++ )
    {
        for ( j = 2 ; j <= i ; j ++ )
        if ( i % j == 0 )
        break ; 
        if ( i == j )
        {
           s = s + i ; 
        }
        printf ("Total Prinme number of the sum is : %d\n  " , s);
    }
    return 0; 
}*/
/* Write a program to find prime factors of a number .
//  prime factor of 10 is 2 , 5 ;  
#include<stdio.h>
int main()
{
    int n , i; 
    printf("Enter the number is :- \n ");
    scanf("%d" , &n );
    for ( i = 2 ; i < n ; i ++ )
    {
        if ( n % i == 0 )
        printf("Factors of %d is :%d\n ", n , i );
    }
    return 0;
}*/
/* Write a program to check whether a number is armstrong number or not . 
// 153 = 1 ^3 + 5 ^ 3 + 3 ^ 3 ; 
#include<stdio.h>
int main()
{
    int n , r , num , s = 0 ; 
    printf("Enter the number is :- \n ");
    scanf("%d" , &n );
    num = n ; 
    while ( n > 0 )
    {
        r = n % 10 ; 
        n = n / 10 ;
        s = s + r * r * r ; 
    }
   if ( num == s )
   {
       printf("%d is a  number " , num  );
   }
   else 
   {
       printf("%d is not a armstrong numbe " , num );
   }
   return 0 ; 
}*/
/* Write a program to check whether a number armstrong or not is between 1 to n . 
#include<stdio.h>
int main()
{
    int n1 , n2 , n , i , r ,  sum ;
    printf("Enter the number is :- \n ");
    scanf("%d%d" , &n1 , &n2 );
    for ( i = n1 ; i <= n2 ; i ++ )
    {
        sum = 0 ; 
        n = i ; 
        while ( n > 0 )
        {
            r = n % 10 ;
            n = n / 10 ; 
            sum = sum + r * r * r ; 
        }
        if ( i == sum )
        {
            printf("\n %d is an armstrong number\n  " ,i );           
        }
        else 
        {
            printf("\n %d is not an armstrong number ", i );
        }
    }
    return 0;
}*/
/* Write a program to check whether a number is perfect number or not . 
// 6 - 1 , 2 , 3  = 1 + 2 + 3 . 
#include<stdio.h>
int main()
{
    int n , sum = 0 , i ; 
    printf("Enter the number is :- \n ");
    scanf("%d" , &n );
    for ( i = 1 ; i < n ; i ++ )
    {
        if ( n % i == 0 )
        {
            sum = sum + i ;
        }
    }
    if ( sum == n  )
    {
        printf("%d is a perfect number " , i);
    }
    else 
    {
        printf("%d is not a perfect number " , i );
    }
    return 0 ; 
}*/
/* Write a program to check whether a number is perfect number or not is between 1 to n . 
#include<stdio.h>
int main()
{
    int n1 , n2 , i , j , n , sum ;
    printf("Enter the number is :- \n ");
    scanf("%d%d" , &n1 , &n2 );
    for ( i = n1 ; i < n2 ; i ++ )
    {
        sum = 0 ;
        n = i ;  
        for ( j = 1 ; j < i ; j ++ )
        {
            if ( n % j == 0 )
            {
                sum = sum + j ;
            }
        }
            if ( sum == n )
            {
                printf("\n %d is a perfect number" , j );
            }
    }
    return 0; 
}*/
/* Write a program to check whether a number is Stromg number or not . 

#include<stdio.h>
int main()
{
    int n , orignal , i , last , sum = 0  , fact ;
    printf("Enter the number is :- \n ");
    scanf("%d" , &n );
    orignal = n ; 

    while ( n > 0 )
    {
        last = n % 10 ; 
        fact = 1 ;
        for ( i = 1 ; i <= last ; i++ )
        {
            fact = fact * i ; 
        }
        sum = sum + fact ; 
        n = n / 10 ;
    }
    if ( orignal == sum )
    {
        printf("%d is a strong number" , sum );
    }
    else 
    {
        printf("%d is not strong number" , sum );
    }
    return 0;
}*/
/* Write a program to check whether a number is Strong number or not is between 1 to n . 
#include<stdio.h>
int main()
{
    int n1 , n2 , n , i , j , last , fact , sum ;
    printf("Enter the two number is :- \n ");
    scanf("%d%d" , &n1 , &n2 );
    for ( i = n1 ; i <= n2 ; i ++ )
    {
        n = i ;
        sum = 0 ; 
        while ( n > 0 )
        {
            fact = 1 ;
            last = n % 10 ; 
            for ( j = 1 ; j <= last ; j ++ )
            {
                fact = fact * j ; 
            }
            sum = sum + fact  ;
            n = n / 10 ; 
        }
        if ( sum == i )
        {
            printf("\n %d is a Strong number " , i  );
        }
        else 
        {
            printf("\n %d is not a Srong number " , i );
        }
    }    
    return 0;
}*/
    /* Write a program to check whether a number is Strong number or not is between 1 to n . 
#include<stdio.h>
int main()
{
    int n1 , n2 , n , i , j , last , fact , sum ;
    printf("Enter the two number is :- \n ");
    scanf("%d%d" , &n1 , &n2 );
    for ( i = n1 ; i <= n2 ; i ++ )
    {
        n = i ;
        sum = 0 ; 
        while ( n > 0 )
        {
            fact = 1 ;
            last = n % 10 ; 
            for ( j = 1 ; j <= last ; j ++ )
            {
                fact = fact * j ; 
            }
            sum = sum + fact  ;
            n = n / 10 ; 
        }
        if ( sum == i )
        {
            printf("\n %d is a Strong number " , i  );
        }
        else 
        {
            printf("\n %d is not a Srong number " , i );
        }
    }    
    return 0;
}*/
/*Write a program to print Fibonacci series up to n terms . 
// eq - 1 , 1 ,  2  , 3 , 5 , 8 , 13 , 21 , 34 , 55 . 
#include<stdio.h>
int main()
{
    int a = 0 , b = 0 , c = 1 ,i ;
    for ( i = 1 ; i <= 10 ; i ++ )
    {
        printf("%d\n", c );
        a = b ; 
        b = c ;
        c = a + b ; 
    }
    return 0;
}*/
//-------------------------------------------ARRAY-------------------------------------------------------//
/* Write a program to declare intialize, input and print array elemants .
#include<stdio.h>
int main()
{
    int a[5] , i ;
    for (i = 0 ; i < 5 ; i ++)
    {
        scanf("%d" , &a[i]);
    }
    for ( i = 0 ; i < 5 ; i ++)
    {
        printf("\nElements in array ire : %d " , a[i]);
    }
    return 0 ;
}*/
/*Write a program to print all negative element in an array .
#include<stdio.h>
int main()
{
    int a[10] , i ; 
    for (i = 0 ; i < 10 ; i ++ )
    {
        printf("Enter the array element is :- \n ");
        scanf("%d" , &a[i]);
    }
    for ( i = 0 ; i < 10 ; i ++ )
    {
        if ( a[i] < 0 )
        printf("%d is a negative element" , a[i]);
    }
    return 0 ;
}*/
/* Write a program to find sum of all array elements . 
#include<stdio.h>
int main()
{
    int a[5] , sum = 0 , i ;
    for (i = 0 ; i < 5 ; i ++ )
    {
        printf("Enter the 5 array element are :- \n ");
        scanf("%d" , &a[i]);
    }
    for ( i = 0 ; i < 5 ; i ++ )
    {
        sum = sum + a[i] ;
        printf("sum of all array element are : %d " , sum );
    }
    return 0 ;
}*/ 
/* Write a program to find maximum amd minimum element in an arrray . 
#include<stdio.h>
int main()
{
    int a[5] , max = 0 , min = 0 , i ; 
    for ( i = 0 ; i < 5 ; i ++ )
    {
        printf("Enter the 5 element are :- \n ");
        scanf("%d" ,&a[i]);
    }
        for ( i = 0 ; i < 5 ; i ++ )
        {
            if ( a[i] > max )
            {
                max = a[i];
            }
            else 
            {
                min = a[i];
            }
        }
        printf("Maximum of the array element is :%d " , max);
        printf("Mininum of the array element is : %d " , min );
        return 0 ;
}
// 2nd Methood 
#include<stdio.h>
int main()
{
    int a[5] , max , min , i ; 
    for ( i = 0 ; i < 5 ; i ++ )
    {
        printf("Enter the 5 element are :- \n ");
        scanf("%d" , &a[i]);
    }
    max = a[0];
    min = a[0];
    for (i = 1 ; i < 5 ; i ++ )
    {
        if ( max < a[i])
        {
            max = a[i];
        }
        else 
        {
            min = a[i];
        }
    }
    printf("Maximum of the array element is : %d " , max );
    printf("Mininum of the array element is : %d " , min );
    return 0 ;
}*/
/*Write a program to find second maximum element in an array . 

#include<stdio.h>
int main()
{
    int a[5] , max , min , i , second_maximum , second_minimum ; 
    for ( i = 0 ; i < 5 ; i ++ )
    {
        printf("Enter the 5 element are :- \n ");
        scanf("%d" , &a[i]);
    }
    max = a[0];
    min = a[0];
    for (i = 1 ; i < 5 ; i ++ )
    {
        if ( max < a[i])
        {
            max = a[i];
        }
        if ( min > a[i] )
        {
            min = a[i];
        }        
    }
    printf("Maximum of the array element is : %d " , max );
    printf("Mininum of the array element is : %d " , min );
    second_maximum = a[0];
    for (i = 0 ; i < 5 ; i ++ )
    {
        if ( a[i] > second_maximum && a[i] != max)
        {
            second_maximum = a[i];
        }
    }
    printf("Second Maximum of the array element is : %d ", second_maximum);
    return 0;
}*/
/* Write a program count even and odd element in array . 
#include<stdio.h>
int main()
{
    int a[10] , i , even = 0 , odd = 0 ;
    for ( i = 0 ; i < 10 ; i ++ )
    {
        printf("Enter the number is :- \n ");
        scanf("%d" , &a[i]);
    }
    for ( i = 1 ; i < 10 ; i ++ )
    {
        if ( a[i] % 2 == 0 )
        {
            even++ ;
        }
        else 
        {
            odd ++ ;
        }
    }
    printf("total even number is :- %d " , even);
    printf("Total odd number is : %d" , odd );
    return 0;
}*/
/* Write a program to count total number of negative elements in an array . 
#include<stdio.h>
int main()
{
    int a[5] , i , sum = 0 ; 
    for ( i = 0 ; i < 5 ; i ++ )
    {
        printf("Enter the number is : - \n ");
        scanf("%d" , &a[i]);
    }
    for ( i = 0 ; i < 5 ; i ++ )
    {
        if ( a[i] < 0 )
        sum++ ;
    }
    printf("Total negative number is : %d " , a[i]);
    return 0;
} */ 
/* Write a program to copy all elements of one array to another . 
#include<stdio.h>
int main()
{
    int a[10] , b[10] , i ;
    for ( i = 0 ; i < 10 ; i ++ )
    {
        printf("Enter the number is :- \n ");
        scanf("%d" , &a[i]);
    }
    for ( i = 0 ; i < 10 ; i ++ )
    {
          b[i] = a[i] ;
    }
    printf("\n*********Array1 element************I* ");
    for( i = 0 ; i < 10 ; i ++ )
    {
        
        printf("\nArray1:-   Copy all element of one array to another is : %d\n " , a[i]);
    }
    printf("********Array2 element************ ");
    for ( i = 0 ; i < 10 ; i ++ )
    {
        printf("\n Array2 :-      Copy all element of one array to another is :%d\n " ,b[i]);
    }
    return 0;
}*/
/* Write a program to insert an element in an array .
#include<stdio.h>
int main()
{
    int arr[100] , num , n , i , position ;
    printf("Enter the number is :- \n ");
    scanf("%d" , &n );
    
    printf("Enter the position is :- \n ");
    scanf("%d" , &position );

    printf("Enter the insurted number is :- \n ");
    scanf("%d" , &num );

    for( i = 0 ; i < n ; i ++ )
    {
        printf("Enter the array element is :- \n ");
        scanf("%d" , &arr[i]);
    }

    for ( i = n ; i > position ; i -- )
    {
        arr[i] = arr[i-1];
    }
    arr[position] = num ;
    n++;
    for ( i = 0 ; i < n ; i++ )
    {
        printf("the array of the element is : %d\n " , arr[i]);
    }
    return 0;

}*/
/*Write a program to delete an element from an array specific position . 
#include<stdio.h>
int main()
{
    int arr[100] , i , num , n , position ;
    printf("Enter the number repeated the loop is :- \n ");
    scanf("%d" , &n );

    printf("Enter the position of the delete number is :- \n ");
    scanf("%d" , &position );

    printf("Enter the number is :- \n ");
    scanf("%d", &num );
    for ( i = 0 ; i < n ; i ++ )
    {
        printf("Enter the delete number of element is :- \n ");
        scanf("%d" , &arr[i] );
    } 
    for ( i = position ; i < n ; i ++ )
    {
        arr[i] = arr[ i + 1 ] ;
    }
    for ( i = 0 ; i < n - 1 ; i ++ )
    {
        printf("The deleted of the number is : %d  \n " , arr[i]);
    }
    return 0 ;
}*/
/*Write a program to enter the number then find the factorial of the number.
#include<stdio.h>
int main()
{
    int i , n , fact = 1 ; 
    printf("Enter the number is :- \n ");
    scanf("%d",&n);
    for ( i = 1 ; i <= n ; i ++ )
    {
        fact = fact * i ; 
    }
    printf("Factorial of the number is : %d " , fact);
    return 0 ;
}*/
/*Write a program to enter a number then find the factors of the number exclude the number itself . 
// eq 6 :- 1 , 2 , 3 =  6  
#include<stdio.h>
int main()
{
    int i , n , f  ; 
    printf("Enter any number :- \n ");
    scanf("%d", &n ); 
    for( i = 1 ; i < n ; i ++ )
    {
        f = n / i ; 
        printf("6 is a factor of %d\n " , f );
    }
    return 0;
}
               //2nd METHOD
#include<stdio.h>
int main()
{
    int i , n , f  ; 
    printf("Enter any number :- \n ");
    scanf("%d", &n ); 
    for( i = 1 ; i < n ; i ++ )
    {
        if ( n % i == 0 )
        printf("6 is a factor of %d\n " , i );
    }
    return 0;
}*/
/*Write a program to find the sum elements .
#include<stdio.h>
int main()
{
    int i , n , f  , sum = 0 ; 
    printf("Enter any number :- \n ");
    scanf("%d", &n ); 
    for( i = 1 ; i < n ; i ++ )
    {
        f = n / i ; 
        printf("6 is a factor of %d\n " , f );
    }
        sum = sum + i ; 
    printf("sum : %d " , sum );
    return 0;
}*/
/*Write a program to find the sum of array element . 
#include<stdio.h> 
int main()
{
    int arr[6] , i , sum = 0 , f , n ;

    for ( i = 0 ; i < 6 ; i ++ )
    {
        printf("Enter the number is :- \n ");
        scanf("%d" , &arr[i]);
    }
    for ( i = 1 ; i < 6 ; i ++ )
    {
        f = n / i ; 
        sum = sum + arr[i] ; 
    }
    printf("The sum of array element : \n ");
    printf("Sum : %d " , sum );
    return 0 ; 
}*/
/* Write a program to enter a number then find the sum of all the digit of the number . 
#include<stdio.h>
int main()
{
    int n , sum = 0 , r ; 
    printf("Enter the number :- \n ");
    scanf("%d" , &n );
    while ( n > 0 )
    {
        r = n % 10 ; 
        n = n / 10 ; 
        sum = sum  + r ; 
    }
    printf("%d" , sum );
    return 0;
}*/ 
/* Write a program to enter a number then find the teverse sum of all the digit of the number . 
#include<stdio.h>
int main()
{
    int n , sum = 0 , r ; 
    printf("Enter the number :- \n ");
    scanf("%d" , &n );
    while ( n > 0 )
    {
        r = n % 10 ; 
        n = n / 10 ; 
        sum = sum * 10 + r ; 
    }
    printf("%d" , sum );
    return 0;
}*/ 
/* Write a program to enter a number then check the number is pallindrome or not . 
#include<stdio.h>
int main()
{
	int n , r , p , s = 0 ; 
	printf("Enter the number is :- \n ");
	scanf("%d" , &n );
	p = n ; 
	while ( n > 0 )
	{
		r = n % 10 ; 
		n =  n / 10 ; 
		s = s * 10 + r;
	}
	if ( p == s )
	{
		printf("%d is a pallindrome number " , p );
	}
	else 
	{
		printf("%d is not a pallindrome number" , p );
	}
	return 0 ;
}*/ 
/* Write a program to enter a number the check the number is armstrong or not .
#include<stdio.h>
int main()
{
    int n , r , s = 0  , arm ; 
    printf("Enter the number :- \n ");
    scanf("%d" , & n );
    arm = n ; 
    while ( n > 0 )
    {
        r = n % 10 ; 
        n = n / 10 ; 
        s = s + r * r * r ; 
    }
    if ( arm == s )
    {
        printf(" %d is a armstrong number " , arm );
    }
    else 
    {
        printf("%d is not a armstrong number " , arm );
    }
    return 0;
}*/
/*Write a program to enter the number is mystrical number or not .
#include<stdio.h>
int main()
{
    int n , s = 0 , m , r ; 
    printf("Enter the number is :- \n ");
    scanf("%d" , &n );
    m = n ; 
    while ( n > 0 )
    {
        r = n % 10 ; 
        n = n / 10 ; 
        s = s + r ; 
    }
    printf("the sum of the number is : %d " , s );
    return 0;
}*/
/*Write a program to enter a number then check the number is nevin or not . 
#include<stdio.h>
int main()
{
    int n , r , s = 0 , ne ; 
    printf("Enter the number :- \n ");
    scanf("%d" , &n );
    ne = n ; 
    while ( n > 0 )
    {
        r = n % 10 ; 
        n = n / 10 ; 
        s = s + r ;
    }
    if ( ne % s == 0 )
    {
        printf("%d is a nevin number " , ne );
    }
    else 
    {
        printf("%d is not a nevin number" , ne );
    }
}*/
/*Write a program to enter a number then check the number is neon number or not . 
#include<stdio.h>
int main()
{
    int n , a , r , s = 0 ; 
    printf("Enter the number : - \n ");
    scanf("%d",&n);
    a = n * n ; 
    while ( a > 0 )
    {
        r = a % 10 ; 
        a = a / 10 ; 
        s = s + r ; 
    }
    if ( n == s )
    {
        printf("%d is a neon number " , n);
    }
    else 
    {
        printf("%d is not a neon number " , n ); 
    }
    return 0;
}*/
/*Write a program to count frequency of each element in an array. 
#include<stdio.h>
int main()
{
    int arr[100] , brr[100] , i , j , n , c = 0 ; 
    printf("Enter the number is :- \n ");
    scanf("%d" , &n ); 
    for ( i = 0 ; i < n ; i ++ )
    {
        printf("Enter the number of array element is :- \n ");
        scanf("%d" ,&arr[i]);
    }
    for ( i = 0 ; i < n ; i ++ )
    {
       c = 1 ; 
       if ( arr[i] != -1 )
       {
           for ( j = i + 1 ; j < n ; j++)
           {
               if ( arr[i] == arr[j])
               {
                   c++ ;
                   arr[j] = -1 ;
                }
           }
           brr[i] = c ; 
       }
    }
    for ( i = 0 ; i < n ; i ++ )
    {
        if ( arr[i] != -1 )
            printf("\nNumber of %d is %d\n " , arr[i] , brr[i]);
    }
    return 0;
}*/ 
/*Write a program count total duplicate element in array . 
#include<stdio.h>
int main()
{
    int arr[100] , i , j , n , count = 0 ;
    printf("Enter the number of arrray element ( controlling the loop )- : \n ");
    scanf("%d" , &n );
    printf("-----------------------------------------------------------------------------------------");
    for ( i = 0 ; i < n ; i ++ )
    {
        printf("\nElement of %d -" , i );
        scanf("%d" , &arr[i]);
    }
    printf("-------------------------------------------------------------------------------------------");
    for( i = 0 ; i < n ; i ++ )
    {
        for ( j = i + 1 ; j < n ; j ++ )
        {
            if ( arr[i] == arr[j])
            count++ ;
            break;
        }
    }
    printf("--------------------------------------------------------------------------------------------");
    printf("\n Total number of duplicate elements are : 5 ");
    return 0 ;
}*/
/* Write a program to delete all duplicate elements from an array . 
#include<stdio.h>
int main()
{
    int arr[20], i , j , k , n ; 
    printf("Enter the number is : - \n ");
    scanf("%d", &n);
    //Enter values in the array/
    for ( i = 0 ; i < n  ; i ++ )
    {
        printf("Array element of %d\n : " , i );
        scanf("%d" , &arr[i]);
    }
    
    //Array with duplicated values//
    printf("Array with duplicated values:\n");
    for ( i = 0 ; i < n  ; i ++ )
    {
        printf("%d\t" , arr[i]);
        
    }
    
    //Deleting duplicated values
    for ( i = 0 ; i < n ; i ++ )
    {
        for (j = i + 1 ; j < n ; j ++ )
        {
            if ( arr[i] == arr[j] )
            {
                for ( k = j ; k < n ; k ++ )
                {
                    arr[k] = arr[k+1];
                }
                n--;
                j--;
            }
        }
    }
    
    printf("Array without duplicated values. \n");
    for ( i = 0 ; i < n ; i ++ )
    {
        printf("%d\t" , arr[i]);
    }
    
    return 0;
}*/
/*Write a program to find reverse of an array . 
#include<stdio.h>
int main()
{
    int arr[100] , i , n ; 
    printf("Enter the number is :- \n ");
    scanf("%d" , &n );
    
    for ( i = 0 ; i < n ; i ++ )
    {
        printf("Number of %d Array Element : \t" , i );
        scanf("%d" , &arr[i]);
    }
    
    for ( i = n - 1 ; i >= 0 ; i -- )
    {
        printf("Reverse of array Element is :%d\t " , arr[i]);
    }
    return 0;
}*/
/*Write a program to put even and odd elements of array in two separate array . 
#include<stdio.h>
int main()
{
    int arr[100] , i , even , odd , n ; 
    printf("Enter the number is :- \n ");
    scanf("%d" , &n );
    printf("\n----------------------------------------------------------------------\n");

    for ( i = 0 ; i < n ; i ++ )
    {
        printf("Enter %d st number of Array element is : \n " , i );
        scanf("%d" , &arr[i]);
    }
    for ( i = 0 ; i < n ; i ++ )
    {
        if ( arr[i] % 2 == 0 )
        {
            printf("\nEven element in array is : ");
            printf("%d\t" , arr[i]);
        }
        else 
        {
            printf("odd element in array is : ");
            printf("%d\t", arr[i]);
        }
    }
    return 0 ; 
}*/
/*Write a program to search element in array . 
#include<stdio.h>
int main()
{
    int arr[10] , i , n , search , count = 0 ; 
    printf("Enter the number is : - \n ");
    scanf("%d" , &n );

    printf("\n----------------------------------------------------------------------------------------\n");
    printf("enter the number those number wants to check the number is : \n ");
    scanf("%d" , &search );

    for ( i = 0 ; i < n ; i ++ )
    {
        printf("Enter the array element of the number %d is : \n " , i );
        scanf("%d" , &arr[i]);
    }
    for ( i = 0 ; i < n ; i ++ )
    {
        if ( arr[i] == search )
        {
            count ++ ;
            break ; 
        }
    }
        if ( count == 1 )
        {
            printf("\n%d is found at position %d" , search , i + 1 );
        }
        else 
        {
            printf("\n %d is not found in the array %d" , search , i + 1 );
        }
    return 0 ;
}*\
\\***********************************2nd DIMENSIONAL ARRAY ELEMENT*******************************************************\
\*int arr[3][3] ;
initialzation 
int arr[3][3] = {1,2,3,4,5,6,7,8,9};
int a[3][3] , i , j ; 
for ( i = 0 ; i < 3 ; i ++ )
{
    for ( j = 0 ; j < 3 ; j ++ )
    {
        printf("Enter the number is : \n ");
        scanf("%d", &arr[i][j]);
    }
    for ( i = 0 ; i < 3 ; i ++ )
    {
        for ( j = 0 ; j < 3 ; j ++ )
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/
/*Write a program to enter the number in a 2-D array then display the array in matrix.
#include<stdio.h>
int main()
{
    int arr[3][3] , i , j ; 
    for ( i = 0 ; i < 3 ; i ++ )
    {
        for ( j = 0 ; j < 3 ; j ++ )
        {
            printf("Enter the 2nd array element of number %d , %d : " , i , j );
            scanf("%d", &arr[i][j]);
        }
    }
        for ( i = 0 ; i < 3 ; i ++ )
        {
            for ( j = 0 ; j < 3 ; j ++ )
            {
                printf("%d\t", arr[i][j]);
            }
            printf("\n");
        } 
        return 0;
}*/
/*Write a program to enter the number in sum of the matrix number . 
#include<stdio.h>
int main()
{
    int arr[3][3] , i , j , s ; 
    for ( i = 0 ; i < 3 ; i ++ )
    {
        for ( j = 0 ; j < 3 ; j ++ )
        {
            printf("Enter the 2nd array element of number %d , %d : ", i , j );
            scanf("%d",&arr[i][j]);
        }
    }
        for ( i = 0 ; i < 3 ; i ++ )
        {
            for ( j = 0 ; j < 3 ; j ++ )
            {
                printf(" %d\t" , arr[i][j]);
                s = s + arr[i][j];
            }
            printf("\n");
        }
        printf("the sum of the number is : %d ", s );
        return 0;
}*/
/*Write a program to find the sum of the array as row wise . 
#include<stdio.h>
int main()
{
    int arr[3][3] , i , j , s = 0 ;
    for ( i = 0 ; i < 3 ; i ++ )
    {
        for ( j = 0 ; j < 3 ; j ++ )
        {
            printf("Enter the 2nd array element %d is %d : " , i , j );
            scanf("%d", &arr[i][j]);
        }
    }
    for ( i = 0 ; i < 3 ; i ++ )
    {
        for ( j = 0 ; j < 3 ; j ++ )
        {
            printf("%d\t" , arr[i][j]);
        }
        printf("\n");
    }
    for ( i = 0 ; i < 3 ; i ++ )
    {
        for ( j = 0 ; j < 3 ; j ++ )
        {
            if ( i = j )
            {
                s = s + arr[i][j] ;
            }
            printf("\n");
        }
         printf("the sum of the left diagonal number is : %d\n " , s );
    }
    return 0;
}*/
/*Write a program to find the sum of the diagonal . 
#include<stdio.h>
int main()
{
    int arr[3][3] , i , j , s = 0 ; 
    for ( i = 0 ; i < 3 ; i ++ )
    {
        for ( j = 0 ; j < 3 ; j ++ )
        {
            printf("Enter the 2nd- D array of the element is %d is %d " , i , j );
            scanf("%d" , &arr[i][j]);
        }
    }
    for ( i = 0 ; i < 3 ; i ++ )
    {
        for ( j = 0 ; j < 3 ; j ++ )
        {
            printf("%d\t" , arr[i][j]);
        }
        printf("\n");
    }
    for ( i = 0 ; i < 3 ; i ++ )
    {
        for ( j = 0 ; j < 3 ; j ++ )
        {
            if ( i + j == 2 )
            {
                s = s + arr[i][j];
            }
        }
    }
    printf("the sum of the right diagonal is : %d \n " , s );
    return 0 ;
} */
/*Write a program to find the sum of the array as row wise . 
#include<stdio.h>
int main()
{
    int arr[3][3] , i , j , s = 0 ; 
    for ( i = 0 ; i < 3 ; i ++ )
    {
        for ( j = 0 ; j < 3 ; j ++ )
        {
            printf("Enter the number is : \n ");
            scanf("%d" , &arr[i][j]);
        }
    }
    for ( i = 0 ; i < 3 ; i ++ )
    {
        for ( j = 0 ; j < 3 ; j ++ )
        {
            printf("%d\t" , arr[i][j]);
        }
        printf("\n");
    }
    for ( i = 0 ; i < 3 ; i ++ )
    {
        for ( j = 0 ; j < 3 ; j ++ )
        {
            s = s + arr[i][j];
        }
        printf("sum : %d\n " , s );
        s = 0 ; 
    }
    printf("\n");
}*/
/*Write a program to find the sum of matrix number .
#include<stdio.h>
int main()
{
    int a[3][3] , b[3][3] , c[3][3] , i , j ; 
    for ( i = 0 ; i < 3 ; i ++ )
    {
        for ( j = 0 ; j < 3 ; j ++ )
        {
             printf("Enter the 2nd- D array element of the number is %d,%d : " , i , j );
             scanf("%d" , &a[i][j]);
        }
    }
    for ( i = 0 ; i < 3 ; i ++ )
    {
        for ( j = 0 ; j < 3 ; j ++ )
        {
            printf("Enter the 2nd array element of the number is %d,%d : " , i , j );
            scanf("%d" , &b[i][j]);
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
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/
/*Write a program to enter the number in aray then find the transpose . 
#include<stdio.h>
int main()
{
    int a[3][3] , b[3][3] , i , j ; 
    for ( i = 0 ; i < 3 ; i ++ )
    {
        for ( j = 0 ; j < 3 ; j ++ )
        {
            printf("Enter the array element of the 2nd array element is : %d , %d " , i , j );
            scanf("%d", &a[i][j]);
        }
    }
    for ( i = 0 ; i < 3 ; i ++ )
    {
        for ( j = 0 ; j < 3 ; j ++ )
        {
            b[j][i] =a[i][j] ;
        }
    }
    for ( i = 0 ; i < 3 ; i ++ )
    {
        for( j = 0 ; j < 3 ; j ++ )
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    return 0 ;
}*/
/*Write a program to enter the number in a 2 - D Array then find the matrix multiplication .
#include<stdio.h>
int main()
{
    int a[3][3] , b[3][3] , i , j , k , c[3][3];
    for ( i = 0 ; i < 3 ; i ++ )
    {
        for ( j = 0 ; j < 3 ; j ++ )
        {
            printf("Enter the 2nd Dimensional array of the element is %d,%d:  " , i , j );
            scanf("%d" , &a[i][j]);
        }
    }
    for ( i = 0 ; i < 3 ; i ++ )
    {
        for ( j = 0 ; j < 3 ; j ++ )
        {
            printf("Enter the 2nd Dimensional array of the 2nd number array element is %d,%d " , i , j );
            scanf("%d",&b[i][j]);
        }
    }
    for ( i = 0 ; i < 3 ; i ++ )
    {
        for ( j = 0 ; j < 3 ; j ++ )
        {
            c[i][j] = 0 ;
        }
    }
    for ( i = 0 ; i < 3 ; i ++ )
    {
        for ( j = 0 ; j < 3 ; j ++ )
        {
            c[i][j] = 0  ;
            for ( k = 0 ; k < 3 ; k ++ )
            {
                c[i][j] = c[i][j] + a[i][k] * b[j][j];
            }
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
//----------------------------------Number Pattern---------------------------------------//
/*
                         1 
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
    int i , j , k , p ; 
    for ( i = 1 ; i <= 5 ; i ++ )
    {
        for ( j = i ; j <= 4 ; j ++ )
        {
            printf("\n");
        }
        for ( k = 1 ; k <= i ; k ++ )
        {
            printf("%d" , k );
        }
        for ( p = i - 1 ; p >= 1 ; p -- )
        {
            printf("%d" , p );
        }
        printf("\n");
    }
    for ( i = 4 ; i >= 1 ; i -- )
    {
        for ( j = i ; j <= 4 ; j ++ )
        {
            printf(" " , j );
        }
        for ( k = 1 ; k <= 1 ; k ++ )
        {
            printf("%d" , k );
        }
        for ( p  = i - 1 ; p >= 1 ; p -- )
        {
            printf("%d" , p );
        }
        printf("\n");
    }
    return 0;
}*/
//--------------------------------JUMP STATEMENTS OF BREAK STATEMENTS--------------------------------------
// BREAK STATEMENTS - 
/*Write a program to enter the number is using loop for prime number or not . 
#include<stdio.h>
int main()
{
    int i = 2 , n ; 
    printf("\n Enter the numebr : \n ");
    scanf("%d" , &n );
    while ( i < n )
    {
        if ( i < n )
        {
            printf("Number is not prime number ");
            break ;
        }
        else 
        {
            i ++ ;
        }
        if ( i == n )
        {
            printf("Number is prime number " , n );
        }
    }
    return 0;
}*/
//------------------------------------------CONTINUE STATEMENTS------------------------------------------ 
//EXAMPLE - 
/*#include<stdio.h> 
int main ()
{
    int i ; 
    for ( i = 0 ; i <= 10 ; i ++ )
    {
        if ( i <= 5 )
        continue ;
        printf("\n The number is : %d " , i );
    }
    return 0;
}*/
//-------------------------------------------GOTO STATEMENT--------------------------------------------
// Example -
// Write a program to print the table of number . 
/*
#include<stdio.h>
int main()
{
    int i = 1  , n , t ;
    printf("Enter the number : \n ");
    scanf("%d" , &n );
    table : 
           t = n * i ;
           printf("%d\t" , t );
           i ++ ; 
           if ( i <= 10 )
           goto table ; 
           return 0;
}*/
// 2nd Example 
/* Write a program to accept a number then display the square of the number but if the number is negative
then it will ask to enter the number again .
#include<stdio.h>
int main()
{
    int sqr , n ; 
            printf("Enter the number : \n ");
            scanf("%d" , &n );
    square : 
            if ( n < 0 )
            goto square ;
            else 
            {
                sqr = n * n ; 
            }
            printf("square is : %d " , sqr ); 
            return 0;
}*/
//----------------------------------------FUNCTION--------------------------------------------------------
/*Write a C program to find cube of any number using function .
#include<stdio.h>
void cube();
int main()
{
    cube();
    return 0;
}
void cube()
{
    int n , c ; 
    printf("Enter the number is :- \n ");
    scanf("%d" , &n );
    c = n * n * n ; 
    printf("%d" , c );
}
// 2nd Methood
#include<stdio.h>
void cube(int );
int main()
{
    int n ; 
    printf("Enter the number is :--->");
    scanf("%d" , &n );
    cube(n);
    return 0;
}
void cube( int x )
{
    int c ; 
    c = x * x * x ; 
    printf("Cube of the number is :---> %d " , c );
}
// 3rd Methood
#include<stdio.h>
int cube(int);
int main()
{
    int n , c ; 
    printf("Enter the number is :----> ");
    scanf("%d", &n );
    c = cube(n);
    printf("Cube of the number is : %d " , c );
    return 0;
}
    cube( int x )
{
    int y ; 
    y = x * x * x ; 
    return y; 
}*/
/* Write a program to find diameter , circumference and area of circle using function .
#include<stdio.h>
void circle();
int main()
{
    circle();
    return 0;
}
void circle()
{
    int c , d , a , r ;
    printf("Enter the radius is :- " );
    scanf("%d" , &r );
    a = 3.14 * r * r ; 
    c = 2 * 3.14 * r ; 
    d = 2 * r ; 
    printf("Area of circle is : %d \n ", a );
    printf("Circumferece of circle is : %d \n " , c );
    printf("Diameter of circle is : %d \n " , d );
}
//2nd Methood 
#include<stdio.h>
void circle(int);
int main()
{
    int r ; 
    printf("Enter the number is :- ");
    scanf("%d" , &r );
    circle(r);
    return 0 ;
}
void circle(int x )
{
    int a , c , d ; 
    a = 3.14 * x * x ; 
    c = 2 * 3.14 * x ; 
    d = 2 * x ; 
    printf("Area of circle is : %d \n ", a );
    printf("Circumferece of circle is : %d \n " , c );
    printf("Diameter of circle is : %d \n " , d );
}
//3rd Methood
#include<stdio.h>
int circle(int);
int diameter(int);
int circumference(int);
int main()
{
    int c , d , a , r ; 
    printf("Enter the number is :- ");
    scanf("%d",&r);
    a = circle(r);
    d = diameter(r);
    c = circumference(r);
    printf("Area of circle is :-%d \n " , a );
    printf("Circumference of circle is :- %d\n" , c );
    printf("Diameter of circle is :- %d\n ", d );
    return 0; 
}
int circle( int x )
{
    int y ;
    y = 3.14 * x * x ; 
    return y ;
}
int diameter(int x )
{
    int z ; 
    z = 2 * x ; 
    return z ;
}
int circumference(int x )
{
    int n ; 
    n = 2 * 3.14 ; 
    return n ; 
}*/
/*Write a program to find maximum and minimum between two numbers using functions . 
#include<stdio.h>
void maximum();
void minimum();
int main()
{
    maximum();
    minimum();
    return 0;
}
void maximum()
{
    int max , min , a , b ;
    printf("Enter the number is :- ");
    scanf("%d%d",&a,&b );
    max = a ; 
    min = b ;
    if ( a > b )
    {
        printf("\n %d is a maximum number" , a );
    }
    if ( b > a )
    {
        printf("\n %d is a maximum number" , b );
    }
}
void minimum()
{
    int a , b ;
    if ( a < b )
    {
        printf("\n%d is a minimum number " , a );
    }
    else 
    {
        printf("\n %d is a minimum number " , b );
    }
}
// 2nd Methood
#include<stdio.h>
void maximum(int,int);
void minimum(int , int );
int main()
{
    int a , b ; 
    printf("Enter the number of a and b is :- ");
    scanf("%d%d",&a,&b);
    maximum(a,b);
    minimum(a,b);
    return 0;
}
void maximum(int x , int y )
{
    if ( x > y )
    {
        printf("\n%d is a maximum number" , x );
    }
    else 
    {
        printf("\n%d is a maximum number , y );
    }
}
void minimum(int x , int y )
{
    if ( x < y )
    {
        printf("\n%d is a maximum number " , x );
    }
    else 
    {
        printf("\n%d is a minimum number " , y );
    }
}
//3rd Methood 
#include<stdio.h>
int maximum(int a , int b );
int minimum( int a , int b );
int main()
{ 
    int a , b ; 
    printf("Enter the number is :- ");
    scanf("%d%d" , &a , &b );
    maximum( a , b );
    minimum( a , b );
    if ( a > b )
    {
        printf("\n%d is a maximum number" , a );
    }
    else 
    {
        printf("\n%d is a maximum number" , b );
    }
    if ( a < b )
    {
        printf("\n%d is a minimum number" , a );
    }
    else 
    {
        printf("\n%d is a minimum number" , b );
    }
}
int maximum( int x , int y )
{
    int z ;
    if ( x > y )
    {
        return x ;
    }
    else 
    {
        return y ;
    }
}
int minimum( int x , int y )
{
    int z ;
    if ( x < y )
    {
        return x ;
    }
    else 
    {
        return y ;
    }
}*/
/*Write a program to check wheter a number is even or odd using function.
#include<stdio.h>
void even();
int main()
{
    even();
    return 0;
}
void even()
{
    int even , odd , n , i ;
    printf("Enter any number is :- ");
    scanf("%d" , &n );
    {
        if ( n % 2 == 0 )
        {
            printf("%d is a even number " , n  );
        }
        else 
        {
            printf("%d is a odd number " , n );
        }
    }
}
//2nd Method 
#include<stdio.h>
void even(int);
int main()
{
    int n ; 
    printf("Enter the number is :- ");
    scanf("%d" , &n );
    even(n);
}
void even( int x )
{
    if ( x % 2 == 0 )
    {
        printf("%d is a even number" , x );
    }
    else 
    {
        printf("%d is an odd number" , x );
    }
}
// 3rd Method 
#include<stdio.h>
int even(int);
int main()
{
    int n , c ; 
    printf("Enter the number is :- ");
    scanf("%d" , &n );
    even(n);
    if ( n % 2 == 0 )
    {
        printf("%d is an even number " , n );
    }
    else
    {
        printf("%d is an odd number" , n );
    }
}
int even( int x )
{
    if ( x % 2 == 0 )
    {
        return x ;
    }
    else 
    {
        return x ;
    }
}*/
/* Write a program to check whether a number is prime , Armstrong or perfect number using functions .
#include<stdio.h>
void prime();
void Armstrong();
void Perfect();
int main()
{
    prime();
    Armstrong();
    Perfect();
    return 0;
}
void prime()
{
    int n , i , sum = 0 ; 
    printf("Enter the number is :- \n ");
    scanf("%d" , &n );
    for ( i = 1 ; i <= n ; i ++ )
    {
        if ( n % i == 0 )
        {
            sum ++ ;
        }
    }
    if ( sum == 2 )
    {
        printf("%d is a prime number " , n );
    }
    else 
    {
        printf("%d is not a prime number " , n );
    }
}
void Armstrong()
{
    int n , r , s , arm ;
    printf("\nEnter the number is :- ");
    scanf("%d" , &n );
    arm = n ; 
    while ( n > 0 )
    {
        r = n % 10 ;
        n = n / 10 ; 
        s = s + r * r * r ; 
    }
    if ( arm == s )
    {
        printf("\n%d is an armstrong number",arm );
    }
    else 
    {
        printf("\n%d is not an armstrong number",arm);
    }
}
void Perfect()
{
     int n , sum = 0 , i ; 
    printf("\nEnter the number is :- \n ");
    scanf("%d" , &n );
    for ( i = 1 ; i < n ; i ++ )
    {
        if ( n % i == 0 )
        {
            sum = sum + i ;
        }
    }
    if ( sum == n  )
    {
        printf("%d is a perfect number " , i );
    }
    else 
    {
        printf("%d is not a perfect number " , i );
    }
}
// 3rd Method 
#include<stdio.h>
int Prime(int);
int Armstrong(int);
int Perfect(int);
int main()
{
    int n ; 
    printf("Enter the number is :- \n ");
    scanf("%d" , &n );
    //Prime(n);
    //Armstrong(n);
    //Perfect(n);    
    if (Prime(n))
    {
        printf("%d is not a prime number " , n );
    }
    else 
    {
        printf("%d is a prime number " , n );
    }
    if (Armstrong(n))
    {
        printf("%d  is Armstrong number " , n );
    }
    else 
    {
        printf("%d is not an Armstrong number" , n );
    }
    if(Perfect(n))
    {
        printf("%d is a perfect number" , n );
    }
    else 
    {
        printf("%d is not a perfect number" , n );
    }
    return 0;
}
int Prime(int x )
{
    int i , s = 0 ;
    for ( i = 1 ; i <= x ; i ++ )
    {
        if ( x % i == 0 )
        {
            return 0;
        }
    }
    return 1 ; 
}
int Armstrong( int x )
{
    int r , s , num  ; 
    s = 0 ; 
    num = x ; 
    while ( x > 0 )
    {
        r = x % 10 ; 
        x = x / 10 ; 
        s = s + r * r * r ; 
    }
    if ( s == num )
    {
        return 1 ;
    }
    else 
    {
        return 0; 
    }
}
int Perfect(int x )
{
    int i , s , num ;
    s = 0 ; 
    num = x ; 
    for ( i = 1 ; i < x ; i ++ )
    {
        if ( x % i == 0 )
        {
            s = s + i ; 
        }
    }
    if ( s == num )
    {
        return 1 ;
    }
    else 
    {
        return 0;
    }
}*/
//---------------------------------------------Recursion-----------------------------------------------------------
/*Write a program to find power any number using function . 
#include<stdio.h>
#include<math.h>
int power(int , int );
int main()
{
    int base , power , expo ; 
    printf("Enter the number is : \n ");
    scanf("%d",&base);
    printf("Enter the exponent is : \n ");
    scanf("%d",&expo);
    power = pow(base ,expo );
    printf("%d ^ %d = %d", base , expo , power );
    return 0;
}
int power(int base , int expo)
{
    if ( expo == 1 )
    {
        return 1 ;
    }
    else 
    {
        return base * pow(base , expo - 1 ); 
    }
}*/
/*Write a program to print all natural number from 1 to n using recursion . 
#include<stdio.h>
void natural(int , int );
int main()
{
    int lower , upper , n ; 
    printf("Enter the number is :: ");
    scanf("%d%d" , &lower,&upper);
    natural(lower,upper);
    printf("Natural number is : %d to %d " , lower , upper );
    return 0;
}
void natural( int lower , int upper )
{
    if ( lower <= upper )
    printf("%d\n" , lower); 
    return natural(lower + 1 , upper );
}*/
/*Write a program to print even number/odd number from 1 to n using recursion . 
#include<stdio.h>
void even(int , int );
int main()
{
    int lower , upper , n ; 
    printf("Enter the lower number and upper number is :: ");
    scanf("%d%d" , &lower,&upper);
    even(lower,upper);
    printf("Natural number is : %d to %d " , lower , upper );
    return 0;
}
void even( int lower , int upper )
{
    if ( lower <= upper )
    printf("%d\n" , lower); 
    return even(lower + 2 , upper );
}*/
/*Write a program to enter a number find the sum of all natural number upto that number . 
#include<stdio.h>
int sum(int);
int main()
{
    int n , s = 1 ; 
    printf("Enter the number :-\n ");
    scanf("%d" , &n );
    s = sum(n);
    printf("Sum : %d " , s );
    return 0;
}
int sum( int n )
{
    if ( n == 1 )
    {
        return 1;
    }
    else 
    {
        return n + sum(n-1);
    }
}*/
 /*// PASSING ARRAY IN FUNCTION 
#include<stdio.h>
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
//----------------------------------------------STORAGE CLASS---------------------------------------------------------
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
}*/
/*//Example of Global variable with static . 
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
//------------------------------------------------STRING--------------------------------------------------------------
/*Write a C program to find length of a string . 
#include<stdio.h>
#include<string.h>
int main()
{
    char str [38] ; 
    int count = 0 , i ; 
    printf("Enter the string is : ");
    gets(str);
    for ( i = 0 ; str[i]!= '\0' ; i ++ )
    {
        count ++ ; 
    }
    printf("Length is :- %d " , count );
    return 0 ; 
}*/
/* Write a C programming to copy one string to another string . 
#include<stdio.h>
int main()
{
    char str[21] , str1[21] ; 
    int i ; 
    printf("Enter the string is : ");\
    gets(str);
    for ( i = 0 ; str[i]!= '\0' ; i ++ )
    {
        str1[i] = str[i];
    }
    str1[i] = '\0' ;
    printf("%s" , str1);
    return 0;
}
//2nd Method 
#include<stdio.h>
#include<string.h>
int main()
{
    char str[21] , str1[21] ;
    printf("Enter the string is :- ");
    gets(str);
    strcpy(str1 , str );
    printf("First String is : %s " , str);
    printf("Second String is : %s " , str1 );
    return 0;
}*/
/*Write a program to concatenate two strings . 
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[21] , str2[21] , str3[21] ;
    int i, j = 0 ; 
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
/*Write a program to convert lower case string to upper case 
#include<stdio.h>
#include<string.h>
int main()
{
    char str[21] ;
    printf("Enter the string is :- ");
    gets(str); 
    printf("Upper case : %s " , strupr(str));
    return 0 ;
}
//2nd Method 
#include<stdio.h>
int main()
{
    char str[21] ;
    int i ;
    printf("Enter the string is :  "); 
    gets(str);
    for( i =0 ; str[i] != '\0' ; i ++ )
    {
        if ( str [i] >= 'a' && str [i] <= 'z')
        {
            str[i] = str[i] - 32; 
        }
    }
    printf("Upper case : %s " , str );
    return 0;
}*/
/*Write a program to convert upper case string to lower case .
#include<stdio.h>
#include<string.h>
int main()
{
    char str[21] ;
    printf("Enter the string is :- ");
    gets(str); 
    printf("Lower Case : %s " , strlwr(str));
    return 0 ;
}
//2nd Method 
#include<stdio.h>
int main()
{
    char str[21] ;
    int i ;
    printf("Enter the string is :  "); 
    gets(str);
    for( i =0 ; str[i] != '\0' ; i ++ )
    {
        if ( str [i] >= 'A' && str [i] <= 'Z')
        {
            str[i] = str[i] + 32; 
        }
    }
    printf("Upper Case : %s " , str );
    return 0;
}*/
/*Write a program to count number of alphabets , digits and special characters in string . 
#include<stdio.h>
#include<string.h>
int main()
{
    char str[21] ;
    int i , alphabets , digits , others  ;
    alphabets = digits = others = i = 0 ; 
    printf("Enter the String is :- ");
    gets(str);
    while ( str[i] >= '\0')
    {
        if ((str[i] >= 'a' && str[i] <= 'z' ) || ( str [i] >= 'A' && str [i] <= 'Z'))
        {
            alphabets ++ ;
        }
        else if ( str[i] >= '0' && str[i] <= '9')
        {
            digits ++ ;
        }
        else 
        {
            others ++ ;
        }
        i ++ ; 
    }
    printf("Alphabets = %d\n" , alphabets );
    printf("Digits = %d\n " , digits );
    printf("Special character = %d " , others );
    return 0;
}
// 2nd Method 
#include<stdio.h>
#include<string.h>
int main()
{
    char str[21] ;
    int i , alphabets , digits , others  ;
    alphabets = digits = others = i = 0 ; 
    printf("Enter the String is :- ");
    gets(str);
    for ( i = 0 ; str[i] != '\0' ; i ++ )
    {
        if ((str[i] >= 'a' && str[i] <= 'z' ) || ( str [i] >= 'A' && str [i] <= 'Z'))
        {
            alphabets ++ ;
        }
        else if ( str[i] >= '0' && str[i] <= '9')
        {
            digits ++ ;
        }
        else 
        {
            others ++ ;
        }
    }
    printf("Alphabets = %d\n" , alphabets );
    printf("Digits = %d\n " , digits );
    printf("Special character = %d " , others );
    return 0;
}*/
/*Write a program to count total number of vowels and consonants in a string . 
#include<stdio.h>
#include<string.h>
int main()
{
    char str[21] ;
    int i , len , vowel , consonant ; 
    printf("Enter any string is : - "); 
    gets(str);
    vowel = consonant = 0 ; 
    len = strlen(str);
    for ( i = 0 ; i < len ; i ++ )
    {
        if ((str[i] >='a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            if ((str [i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')||
            (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ))
            vowel ++ ; 
        else 
            consonant ++ ;
        }
    }
    printf("Total number of vowel = %d \n" , vowel );
    printf("Total number of consonant = %d\n " , consonant);
    return 0; 
}
//2nd Method 
#include<stdio.h>
#include<string.h>
int main()
{
    char str[21] ;
    int i , len , vowel , consonant ; 
    printf("Enter any string is : - "); 
    gets(str);
    vowel = consonant = 0 ; 
    len = strlen(str);
    for ( i = 0 ; i < len ; i ++ )
    {
        if ((str[i] >='a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {

            switch (str[i])
            {
                case 'a' : 
                case 'e' : 
                case 'i' :
                case 'o' : 
                case 'u' : 
                case 'A' : 
                case 'E' : 
                case 'I' :
                case 'O' : 
                case 'U' : 
                          vowel ++;
                          break; 
                default : 
                          consonant ++ ;
            }
        }
    }
    printf("Total number of vowel = %d \n" , vowel );
    printf("Total number of consonant = %d\n " , consonant);
    return 0; 
}*/
/* Write a program to count total number of words in a string . 
#include<stdio.h>
int main()
{
    char str[21] ; 
    int i , words = 0 ;
    printf("Enter the String is :- ");
    gets(str);
    i= 0 ; 
    words = 1;
    while ( str[i] != '\0')
    {
        if ( str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
        {
            words ++ ;
        }
        i ++ ; 
    }
    printf("Total number of words = %d " , words );
    return 0;
}
// 2nd Method 
#include<stdio.h>
int main()
{
    char str[21] ; 
    int i , words = 0 ;
    printf("Enter the String is :- ");
    gets(str);
    for ( i = 0 ; str[i] != '\0' ; i ++ )
    {
        if ( str[i] == ' ' || str[i] != '\n' || str[i] == '\t')
        {
            words ++ ;
        }
    }
    printf("Total number of words = %d " , words );
    return 0;
}*/
/*Write a program to find reverse of a string .
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
} 
// 2nd Method 
#include<stdio.h>
#include<string.h>
int main()
{
    char str[21] , str1[21]; 
    int i ; 
    printf("Enter the String is : - ");
    gets(str);
    printf("Reverse String is : %s " , strrev(str) );
    return 0;
}*/
/*Write a program to accept a string the check the string is palindrome or not . 
#include<stdio.h>
#include<string.h>
int main ()
{
    char str[21] , str1[21] ;
    int i , j = 0 ;
    printf("Enter the String is :-  ");
    gets(str);
    for ( i = 0 ; str[i] != '\0' ; i ++ );       // i = 6 , str[6] != '/0' condition false ;
    i -- ; // i = 5 ;  
    while (i >= 0 )
    {
        str1[j] = str[i]; // i = 5 , str1[0] = str[5];
        i -- ; 
        j ++ ; 
    }
    str1[j] = '\0' ;
    printf("Oiginal String is : %s\n" , str );
    printf("Reverse String is : %s\n " , str1);
    if ( strcmp(str , str1) == 0 )
    {
        printf("%s String is a palindrome " , str );
    }
    else 
    {
        printf("%s String is not a palindrome " , str );
    }
    return 0;
}*/
//---------------------------------------------POINTER---------------------------------------------------------
// Pointer 
/*// Write a program to add two number using pointers. 
#include<stdio.h>
int sum( int * , int * );
int main()
{
    int a , b , c ;
    printf("Enter the number is : ");
    scanf("%d%d" , &a , &b );
    c = sum( &a , &b );
    printf("Sum of the number is : %d" , c );
    return 0;
}
int sum( int *x , int *y )
{
    int z ;
    z = (*x + *y) ; 
    return z;
}
// 2nd Method 
#include<stdio.h>
void sum( int , int  );
int main()
{
    int a , b ; 
    printf("Enter the two number is: ");
    scanf("%d%d" , &a , &b );
    sum( a , b );
    return 0;
}
void sum( int x , int y )
{
    int z ; 
    z = x + y ; 
    printf("The sum of the two number is : %d " , z );
}*/
/* Write a program to swap two number using pointers . 
#include<stdio.h>
void swap( int a , int b );
int main()
{
    int a , b ; 
    printf("Enter the two number is :- "); 
    scanf("%d%d" , &a , &b );
    printf("Value of a and b before swapping is : %d %d\n " , a , b );
    swap( a , b );
    printf("\n Value of a and b after swapping\n ");
    return 0;
}
void swap(int x , int y )
{
    int z ; 
    z = x ; 
    x = y ; 
    y = z ; 
    printf("\nValue of x and y after swapping %d %d\n  " , x , y );
}
//2nd method 
#include<stdio.h>
void swap( int * , int * );
int main()
{
    int a , b ;
    printf("Enter the number is : ");
    scanf("%d%d" , &a , &b );
    printf("Value of a and b before swapping is : %d %d " , a , b );
    swap( &a , &b );
    printf("\n Value of x and y after swapping %d %d \n " , a , b );
    return 0;
}
void swap( int *x , int *y )
{
    int z ; 
    z = *x ; 
    *x = *y ; 
    *y = z ; 
}*/
/*Write a program to intput and print array elements using pointers . 
#include<stdio.h>
#define MAX_SIZE 100 
int main()
{
    int n , i , arr[MAX_SIZE] , *ptr ; 
    printf("Enter the number is :- ");
    scanf("%d" , &n );
    ptr = &arr[0] ;  // arr 
    for ( i = 0 ; i < n ; i ++ )
    {
        printf("Enter the array element of the %d number is :-  " , i );
        scanf("%d" , ptr + i  );
    }
    for ( i = 0 ; i < n ; i ++ )
    {
        printf("Number of %d array element is : %d\n " , i , *(ptr + i ) );
    }
    return 0;
}*/
/* 2nd Method 
#include<stdio.h>
#define MAX_SIZE 100 // MAXIMUM ARRAY SIZE ;
int main()
{
    int i , n , arr[MAX_SIZE] ;
    int *ptr = arr; // pointer to arr[0] ;
    printf("Enter the number is :- ");
    scanf("%d" , &n );
    for ( i = 0 ; i < n ; i ++ )
    {
        printf("Enter the array element of the %d number is : " , i );
        scanf("%d" , ptr);
        ptr ++ ; 
    }
    ptr = arr ; 
    for ( i = 0 ; i < n ; i ++ )
    {
        printf("Number of %d array element is : %d\n " , i , *ptr );
        ptr ++ ; 
    }
    return 0;
}*/
/*Write a program to copy one array to another using ponters . 
#include<stdio.h>
#define MAX_SIZE 100 
int main()
{
    int n , arr[MAX_SIZE] , arr1[MAX_SIZE] , i ; 
    printf("Enter the number is :- ");
    scanf("%d" , &n );
    int *ptr = arr ; // &arr[0] ; 
    int *ptr1 = ptr ;
    for ( i = 0 ; i < n ; i ++ )
    {
        printf("\nEnter the %d array element of the number is : " , i );
        scanf("%d" , ptr ); 
        ptr ++ ; 
    } 
    ptr = arr ; 
    ptr1 = ptr ;
    for ( i = 0 ; i < n ; i ++ )
    {
        printf("\nNumber of 1st array element %d of the number is : %d\n " , i , *ptr);
        ptr++ ;
    }
    for ( i = 0 ; i < n ; i ++ )
    {
        printf("\nNumber of 2nt array element %d of the number is : %d\n " , i , *ptr1);
        ptr1 ++ ;
    }
    return 0;
}*/
//--------------------------------------SIMPLE GAMING PROJECT---------------------------------------------------
// SNAKE WATER & GUN 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int snakeWaterGun(char you , char comp )
{
    if ( you == comp )
    {
        return 0; // match will be draw ......
    }
    if ( you == 's' && comp == 'w')
    {
        return 1 ; 
    }
    else if ( you == 'w' && comp == 's')
    {
        return -1 ; 
    }
    if ( you == 's' && comp == 'g')
    {
        return -1 ; 
    } 
    else if ( you == 'g' && comp == 's' )
    {
        return 1 ; 
    }
    if ( you == 'g' && comp == 'w')
    {
        return -1 ; 
    } 
    else if ( you == 'w' && comp == 'g' )
    {
        return 1 ; 
    }
} 

int main()
{
    char you , comp ; 
    int number ; 
    srand(time(0));
    number = rand()%100 + 1 ; 
    if ( number < 33 )
    {
        comp = 's' ; 
    }
    else if ( number > 33 && number < 66 )
    {
        comp = 'w' ;
    }
    else 
    {
        comp = 'g' ;
    }
    printf("Enter 's' for snake , 'w' for water and 'g' for gun \n  ");
    scanf("%c" , &you );
    int result ; 
    result = snakeWaterGun(you , comp );
    printf("You chose %c and computer chose %c\n " , you , comp );
    if ( result == 1 )
    {
        printf("Match win \n ");
    }
    else if ( result == 0 )
    {
        printf("Match draw !! \n ");
    }
    else 
    {
        printf("Match lost \n ");
    }
    
    return 0;
}   
