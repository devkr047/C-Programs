#include<conio.h>
#include<stdio.h>
void main()
{
    int r,c,i,j,k,temp;
    printf ("Enter Number of Rows:");
    scanf ("%d",&r);
    printf ("Enter Number of Columns:");
    scanf ("%d",&c);
    int a[r][c];
    printf ("\n");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf ("Enter A[%d][%d] Element:",i,j);
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
    for (i=0;i<c;i++)
    {
        for (j=0;j<(r-1);j++)
        {
            for (k=0;k<(r-1);k++)
            {
                if (a[k][i]>a[k+1][i])
                {
                    temp=a[k][i];
                    a[k][i]=a[k+1][i];
                    a[k+1][i]=temp;
                }
            }
        }
    }
    printf ("\nSorted Matrix across Column\n\n");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf ("%d\t",a[i][j]);
        }
        printf ("\n");
    }
    getch();
}