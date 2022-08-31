/*#include<stdio.h>
int main()
{
    int n , i , s = 0 ;
    printf("Enter the number is : - \n ");
    scanf("%d" , &n );
    int arr[n];
    for ( i =  0 ; i < n ; i ++ )
    {
        printf("Enter the number is :- \n ");
        scanf("%d" , &arr[i]);
    }
    for ( i = 0 ; i < n ; i ++ )
    {
        s = s + arr[i];
    }
    printf("the total number of array element is : %d " , s );
    return 0;
}*/
//2nd dimensional array 
#include<stdio.h>
int main()
{
    int i , j , n , m  ; 
    printf("Enter the number of rows:- \n ");
    scanf("%d",&n );
    printf("Enter the number of column :- ");
    scanf("%d" , &m);
    int arr[n][m] , brr[n][m] , crr[n][m] ; 
    for ( i = 0 ; i < n ; i ++ )
    {
        for ( j = 0 ; j < m ; j ++ )
        {
            printf("enter element of 1st array:-\n ");
            scanf("%d", &arr[i][j]);
        }
    }
        for ( i = 0 ; i < n ; i ++ )
        {
            for ( j = 0 ; j < m ; j ++ )
            {
                printf("Enter element of 2nd array:-\n ");
                scanf("%d",&brr[i][j]);
            }
        }
        for ( i = 0 ; i < n ; i ++ )
        {
            for ( j = 0 ; j < m ; j ++ )
            {
                crr[i][j] = arr[i][j] + brr[i][j];
            }
        }
        for ( i = 0 ; i < n ; i ++ )
        {
            for ( j = 0 ; j < m ; j ++)
            {
                printf("%d\t", crr[i][j]);
            }
            printf("\n");
        }
        return 0;
}