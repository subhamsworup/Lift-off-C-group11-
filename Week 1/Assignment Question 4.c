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
    
    printf("\nList of operations \n1 for Addition \n2 for Substraction \n3 for Multiplication \n4 for Division");

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
