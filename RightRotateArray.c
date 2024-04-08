#include<conio.h>
#include<stdio.h>
void main()
{
    int n,i,j,temp,r;
    printf ("Enter Number of Terms:");
    scanf ("%d",&n);
    printf ("\n");
    int a[n];
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
    printf ("\n\nEnter Number of times Array to be Rotated Right:");
    scanf ("%d",&r);
    for (i=0;i<r;i++)
    {
        temp=a[n-1];
        for (j=n-1;j>=0;j--)
        {
            a[j]=a[j-1];
            if (j==0)
            {
                a[j]=temp;
            }
        }
    }
    printf ("\nArray after %d Right Rotations\n\n",r);
    for (i=0;i<n;i++)
    {
        printf ("%d,",a[i]);
    }
    printf ("\b ");
    getch();
}