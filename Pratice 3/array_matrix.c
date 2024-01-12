#include<stdio.h>
int main()
{
    int i,j;
    int mat[i][j];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter element of : ");
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                printf("%d",mat[i][j]);
            }
            printf("\n");
        }
   return 0;
}