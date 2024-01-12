#include <stdio.h>
struct student
{
    int id;
    int marks;
    char fav_char;
};

int main()
{
    struct student harry, shubham, ravi;
    harry.id = 1;
    shubham.id = 2;
    ravi.id = 3;
    harry.marks = 50;
    shubham.marks = 90;
    ravi.marks = 100;
    harry.fav_char = 's';
    shubham.fav_char = 'e';
    ravi.fav_char = 'q';
    printf("harry id is %d\n",harry.id);
    printf("shubham id is %d\n",shubham.id);
    printf("ravi id is %d\n",ravi.id);
    printf("harry marks is %d\n",harry.marks);
    printf("shubham marks is %d\n",shubham.marks);
    printf("ravi marks is %d\n",ravi.marks);
    printf("harry's fav char is %c\n",harry.fav_char);
    printf("shubham's fav char is %c\n",shubham.fav_char);
    printf("ravi's fav char is %c\n",ravi.fav_char);
}