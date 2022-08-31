#include<stdio.h>
{
    strut emp e1 
    {
        char name[21];
        int age ; 
        int salary ; 
    };
}
int main()
{
    struct emp e1 = {"amit" , 20 , 25000};
    show(e1.name , e1.age , e1. salary );
    return 0;
}
show (char *n , int a , int s )
{
    printf("%s\t%d" , n , a , s );
}