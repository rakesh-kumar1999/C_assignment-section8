/* Write a program that will count the number of occurrences of a specific character in a
given line of text.*/
#include "stdio.h"
int main()
{
    char str[100];
    char tosearch;
    int i = 0, count = 0;
    printf("Enter any string:");
    gets(str);
    printf("\nEnter a character to search:");
    scanf("%c", &tosearch);
    while (str[i] != '\0')
    {
        if (str[i] == tosearch)
        {
            count++;
        }
        i++;
    }
    printf("Total occurence of '%c'=%d", tosearch, count);
    return 0;
}