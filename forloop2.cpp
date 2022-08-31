#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the value of n is ");
    scanf("%d",&n);
    for(i=n;i>=1;i=i-1)
    {
        printf("%d\n",i);
    }
}