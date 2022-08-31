/*Write a program to print first ten natural number
#include<stdio.h>
int main()
{   
    int i;
    for(i=0;i<=10;i=i+1)
   {
       printf("the value of number is %d\n",i);
   }

    return 0;
    second method;
*/
/*#include<stdio.h>
int main()
{
    int i , n ;
    printf("the first number is \n ");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1)
    {
        printf("\nthe value of a number is %d\n",i);
    }
    return 0;
}*/ 
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
}