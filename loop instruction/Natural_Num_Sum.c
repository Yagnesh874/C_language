#include <stdio.h>
int main()
{
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum = sum + i; // 0+1=1
                       // 1+2=3
                       // 3+3=6
                       // 6+4=10
                       // 10+5=15
                       // 15+6=21
                       // 21+7=28
                       // 28+8=36
                       // 36+9=45
                       // 45+10=55
    }
    printf("%d", sum);
    return 0;
}