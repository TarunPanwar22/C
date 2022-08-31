/*#include<stdio.h>
int main()
{ 
    printf("hello world ");
    int *ptr();
    
    printf("Address of main is is : %u " , main);
    return 0;
}*/
// sum 
/*#include<stdio.h>
int sum ( int a , int b );
int main()
{
    int (*ptr)(int , int ); // function pointer 
    int result ; 
    ptr = sum ; // ptr = &ptr ; 
    result = (*ptr)(30 , 40 );
    printf("The value of result is : %d ", result);
    return 0;
}
int sum ( int x , int y )
{
    int c ; 
    c = x + y ; 
    return c ; 
}*/
/*#include<stdio.h>
int sum( int  , int  , int  );
int main()
{
    int result ; 
    int (*ptr)( int , int , int );
    ptr = &sum ; 
    result = (*ptr)(30,40 ,40);
    printf("Sum : %d " , result );
    return 0;
}
int sum(int x , int y , int z )
{
    int c ; 
    c = x + y + z  ; 
    return c;
}*/
// substraction
/*
#include<stdio.h>
float sub( float , float  );
int main()
{
    float result ; 
    float a , b ; 
    float  (*ptr)(float , float );
    printf("Enter the value of a and b is :- \n ");
    scanf("%f%f " , &a , &b );
    ptr = &sub ; 
    result = (*ptr)(a ,b ); 
    printf("Substract : %f " , result );
    return 0; 
}
float    sub ( float x  , float  y )
{
    float c ; 
    c = x - y ; 
    return c ; 
}*/
/*
#include<stdio.h>
float mult( int , int );
int main()
{
    float a , b , result ; 
    float (*ptr)(int , int );
    printf("Enter the number is :- \n ");
    scanf("%f%f" , &a , &b );
    ptr = &mult;
    result = (*ptr)(a ,b);
    printf("Multiply is :%f " , result );
    return 0 ; 
}
float mult(int x , int y )
{
    int z ; 
    z = x * y ; 
    return z ; 
}*/
#include<stdio.h>
int swap(int *x , int *y );
int main()
{
    int a , b ;
    printf("Enter the number is: - \n ");
    scanf("%d%d" , &a , &b );
    swap(&a,&b);
    printf("a = %d and b = %d " , a , b );
    return 0;
}
int swap(int *x , int *y )
{
    int z; 
    z = *x ;
    *x = *y ;
    *y = z ;
}