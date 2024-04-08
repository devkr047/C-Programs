#include<conio.h>
#include<stdio.h>
void main()
{
    int r1,c1,r2,c2,i,j,k,sum;
    printf ("Enter Details of Matrix A\n\n");
    printf ("Enter Number of Rows:");
    scanf ("%d",&r1);
    printf ("Enter Number of Columns:");
    scanf ("%d",&c1);
    printf ("\nEnter Deatils of Matrix B\n\n");
    printf ("Enter Number of Rows:");
    scanf ("%d",&r2);
    printf ("Enter Number of Columns:");
    scanf ("%d",&c2);
    int a[r1][c1],b[r2][c2],mul[c1][r2];
    printf ("\n");
    if (c1==r2)
    {
        printf ("Elements of Matrix A\n\n");
        for (i=0;i<r1;i++)
        {
            for (j=0;j<c1;j++)
            {
                printf ("Enter A[%d][%d] Element:",(i+1),(j+1));
                scanf ("%d",&a[i][j]);
            }
        }
        printf ("\nElements of Matrix B\n\n");
        for (i=0;i<r2;i++)
        {
            for (j=0;j<c2;j++)
            {
                printf ("Enter B[%d][%d] Element:",(i+1),(j+1));
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
        for (i=0;i<r1;i++)
        {
            for (j=0;j<c2;j++)
            {
                mul[i][j]=0;
                for (k=0;k<c2;k++)
                {
                    mul[i][j]=mul[i][j]+(a[i][k]*b[k][j]);
                }
            }
        }
        printf ("\nMultiplication\n\n");
        for (i=0;i<r1;i++)
        {
            for (j=0;j<c2;j++)
            {
                printf ("%d\t",mul[i][j]);
            }
            printf ("\n");
        }
    }
    else
    {
        printf ("Multiplication of Matrix is not Possible.");
    }
    getch();
}