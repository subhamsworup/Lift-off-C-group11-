#include <stdio.h>
int main()
{
    int arr1[100], arr2[100], merged[200];
    int n1, n2, i, j;
    
    printf("Enter size of array 1: ");
    scanf("%d", &n1);
    printf("Enter elements of array 1: ");
    for (i = 0; i < n1; i++) 
    {
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter size of array 2: ");
    scanf("%d", &n2);
    printf("Enter elements of array 2: ");
    for (i = 0; i < n2; i++) 
    {
        scanf("%d", &arr2[i]);
    }
    
    for (i = 0; i < n1; i++) 
    {
        merged[i] = arr1[i];
    }
    for (j = 0; j < n2; j++)
    {
        merged[i] = arr2[j];
        i++;
    }
  
    printf("Merged array in reverse order: ");
    for (i = n1 + n2 - 1; i >= 0; i--)
    {
        printf("%d ", merged[i]);
    }
    printf("\n");
    return 0;
}
