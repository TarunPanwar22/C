/*#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of a is:\n");
    scanf("%d",&a);
    printf("enter the value of b is:\n");
    scanf("%d",&b);
    c=a+b;
    printf("%d",c);
    return 0;
}*/
/* Write a program to count frequency of digit in an integer . */
#include<stdio.h>
int main()
{
    int a[5] , i , n , frequency = 0 ; 
    for ( i = 0 ; i < 5 ; i ++ )
    {
        printf("Enter any number is :- \n ");
        scanf("%d" , &a[i]);
    }
    printf("Enter the number check frequency's number is  :- \n ");
    scanf("%d" , &n );

    for ( i = 0 ; i <= 5 ; i ++ )
    {
        if ( a [i] == n )
        {
            frequency ++ ;
        }
    }
    printf("Frequency of the number is %d : %d\n " , n ,  frequency );
    return 0; 
}


