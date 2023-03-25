#include<stdio.h>
int main()
{
    int rows,columns;
    printf("Enter rows and columns of a matrix :");
    scanf("%d%d",&rows,&columns);
    int arr[rows][columns];
    int i,j,sum=0,a=0;
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


for(i=0;i<rows;i++)
{
    sum=sum+arr[i][i];
    a=a+arr[i][rows-i-1];
}
printf("Sum of diagonal elements is %d\n",sum);
printf("Sum of left diagonal elements is %d\n",a);

}
