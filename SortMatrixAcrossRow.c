#include<conio.h>
#include<stdio.h>
void main()
{
    int r,c,i,j,temp,k;
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
    for (i=0;i<r;i++)
    {
        for (j=0;j<c-1;j++)
        {
            for (k=0;k<c-j-1;k++)
            {
                if (a[i][k]>a[i][k+1])
                {
                    temp=a[i][k];
                    a[i][k]=a[i][k+1];
                    a[i][k+1]=temp;
                }
            }
        }
    }
    printf ("\nSorted Matrix across Row\n\n");
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