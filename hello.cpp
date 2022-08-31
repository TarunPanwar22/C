/*#include<stdio.h>
int main()
{
    printf("hello world");
    return 0;
}
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
        for (j = 4 ; j >=i ; j -- )
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
}