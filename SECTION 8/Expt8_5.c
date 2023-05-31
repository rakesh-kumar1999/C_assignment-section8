/*Write a program which reads a string and prints it in alphabetical order. For example, the
word WELCOME should be displayed as CEELMOW.*/
#include "stdio.h"
#include "string.h"
int main()
{
    char word[25];
    char temp;
    int i, j,size;
    puts("Enter any string");
    gets(word);
    size = strlen(word);
    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (word[i] > word[j])
            {
                temp = word[i];
                word[i] = word[j];
                word[j] = temp;
            }
        }
    }
    printf("\nThe sorted string is:%s", word);
    return 0;
}