#include <stdio.h>
int main()
{
    int n, i;
    int rem = 0;
    int arm = 0;
    printf("Enter a number : ");
    scanf("%d", &n);
    i = n;
    while (i > 0)
    {
        rem = i % 10;
        arm = (rem * rem * rem) + arm;
        i = i / 10;
    }
    if (arm == n)
    {
        printf("armstrong number ");
    }
    else
    {
        printf("not armstrong number ");
    }
    return 0;
}

// #include<stdio.h>
// #include<stdio.h>
// int main()
// {
//     int n,i,b;
//     int rem=0;
//     int arm=0;
//     printf("Enter a number : ");
//     scanf("%d",&n);
//     b=n;
//     for(i=0;i<=b;i++){
//         rem=b%10;
//         arm=(rem*rem*rem)+arm;
//         b=b/10;
//     }
//     if(arm==b){
//         printf("armstrong number");
//     }
//     else{
//         printf("not armstrong number");
//     }
// }