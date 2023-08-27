#include <stdio.h>
int main()
{
    int x1, x2, x3;
    int y1, y2, y3;
    int m1, m2;
    printf("Enter the value of X1,X2 and X3\n");
    scanf("%d %d %d", &x1, &x2, &x3);
    printf("Enter the value of Y1,Y2 and Y3\n");
    scanf("%d %d %d", &y1, &y2, &y3);
    m1 = (y2 - y1) / (x2 - x1);
    printf("The slope is %d\n", m1);
    m2 = (y3 - y2) / (x3 - x2);
    printf("The slope is %d\n", m2);
    if (m1 = m2)
    {
        printf("Three points are one one straight line");
    }
    else
    {
        printf("Three points are not one one straight line");
    }
}