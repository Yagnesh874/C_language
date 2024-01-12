#include <stdio.h>
int main()
{
    void india();
    india();
    return 0;
}
void india()
{
    printf("Your are in india\n");
    void dubai();
    dubai();
    return;
}

void dubai()
{
    printf("You are in dubai\n");
    void england();
    england();
    return;
}
void england()
{
    printf("You are in england\n");
    return;
}
