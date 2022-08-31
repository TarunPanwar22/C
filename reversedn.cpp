/*#include<stdio.h>
int main()
{
    int n , reversedN = 0 , remainder , orginalN;
    printf("Enter an integer is :\n");\
    scanf("%d",&n);
    orginalN = n;
    //reversedN integer is started in reversedN
    while(n!= 0)
    {
        remainder = n %10;
        reversedN = reversedN * 10 + remainder;
        n /=10;
    }
    // palindrome if orginalN and reversedN are equal 
    if (orginalN== reversedN)
    printf("%d is a palindrome",orginalN);
    else
    printf("%d is not a palindrome",orginalN);
    return 0;
    
}*/
#include<stdio.h>
int main()
{
    int fib ( int );
    int i , n ; 
    printf("Enter the number is : \n ");
    scanf("%d" , &n );
    for ( i = 1 ; i <= n ; i++ )
     printf("%d\t" , fib(i));
        return 0;
}
int fib ( int n )
{
    if (n == 1 || n == 2 )
    return 1 ;
    return(fib ( n - 1 ) + fib ( n - 2 ));

}