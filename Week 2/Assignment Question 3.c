/* Write a program to sort a given array using function */

#include <stdio.h>
void sortarray(int arr[], int n) 
{
    int i, j, temp;
    for (i = 0; i < n-1; i++)
    {
    for (j = 0; j < n-i-1; j++)
    {
    if (arr[j] > arr[j+1]) 
    {
    temp = arr[j];
    arr[j] = arr[j+1];
    arr[j+1] = temp;
    }
    }
    }
}

int main()
{
    int arr[100], n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements of array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sortarray(arr, n);
    printf("Sorted array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
