#include<conio.h>
#include<stdio.h>
void main()
{
    int n,i;
    printf ("Enter Number of Terms:");
    scanf ("%d",&n);
    int a[n];
    printf ("\n");
    for (i=0;i<n;i++)
    {
        printf ("Enter %d Element:",i+1);
        scanf ("%d",&a[i]);
    }
    printf ("\nArray\n\n");
    for (i=0;i<n;i++)
    {
        printf ("%d,",a[i]);
    }
    printf ("\b ");
    printf ("\n\nCopied Array\n\n");
    int b[n];
    for (i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    for (i=0;i<n;i++)
    {
        printf ("%d,",b[i]);
    }
    printf ("\b ");
    getch();
}