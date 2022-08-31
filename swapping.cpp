
/*#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of two number is : \n");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("Enter the value of a swapping is %d \n",a);
    printf("Enter the value of b swapping is %d \n ",b);
    return 0;
    
}*/
/*#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a is \n");
    scanf("%d%d",&a,&b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("enter the swapping of a is %d \n",a);
    printf("enter the swapping of b is %d \n",b);
    return 0;

}*/
#include<stdio.h>
int main()
{
    int a[5],i,n ;
    for(i=0;i<5;i++)
    {
        printf("Enter the number");
        scanf("%d",&a[i]);
    }
    printf("enter the number u want to search:");
    scanf("%d",&n);
    for(i=0;i<5;i++)
    
    {
        if(n==a[i])
        printf("number found");
    }
        
    else
        {
            printf("not found");
        }  

}