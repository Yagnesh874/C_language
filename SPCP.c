#include <stdio.h>
int main()
{
    int cp;
    printf("Enter Cost price : ");
    scanf("%d", &cp);
    int sp;
    printf("Enter Selling price : ");
    scanf("%d", &sp);
    if (sp > cp) // 10>12
    {
        printf("Profit");
    }
    if (cp > sp) // 10>8
    {
        printf("loss");
    }
    if (sp == cp)
    {
        printf("No profit, No Loss");
    }
}