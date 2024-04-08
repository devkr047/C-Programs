#include<conio.h>
#include<stdio.h>
void main()
{
    int n,i,j,temp;
    printf ("Enter Number of Elements:");
    scanf ("%d",&n);
    printf ("\n");
    int a[n];
    for (i=0;i<n;i++)
    {
        printf ("Enter %d Element:",i+1);
        scanf ("%d",&a[i]);
    }
    printf ("\nArray before Sorting\n\n");
    for (i=0;i<n;i++)
    {
        printf ("%d,",a[i]);
    }
    printf ("\b ");
    for (i=0;i<n-1;i++)
    {
        for (j=0;j<n-i-1;j++)
        {
            if (a[j]<a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf ("\n\nArray after Sorting\n\n");
    for (i=0;i<n;i++)
    {
        printf ("%d,",a[i]);
    }
    printf ("\b ");
    getch();
}