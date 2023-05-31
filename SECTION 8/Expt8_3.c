/*Write a program that takes as input a string and two numbers n1 and n2 and find the
substring between these two positions. For example, let the string is “Welcome” and the numbers are
n1=2 and n2=5 then the substring will be: “lcom”*/
#include "stdio.h"
#include "string.h"
int main()
{
    char str[25];
    int i, n1, n2, length;
    printf("Enter any string:");
    gets(str);
    printf("Enter the 1st position & last position:\n");
    scanf("%d \n %d", &n1, &n2);
    length = strlen(str);
    if (n1 < length && n2 <=length && n1 < n2)
    {
        for(i=n1;i<n2;i++)
        {
            printf("%c",str[i]);
        }
    } 
    else
        printf("\n\nInvalid position! you have entered");
    return 0;
}