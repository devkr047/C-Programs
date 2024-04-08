#include<conio.h>
#include<stdio.h>
void main()
{
    int r1,c1,r2,c2,i,j,c=0;
    printf ("Enter Details of First Matrix\n\n");
    printf ("Enter Number of Rows:");
    scanf ("%d",&r1);
    printf ("Enter Number of Columns:");
    scanf ("%d",&c1);
    int a[r1][c1];
    printf ("\nEnter Details of Second Matrix\n\n");
    printf ("Enter Number of Rows:");
    scanf ("%d",&r2);
    printf ("Enter Number of Columns:");
    scanf ("%d",&c2);
    int b[r2][c2];
    int sum[r1][c1];
    if (r1==r2 && c1==c2)
    {
        printf ("\nEnter Elements of Matrix A\n\n");
        for (i=0;i<r1;i++)
        {
            for (j=0;j<c1;j++)
            {
                printf ("Enter A[%d][%d] Element:",i,j);
                scanf ("%d",&a[i][j]);
            }
        }
        printf ("\nEnter Elements of Matrix B\n\n");
        for (i=0;i<r2;i++)
        {
            for (j=0;j<c2;j++)
            {
                printf ("Enter B[%d][%d] Element:",i,j);
                scanf ("%d",&b[i][j]);
            }
        }
        printf ("\nMatrix A\n\n");
        for (i=0;i<r1;i++)
        {
            for (j=0;j<c1;j++)
            {
                printf ("%d\t",a[i][j]);
            }
            printf ("\n");
        }
        printf ("\nMatrix B\n\n");
        for (i=0;i<r2;i++)
        {
            for (j=0;j<c2;j++)
            {
                printf ("%d\t",b[i][j]);
            }
            printf ("\n");
        }
        printf ("\nSum of Matrix A and Matrix B\n\n");
        for (i=0;i<r1;i++)
        {
            for (j=0;j<c1;j++)
            {
                sum[i][j]=a[i][j]+b[i][j];
                printf ("%d\t",sum[i][j]);
            }
            printf ("\n");
        }
    }
    else
    {
        printf ("\nMatrix are not Equal. Sum of Matrix is not Possible.");
    }
    getch();
}