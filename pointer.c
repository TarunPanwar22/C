#include<stdio.h>
int main()
{
    int *p ,**m  ; 
    int k = 5 ; 
    int *p = &k ; 
    int **m  = &p;
    printf("%d%d%d",k ,*p,**p);
    return 0;
}