 /* Write a program to move all the negative elements to one side of the array */

#include <stdio.h>
int main()
{
    int s, i, j, temp;
    printf("Enter the size of the array: ");
    scanf("%d", &s);
    int arr[s];
    
    printf("Enter positive and negative integers: ");
    for (i = 0; i < s; i++)
    {
        scanf("%d", &arr[i]);
    }
    j = 0;
    
    for (i = 0; i < s; i++)
    {
     if (arr[i] < 0)
    {
     if (i != j)
    {
      temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
    j++;
    }
    }
     printf("The modified array is ");

   for (i = 0; i < s; i++)
  {
   printf("%d ", arr[i]);
  }
   return 0;
}

