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
}