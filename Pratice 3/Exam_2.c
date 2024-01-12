#include <stdio.h>
int main()
{
    int amount = 0;
    printf("Enter a amount : ");
    scanf("%d", &amount);
    int note2k, note500, note200, note100, note50, note20, note10, note5, note2, note1;
    note2k = amount / 2000;
    amount = amount % 2000;
    note500 = amount / 500;
    amount = amount % 500;
    note200 = amount / 200;
    amount = amount % 200;
    note100 = amount / 100;
    amount = amount % 100;
    note50 = amount / 50;
    amount = amount % 50;
    note20 = amount / 20;
    amount = amount % 20;
    note10 = amount / 10;
    amount = amount % 10;
    note5 = amount / 5;
    amount = amount % 5;
    note2 = amount / 2;
    amount = amount % 2;
    note1 = amount / 1;
    amount = amount % 1;
    printf("2000 * %d = %d\n", note2k, 2000 * note2k);
    printf("500 * %d = %d\n", note500, 500 * note500);
    printf("200 * %d = %d\n", note200, 200 * note200);
    printf("100 * %d = %d\n", note100, 100 * note100);
    printf("50 * %d = %d\n", note50, 50 * note50);
    printf("20 * %d = %d\n", note20, 20 * note20);
    printf("10 * %d = %d\n", note10, 10 * note10);
    printf("5 * %d = %d\n", note5, 5 * note5);
    printf("2 * %d = %d\n", note2, 2 * note2);
    printf("1 * %d = %d\n", note1, 1 * note1);
    return 0;
}