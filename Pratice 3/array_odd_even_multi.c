#include <stdio.h>
int main()
{
    int a[5];
    int i;
    int emul = 0;
    int omul = 0;
    for (i = 0; i < 5; i++)
    {
        printf("Enter element of arrya is %d : ", i + 1);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        if (i % 2 == 0)
        {
            emul = i * 3;
        }
        else
        {
            omul = i * 2;
        }
    }
    printf("%d", emul);
    printf("%d", omul);
    return 0;
}