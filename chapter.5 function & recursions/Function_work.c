#include <stdio.h>
void england()
{
    printf("You are in england\n");
    return;
}
void dubai()
{
    printf("You are in dubai\n");
    england();
    return;
}
void india()
{
    printf("You are in india\n");
    dubai();
    return;
}
int main()
{
    india();
    return 0;
}