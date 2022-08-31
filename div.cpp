#include<stdio.h>
int main()
{
    int n,m;
    printf("enter the divisior:\n");
    scanf("%d",&n);
    printf("enter the divided:\n");
    scanf("%d",&m);
    int quotient =m/n;
    int remainder = m%n;
    printf("Quotient : %d\n",quotient);
    printf("Remainder :%d\n",remainder);
    return 0;
}