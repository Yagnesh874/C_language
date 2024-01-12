#include<stdio.h>
int main()
{
    int n;
    int nst=n;
    int nsp=1;
    int i,j,k;
    char ch='A';
    printf("Enter a number : ");
    scanf("%d",&n);
    // int a=1;
    for(i=1;i<=2*n+1;i++){
        printf("%c",ch);
        ch++;
        // int d=a+64;
        //  ch=(char)d;
        // printf("%c",ch);
        // a++;
    }
    printf("\n");
    for(i=1;i<=n;i++){
        for(j=1;j<=nst;j++){
            // ch=(char)a;
            printf("%c",ch);
            ch++;
            // a++;
        }
        // for(k=1;k<=nsp;k++){
        //     printf(" ");
        //     // printf("%c",ch);
        //     ch++;
        //     // a++;
        // }
        // for(j=1;j<=nst;j++){
        //     printf("%c",ch);
        //     ch++;
        //     // ch=(char)a;
        //     // printf("%c",ch);
        //     // a++;
        // }
        nst-=1;
        // nsp+=2;
        printf("\n");        
    }
   return 0;
}