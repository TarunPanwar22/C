#include<stdio.h>
#include<string.h>
int main()
{
    char str1[21] , str2[21] , str3[21] ;
    int i, j ; 
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
}