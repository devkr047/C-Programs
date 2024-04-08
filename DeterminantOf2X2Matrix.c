#include<conio.h>
#include<stdio.h>
void main()
{
    int r,c,i,j,a[2][2],D,m1=1,m2=1;
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            printf ("Enter A[%d][%d] Element:",i,j);
            scanf ("%d",&a[i][j]);
        }
    }
    printf ("\nMatrix\n\n");
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            printf ("%d\t",a[i][j]);
        }
        printf ("\n");
    }
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            if (i==j)
            {
                m1*=a[i][j];
            }
            else
            {
                m2*=a[i][j];
            }
        }
    }
    D=m1-m2;
    printf ("\nDeterminant of 2X2 Matrix:%d",D);
    getch();
}