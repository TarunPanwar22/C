/* c program to count total number of words 
#include<stdio.h>
#define MAX_SIZE 100
int main()
{
    char str[MAX_SIZE];
    int i , words ;
    printf("Enter any string : \n");
    gets(str);
    i = 0 ;
    words = 1 ;
    while(str[i] != '\0')
    {
        if(str[i]== ' ' ||  str[i]=='\n' || str[i]=='\t')
    {
        words++;
    i++;
    }
    printf("Total number of words = %d ", words);
    return 0;
}*\
/*program to capitalize first character character of each word in a string in c */
#include<stdio.h>
#define MAX 100

int main()
char str[MAX] = {0};
int i ;
printf("Enter a string : ");
scanf("%[^\n]s", str);
for(i =0; str [i]! ='\0';i++)
{
    if(i==0)
    {
        if((str[i]>='a' && str[i]<='z'))
        str[i]>= str[i]-32;
        continue;
    }
    if(str[i]==' ')
    {
        ++i;
    }
    if(str[i]>='a' && str[i]<='z')
    {
        str[i]=str[i]-32;
        continue;
    }
    else
    {
        if(str[i]>='A' && str[i]< Z)
    }
}
printf("Capitalize string is : %s\n",str);
return 0;
}
