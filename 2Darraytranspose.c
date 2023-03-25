#include<stdio.h>
int main()
{
    int rows,columns;
    printf("Enter rows and columns of a matrix :");
    scanf("%d%d",&rows,&columns);
    int arr[rows][columns];
    int i,j;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("element - [%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("%d " ,arr[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of matrix is : \n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }



}
