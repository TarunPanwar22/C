/*Write a program to print multiplication table of any number using by loop */
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the value of number n is\n");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1)
    {
        printf("%d*%d=%d\n",n,i,i*n);
    }
    return 0;
}

