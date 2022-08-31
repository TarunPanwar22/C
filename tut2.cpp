#include<stdio.h>
int main()
{
    char Operator;
    float num1,num2,result=0;
    printf("\n Please Enter the value for two Operator (+,-,*,/) : ");
    scanf("%c", &Operator);
    printf("\nPlease Enter the value for two Operands: num1 and num2 : ");
    scanf("%f%f",&num1,&num2);
    switch(Operator)
    {
        case '+':
        result = num1 + num2;
        break;
        case '-':
        result = num1 - num2;
        break;
        case '*':
        result = num1 * num2;
        break;
        case '/':
        result = num1/num2;
        break;
        default:
        printf("\n You have entered an invalid Operator");
    }
printf("\n the result of %.2f%c%.2f=%.2f", num1 ,Operator , num2 , result);
return 0;
}