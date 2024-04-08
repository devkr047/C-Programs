#include<conio.h>
#include<stdio.h>
void main()
{
    int n1,n2,i,j,temp;
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
    int c[n1+n2];
    for (i=0;i<n1;i++)
    {
        c[i]=a[i];
    }
    j=0;
    for (i=n1;i<(n1+n2);i++)
    {
        c[i]=b[j];
        j++;
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
    printf ("\n\nMerged Array\n\n");
    for (i=0;i<(n1+n2);i++)
    {
        printf ("%d,",c[i]);
    }
    printf ("\b ");
    getch();
}