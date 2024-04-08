#include<conio.h>
#include<stdio.h>
void main()
{
    int n,i,j,temp;
    printf ("Enter Number of Terms:");
    scanf ("%d",&n);
    printf ("\n");
    int a[n];
    for (i=0;i<n;i++)
    {
        printf ("Enter %d Element:",i+1);
        scanf ("%d",&a[i]);
    }
    printf ("\nArray before Selection Sorting\n\n");
    for (i=0;i<n;i++)
    {
        printf ("%d,",a[i]);
    }
    printf ("\b ");
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if (a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf ("\n\nArray after Selection Sorting\n\n");
    for (i=0;i<n;i++)
    {
        printf ("%d,",a[i]);
    }
    printf ("\b ");
    getch();
}