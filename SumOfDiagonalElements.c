#include<conio.h>
#include<stdio.h>
void main()
{
    int r,c,i,j,s=0,s1=0;
    printf ("Enter Number of Rows:");
    scanf ("%d",&r);
    printf ("Enter Number of Columns:");
    scanf ("%d",&c);
    int a[r][c];
    printf ("\n");
    if (r==c)
    {
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
            for (j=0;j<c;j++)
            {
                if (i==j)
                {
                    s=s+a[i][j];
                }
                if ((i+j)==(r-1))
                {
                    s1=s1+a[i][j];
                }
            }
        }
        printf ("\nSum of Primary Diagonal:%d",s);
        printf ("\nSum of Other Diagonal:%d",s1);
    }
    else
    {
        printf ("Sum of Diagonal is not Possible.");
    }
    getch();
}