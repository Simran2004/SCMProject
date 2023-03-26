#include<stdio.h>
void main()
{
    int n,m,k,l;
    printf("Enter Rows and Columns of a matrix\n");
    scanf("%d%d",&m,&n);
    printf("Enter rows and columns of second matrix\n");
    scanf("%d%d",&k,&l);
    int arr[m][n],arr2[k][l],mul[100][100];
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<k;i++)
    {
        for(j=0;j<l;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    for(i=0;i<k;i++)
    {
        for(j=0;j<l;j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }

        for(i=0;i<k;i++)
        {
            for(j=0;j<l;j++)
            {
                mul[i][j]=0;
                for(k=0;k<n;k++)
                {
                    mul[i][j]+=arr[i][k]*arr2[k][j];
                }
            }
        }

    printf("\nThe Multiplication of two matrices is :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<l;j++)
        {
            printf("%d\t",mul[i][j]);
        }

    printf("\n");
    }

}