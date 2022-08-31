#include<stdio.h>
#include<stdlib.h>
#define maxsize 5 
void insert();
void delet();
void display();
int front = -1 , rear = -1 ; 
int queue [maxsize];
int main()
{
    int choice; 
    while(choice != 4 )
        {
        printf("\n****************************Main Menu****************************");
        printf("\n==================================================================");
        printf("\n1. insert an element \n 2. Delete an element \n 3. Display the queue \n 4. Exit \n ");
        printf("\n Enter the choice ");
        scanf("%d", &choice);
        switch(choice)
            {
                 case 1 : 
                            insert();
                            break ; 
                 case 2 :   
                            delet();
                            break;
                 case 3 : 
                            display();
                            break;
                 case 4 : 
                            exit(0);
                            break ;
                 default : 
                             printf("\n Enter the valid choice ??\n ");

            }
        } 
        return 0;
}
void insert()
{
    int item ; 
    printf("\n Enter the element\n ");
    scanf("\n%d", &item );
    if ( rear == maxsize - 1 )
    {
        printf("\n OVERFLOW\n");
        //return 0 ; 
    }
    else if ( front == -1 && rear == -1 )
    {
        front = 0 ; 
        rear = 0; 
    }
    else 
    {
        rear =rear + 1 ; 
    }
    queue [rear ] = item ; 
    printf("\n Value inserted ");
}
void delet()
{
    int item ; 
    if (front == -1 || front > rear )
    {
        printf("\nUNDERFLOW\n");
        return ; 
    }
    else{
        int item = queue[front];
        if (front == rear )
        {
            front = -1 ; 
            rear = -1 ; 
        }
    else 
        {
            front = front + 1 ; 
        }
        printf("\n value deleted ");
    }
}
void display()
{
    int i ; 
    if (rear == -1 )
    {
        printf("\n Empty Queue \n ");
    }
    else 
    {
        printf("\n Printing value .... \n ");
        for ( i = front ; i <= rear ; i ++ )
        {
            printf("\n%d\n", queue[i]);
        }
    }
}