/*Write a program that reads two strings and then compares them without using the
strcmp() function.*/
#include "stdio.h"
#include "string.h"
#include "stdlib.h"
void main()
{
    char str1[20];
    char str2[20];
    int i, length1, length2, flag = 0;
    printf("Enter the first string:");
    gets(str1);
    printf("\nEnter the second string:");
    gets(str2);
    length1 = strlen(str1);
    length2 = strlen(str2);
    if (length1 == length2)
    {

        for (i = 0; str1[i] != '\0'; i++)
        {
            if (str1[i] != str2[i])
            {
                flag = 1;
                goto end;
            }
        }
        end:
        if (flag == 1)
         printf("\nBoth the Strings are not same");
        else
          printf("\nBoth the strings are same");
    }
    else
      printf("\nBoth the strings are not same");
}