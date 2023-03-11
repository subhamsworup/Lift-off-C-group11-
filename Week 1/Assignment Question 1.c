/* Write a program to print the numbers from 1 to 100, but replace 
multiples of 3 with "Fizz" and multiples of 5 with "Buzz" */

#include <stdio.h>
int main()
{
    int i;
    for (i=1; i<=100; i++)
    {
        if ((i%3) == 0) 
        {
            printf("Fizz\t"); 
        }
        else if ((i%5) == 0) 
        {                     
            printf("Buzz\t");   
        }
        else 
        {
            printf("%d\t", i);   
        }
 
    }
 
    return 0;
}