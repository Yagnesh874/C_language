#include <stdio.h>
void swap(int *x, int *y)
{
    int temp;
    temp = *x; 
    *x = *y;   
    *y = temp; 
}
int main()
{
    int a; 
    int b; 
    printf("Enter a number 1 : ");
    scanf("%d", &a);
    printf("Enter a number 2 : ");
    scanf("%d", &b);
    swap(&a, &b);
    printf("The value is %d\n", a);
    printf("The value is %d\n", b);
    return 0;
}