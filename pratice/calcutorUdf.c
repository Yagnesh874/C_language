#include<stdio.h>
void add(int , int);
void sub(int , int);
void mul(int , int);
void div(int , int);
int main()
{
    char ch;
    int n1,n2;
    printf("enter the opertaion");
    scanf("%c",&ch);
    printf("enter the value n1 and n2");
    scanf("%d",&n1,&n2);

    switch (ch)
    {
        case '+':
        add(n1,n2);
        break;

        case '-':
        sub(n1,n2);
        break;

        case '*':
        mul(n1,n2);
        break;

        case '/':
        div(n1,n2);
        break;

        default:
        printf("enter correct choice");
    }
}

void add(int , int)
{

}

        
   