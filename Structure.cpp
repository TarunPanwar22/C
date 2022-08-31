#include<stdio.h>
int main()
{
    struct book 
    {
        char name [21]; 
        int page ; 
        int price ; 
    };
    struct book b1 , b2 , b3 ; 
    printf("Enter the name of the book : ");
    gets(b1.name);
    fflush(stdin);
    printf("Enter the price : ");
    scanf("%d" , &b1.price);
    fflush(stdin);
    printf("Enter the page : ");
    scanf("%d" , &b1.page );
    fflush(stdin);
    printf("Enter the 2nd name of the book : ");
    gets(b2.name);
    fflush(stdin);
    printf("Enter the price : ");
    scanf("%d" , &b2.price );
    fflush(stdin);
    printf("Enter the page : ");
    scanf("%d" , &b2.page );
    fflush(stdin);
    printf("Enter the 3rd name of the book : ");
    gets(b3.name);
    fflush(stdin);
    printf("Enter the page of the book : ");
    scanf("%d" , &b3.price );
    fflush(stdin);
    printf("Enter the price of the book : ");
    scanf("%d " , &b3.page );
    fflush(stdin);
    printf("%s\t%d\t%d\n" , b1.name , b1.price , b1.page );
    printf("%s\t%d\t%d\n" , b2.name , b2.price , b2.page );
    printf("%s\t%d\t%d\n" , b3.name , b3.price , b3.page );
    return 0;
}
/*#include<stdio.h>
int main()
{
    struct book 
    {
        char name[21];
        int page ; 
        int price ; 
    };
    struct book b[3] ; 
    int i ; 
    for ( i = 0 ; i < 3 ; i ++ )
    {
        printf("Enter the name of the book : ");
        gets(b[i].name);
        fflush(stdin);
        printf("Enter the price : ");
        scanf("%d" , &b[i].price );
        fflush(stdin);
        printf("Enter the page : ");
        scanf("%d" , &b[i].page );
        fflush(stdin);
    }
    printf("\n Details of books : \n ");
    for ( i = 0 ; i < 3 ; i ++ )
    {
        printf("%s\t%d\t%d\n " , b[i].name , b[i].price , b[i].page );
    }
    return 0;
}*/