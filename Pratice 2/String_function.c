#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10],str2[10],str5[20];
    //1. length of string

    // printf("Enter a string : ");
    // gets(str1);
    // int length=strlen(str1);
    // printf("%d",length);

    //2.string copy
    // printf("Enter a string 1 : ");
    // gets(str1);
    
    // strcpy(str2,str1);
    // printf("%s is copied in %s",str1,str2);

    //3.string concat
    // printf("Enter a string 1 : ");
    // gets(str1);
    // printf("Enter string 2 : ");
    // gets(str2);
    // printf("Before concat is : \n");
    // printf("first conacat is : %s\n",str1);
    // printf("second conacat is : %s\n",str2);
    // strcat(str1,str2);
    //  printf("after concat is : \n");
    // printf("first conacat is : %s\n",str1);
    // printf("second conacat is : %s\n",str2);

    //4.string uppercase and lowercase
    // printf("Enter a string : ");
    // gets(str1);
    // strupr(str1);
    // printf("%s",strupr(str1));
    // printf("%s",strlwr(str1));

    //5.string comparison
    // printf("Enter a string : ");
    // gets(str1);
    //  printf("Enter a string 2 : ");
    // gets(str2);
    // int compare=strcmp(str1,str2);
    // if(compare==0){
    //     printf("%s and %s are equal\n",str1,str2);
    // }
    // else{
    //     printf("%s and %s are not equal\n",str1,str2);

    // }

    //6.stringn length;
    // printf("Enter a string : ");
    // gets(str1);
    // int index;
    // printf("Enter index : ");
    // scanf("%d",&index);
    // strncpy(str5,str1,index);
    // printf(" charcater of %s is copied into %s",str1,str5);
//    return 0;

   //7.stringn concat
   printf("Enter a string : ");
   gets(str1);
   printf("Enter a string : ");
   gets(str2);
   int index;
    printf("Enter index : ");
    scanf("%d",&index);
   int compare=strncmp(str5,str1,3);
   if(compare==0){
        printf("Both string are equal");
   }
   else{
        printf("Both string are not equal");

   }
}