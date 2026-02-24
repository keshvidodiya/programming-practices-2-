//subtract 2 matrix
#include<stdio.h>>
int main()
{

    int a[3][3],b[3][3],c[3][3];
    int i,j;
    printf("enter elements for 1st matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter elements for 2nd matrix:\n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
              scanf("%d",&b[i][j]);
        }
    }
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]-b[i][j];
        }
    }
    printf("sub of 2 matrix is :\n");
       for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",c[i][j]);
        }
        printf("\n");
    }
    return 0;

    }
