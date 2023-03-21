/* Write a program to find the number of vowels and consonants in a string */

#include <stdio.h>
#include <string.h>
int main() 
{ 
char str[100]; 
int i, vowels, consonants;
i = vowels = consonants = 0; 

printf("\n Please Enter any String : "); 
gets(str); 

for (i = 0; i < strlen(str); i++)
{
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            {
            vowels++;
            }
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            consonants++;
        }
 }
    printf("\nNumber of Vowels in this String = %d", vowels); 	
    printf("\nNumber of Consonants in this String = %d", consonants); 
    return 0; 
    
}
