#include <stdio.h>
int main()
{
    int n;
    int arr[20];
    printf("Enter a number : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter array element is %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("T\n\nDisplay elements:");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0 )
        {

            arr[i]=arr[i]*3;
        }
        else{
            arr[i]=arr[i]*2;
        }
    }

    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}