#include <stdio.h>
int countoccur(int arr[], int n, int num)
{
    int count = 0;
    for(int i = 0; i < n; i++) 
    {
        if(arr[i] == num)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int arr[] = {1, 2, 5, 4, 5, 6, 7, 8, 3, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int num = 5; 
    int count = countoccur(arr, n, num);
    printf("The number of occurrences of %d in the array is %d\n", num, count);
    return 0;
}
