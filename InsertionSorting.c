#include<conio.h>
#include<stdio.h>
void main()
{
    int n,i,j,key;
    printf ("Enter Number of Terms:");
    scanf ("%d",&n);
    printf ("\n");
    int a[n];
    for (i=0;i<n;i++)
    {
        printf ("Enter %d Element:",i+1);
        scanf ("%d",&a[i]);
    }
    printf ("\nArray before Insertion Sorting\n\n");
    for (i=0;i<n;i++)
    {
        printf ("%d,",a[i]);
    }
    printf ("\b ");
    for (i=1;i<n;i++)
    {
        key=a[i];
        j=i-1;
        while (j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
    printf ("\n\nArray after Insertion Sorting\n\n");
    for (i=0;i<n;i++)
    {
        printf ("%d,",a[i]);
    }
    printf ("\b ");
    getch();
}
