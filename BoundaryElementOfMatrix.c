#include<conio.h>
#include<stdio.h>
void main()
{
    int n,r,c,i,j;
    printf ("Enter Number of Rows:");
    scanf ("%d",&r);
    printf ("Enter Number of Columns:");
    scanf ("%d",&c);
    printf ("\n");
    int a[r][c];
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf ("Enter A[%d][%d] Element:",(i+1),(j+1));
            scanf ("%d",&a[i][j]);
        }
    }
    printf ("\nMatrix\n\n");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf ("%d\t",a[i][j]);
        }
        printf ("\n");
    }
    printf ("\nBoundary Elements of Matrix\n\n");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            if (i==0||j==0||i==(r-1)||j==(c-1))
            {
                printf ("%d\t",a[i][j]);
            }
            else
            {
                printf ("\t");
            }
        }
        printf ("\n");
    }
    getch();
}