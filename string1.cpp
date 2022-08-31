#include<stdio.h>
main()
{
    char str[21] , str1[21] ;
    int i , j = 0 ; 
    printf("Enter the string is :- ");
    gets(str);
    for ( i = 0 ; str[i] != '\0' ; i++ )
    i -- ; 
    while ( i >= 0 )
    {
        str1[j] = str[i];
        i-- ;
        j++ ; 
    } 
    str1[j] = '\0';
    printf("Reverse is :%s " , str1);
}