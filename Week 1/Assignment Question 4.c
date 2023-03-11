/* Write a C program to enter two numbers and perform all arithmetic 
operations using switch case. */

#include <stdio.h>
int main()
{
    int a, b, choice;

    printf("Enter first number:\n");
    scanf("%d", &a);
    printf("Enter second number:\n");
    scanf("%d", &b);
    
    printf("\nList of operations");
    printf("\n1 for Addition");
    printf("\n2 for Substraction");
    printf("\n3 for Multiplication");
    printf("\n4 for Division");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Addition of %d + %d = %d\n", a, b, a + b);
            break;

        case 2:
            printf("Substraction of %d - %d = %d\n", a, b, a - b);
            break;

        case 3:
            printf("Multiplication of %d * %d = %d\n", a, b, a * b);
            break;

        case 4:
            printf("Division of %d / %d = %f\n", a, b, (float)a / b);
            break;
        default:
            printf("\nWrong choice\n");
            break;
    }
    return 0;
}
