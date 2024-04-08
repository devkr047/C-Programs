#include<conio.h>
#include<stdio.h>
void main()
{
    int n1,n2,i,j,c=0;
    printf ("Enter Details of First Array\n\n");
    printf ("Enter Number of Terms:");
    scanf ("%d",&n1);
    int a[n1];
    printf ("\n");
    for (i=0;i<n1;i++)
    {
        printf ("Enter %d Element:",i+1);
        scanf ("%d",&a[i]);
    }
    printf ("\nEnter Details of Second Array\n\n");
    printf ("Enter Number of Terms:");
    scanf ("%d",&n2);
    int b[n2];
    printf ("\n");
    for (i=0;i<n2;i++)
    {
        printf ("Enter %d Element:",i+1);
        scanf ("%d",&b[i]);
    }
    printf ("\nFirst Array\n\n");
    for (i=0;i<n1;i++)
    {
        printf ("%d,",a[i]);
    }
    printf ("\b ");
    printf ("\n\nSecond Array\n\n");
    for (i=0;i<n2;i++)
    {
        printf ("%d,",b[i]);
    }
    printf ("\b ");
    printf ("\n\nCommon Elements of First and Second Array\n\n");
    for (i=0;i<n1;i++)
    {
        for (j=0;j<n2;j++)
        {
            if (a[i]==b[j])
            {
                printf ("%d,",a[i]);
                c++;
            }
        }
    }
    if (c==0)
    {
        printf ("There is no Common Element");
    }
    else
    {
        printf ("\b ");
    }
    getch();
}