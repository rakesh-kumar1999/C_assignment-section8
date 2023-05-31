/* Write a program to find out the length of a string without using the strlen() function.*/
#include"stdio.h"
int main()
{  
    char str[100];
    int i,length =0;
    printf("Enter a string:\n");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++){
        length ++;
    }
    printf("\nLength of the  input string:%d",length);
    return 0;
}