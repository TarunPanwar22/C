#include<stdio.h>
#include<string.h>
int main()
{
    char str1[21] , str2[21] ;
    int i , j = 0 ; 
    printf("Enter the string is :- ");
    gets(str1);
    for ( i = 0 ; str1[i] != '\0' ; i ++ )
    i -- ; 
    while ( i >= 0 )
    {
        str2[j] = str1[i];
        i -- ;
        j ++ ; 
    } 
    str2[j] = '\0';
    printf("Reverse is :%s " , str2);
    return 0;
}