#include<stdio.h>
main()
{
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    switch(n)
    {
        case 1: printf("violet");
        break;
        case 2: printf("indigo");
        break;
        case 3: printf("blue");
        break;
        case 4: printf("green");
        break;
        case 5: printf("yellow");
        break;
        case 6: printf("orange");
        break;
        case 7: printf("red");
        break;
        default: printf("error");
        break;
    }
}