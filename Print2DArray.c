#include<conio.h>
#include<stdio.h>
void main()
{
    int r,c,i,j;
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
    printf ("\n2D Array of %d Rows and %d Columns\n\n",r,c);
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