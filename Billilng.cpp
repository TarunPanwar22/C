#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    float rate1 , rate2 , rate3 , rate4 , rate5 ;
    float gross_amount , net_amount , amount1 , amount2 , amount3 , amount4 , amount5 ; 
    int quantity1 , quantity2 , quantity3 , quantity4 , quantity5 ;
    float discount ; 
    int a , b ; // checking user id and password 
    char ch ;
    printf("\t\t\t\t**********************Welcome to My Ajanta brakery store****************************\t\t\t\t\n");
    printf("\t********\n");
    printf("|Please Enter your User Id  | \t  ");
    scanf("%d" , &a );
    printf("\t********\n");
    printf("|Please Enter your user Your Password |\t");
    scanf("%d" , &b );
    printf("\t********\n");
    if ( a == 1234 && b == 1234 )
    {
        printf("You have been succesfully logined in \n ");
    }
    else 
    {
        fflush(stdin);
        printf("Please Enter the correct your  password \n ");
        printf("Press a to try again \n ");
    }
    
    {
        
       printf("Please Enter your user id and Password : ");
       scanf("%d%d" , &a , &b );
    }

    printf("Enter the Product's  Quantity and rate : \n ");

    printf("Quantity of rice ");
    scanf("%d" , &quantity1);

    printf("Rate of the Rice : ");
    scanf("%f" , &rate1);

    printf("Quantity of Tea : ");
    scanf("%d " , &quantity2);
    
    printf("Rate of the Tea  : ");
    scanf("%f" , &rate2 );

    printf("Quantity of the Bread : ");
    scanf("%d" ,&quantity3 );
    
    printf("Rate of the Bread : ");
    scanf("%f" , &rate3 );
    
    printf("Quantity of Sugar : ");
    scanf("%d" , &quantity4 );

    printf("Rate of the sugar : ");
    scanf("%f" , &rate4);

    printf("Quantity of the Butter : ");
    scanf("%d" , &quantity5 );

    printf("Rate of the Butter ");
    scanf("%f" , &rate5 );

    /* Calculation of the Complete process */
    amount1 = quantity1 * rate1 ;
    amount2 = quantity2 * rate2 ; 
    amount3 = quantity3 * rate3 ; 
    amount4 = quantity4 * rate4 ;  
    amount5 = quantity5 * rate5 ; 

    gross_amount = amount1 + amount2 + amount3 + amount4 + amount5 ; 

    /*Logical Operator 
    && - And ------>     1 1 -> 1 
                         1 0 -> 0 
    || - OR  ------>     1 0 -> 1 
                         1 1 -> 1
    !  - NOT 
    */
   if ( gross_amount < 1000 )
    {
        discount  = 0 ;
    }
    else if ( gross_amount >= 1000 && gross_amount < 5000 )
    {
        discount = ( gross_amount * 5 ) / 100 ;
    }
    else if ( gross_amount >=5000 && gross_amount < 1000 )
    {
        discount = ( gross_amount * 8 )/100 ; 
    }
    else if ( gross_amount >= 1000 )
    {
        discount  = ( gross_amount * 10 ) / 1000 ;
    }
    net_amount = gross_amount - discount ; 
    /* Output of the Code */
    system("cls");

    printf("\n\n\t\t\t*******************************************************************************\n");
    printf("\t\t\t\t\tAJANTA GENERAL STORE\n ");
    printf("\t\t\t***********************************************************************************\n");
    printf("\t\t\t S.NO.  *   Name   *  Quantity  *   Rate  *  Amount \n ");
    printf("\t\t\t  1     *   Rice   *     %d     *    %.1f *   %.1f\n" , quantity1 , rate1 , amount1 );
    printf("\t\t\t  1     *   Tea    *     %d     *    %.1f *   %.1f\n" , quantity2 , rate2 , amount2 );
    printf("\t\t\t  1     *   bread  *     %d     *    %.1f *   %.1f\n" , quantity3 , rate3 , amount3 );
    printf("\t\t\t  1     *   Sugar  *     %d     *    %.1f *   %.1f\n" , quantity4 , rate4 , amount4 );
    printf("\t\t\t  1     *   Butter *     %d     *    %.1f *   %.1f\n" , quantity5 , rate5 , amount5 );

    printf("\t\t\t************************************************************************************\n");
    printf("\n\t\t\tGrand Total : %f\n" , gross_amount);
    printf("\t\t\tDiscount Allowed : %f\n" , discount );
    printf("\t\t\t Net Amount Paid : %f \n " , net_amount);
    printf("\t\t\t***********************************************************************************\n");
    printf("\t\t\t\t\t Thanku Visit Again \n ");
    printf("\t\t\t***********************************************************************************\n");

    getch();
    return 0;

}