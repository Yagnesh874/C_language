#include<stdio.h>
#include<string.h>
struct emp
{
    char name[20];
    int cityNo;
    int salry;
}person1;
int main()
{
    strcpy(person1.name,"George Orwell");
    person1.cityNo = 1821;
    person1.salry = 10000;
    printf("person name is %s\n",person1.name);
    printf("The city number is %d\n",person1.cityNo);
    printf("The person salary is %d\n",person1.salry);

}