#include<conio.h>
#include<stdio.h>
void main()
{
    int r,c,i,j,temp;
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
    for (i=0;i<r;i++)
    {
        temp=a[i][0];
        a[i][0]=a[i][c-1];
        a[i][c-1]=temp;
    }
    printf ("\nInterchanged Matrix\n\n");
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