#include<stdio.h>
#include<string.h>
int main()
{
    char name[5][10];
    char temp[10];
    int i,j,comapre;
    i=j=comapre=0;
        printf("Enter a string : ");
    for(i=0;i<5;i++){
        gets(name[i]);
    }
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            comapre=strcmp(name[i],name[j]);
            if(comapre>0){
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);
            }
        }
    }
    for(i=0;i<5;i++){
        printf("%s\n",name[i]);
    }
   return 0;
}