/* Write a program to find the total number of alphabets , digits and special characters in a string */

#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i,alphabets = 0, digits = 0, specialchar = 0;

    printf("Enter a string: ");
    gets(str);

    for (i= 0; i < strlen(str); i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) 
         {
            alphabets++;
         }
        else if (str[i] >= '0' && str[i] <= '9')
         {
            digits++;
         }
        else 
        {
            specialchar++;
        }
    }

    printf("Number of alphabets: %d\n", alphabets);
    printf("Number of digits: %d\n", digits);
    printf("Number of special characters: %d\n", specialchar);

    return 0;
}
