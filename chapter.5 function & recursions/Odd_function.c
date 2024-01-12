#include<stdio.h>
void odd(int n);
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    odd(n);
   return 0;

}
void odd(int n){
    if(n%2==0){
        printf("Even number\n");
    }
    else{
        printf("Odd number\n");
    }
}