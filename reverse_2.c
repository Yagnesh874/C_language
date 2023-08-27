#include <stdio.h>
void reverse(int arr[], int si, int ei)
{
    for (int i = si, j = ei; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}
int main()
{
    int arr[7];
    int k;
    int n = arr[7];
    for (int i = 0; i < 7; i++)
    {
        printf("Enter element of array is %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter a number to given a array : ");
    scanf("%d", &k);
    printf("Enter a number : ");
    scanf("%d", &n);
    k = k % n;
    reverse(arr, 0, n - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, 3, n - 1);
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}