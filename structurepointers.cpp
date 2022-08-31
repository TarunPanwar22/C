#include<stdio.h>
#include<conio.h>
int main()
{
    struct student 
    {
        char name [40];
        int roll_no;
    };
    struct student stud ;      // structure variable 
    struct student *ptr ;     // pointer to student structure 
    ptr = & stud ;           // assigining value of structure variable 
    printf("\n Enter the roll number : ");
    scanf("%d", &ptr-> roll_no);
    printf("\n Name : %s , ptr -> name");
    printf("\n Roll no : %d" , ptr -> roll_no);
    return 0;
}