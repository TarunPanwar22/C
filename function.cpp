#include<stdio.h>
int main(int argc, char *argv[])
{
    int counter ; 
    printf("Program name is : %s " , argv[0]);
    if(argc == 1 )
    {
        printf("\n No Extra Command line Argument passed other than Program Name ");
    }
    if ( argc >=2)
    {
        printf("\n No. of arguments passed : %d " , argc );
    }
    printf("\n---------- Following are the Command line Arguments passed--------------- ");
    for ( counter = 0 ; counter <= 3 ; counter ++ )
    {
        printf("\nargv[%d] : %s " , counter , argv[counter]);
    }
    return 0;
}