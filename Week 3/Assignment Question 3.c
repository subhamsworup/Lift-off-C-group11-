/* Write a C program to add two numbers using pointers. */

#include <stdio.h>

int main()
{
    int f, s, *p, *q, sum;
    
    printf("Enter the first number\n");
    scanf("%d", &f);
    printf("Enter the second number\n");
    scanf("%d",&s);
    
    p = &f;
    q = &s;
    sum = *p + *q;
    
    printf("Sum of entered numbers = %d\n",sum);
    
    return 0;
}
