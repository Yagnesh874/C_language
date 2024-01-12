#include <stdio.h>
int main()
{

    int sub1, sub2, sub3, sub4, sub5;
    float total,res,perchtange;
    printf("enter the subject marks");
    scanf("%d", &sub1);
    printf("enter the subject marks");
    scanf("%d", &sub2);
    printf("enter the subject marks");
    scanf("%d", &sub3);
    printf("enter the subject marks");
    scanf("%d", &sub4);
    printf("enter the subject marks");
    scanf("%d", &sub5);
    res = sub1 + sub2 + sub3 +sub4 + sub5;
    perchtange = (res/500);
    printf("%f is total marks\n",res);
    printf("%f to see the perchtange\n",perchtange); 
    return 0;
}