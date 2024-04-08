#include<conio.h>
#include<stdio.h>
void main()
{
    int n,i,j=0,k;
    printf ("Enter Number of Lines:");
    scanf ("%d",&n);
    printf ("\n");
    for (i=0;i<n;i++)
    {
        printf ("|");
        for (k=0;k<j;k++)
        {
            printf (" ");
        }
        printf ("*\n");
        j++;
        if (j%2==0)
        {
            while (j!=0)
            {
                if (i==(n-1))
                {
                    break;
                }
                printf ("|");
                for (k=0;k<j;k++)
                {
                    printf (" ");
                }
                printf ("*\n");
                j--;
                i++;
            }
        }
    }
    getch();
}