#include<conio.h>
#include<stdio.h>
void main()
{
    int n,n1,i,j,temp,temp1;
    printf ("Enter Number of Elements:");
    scanf ("%d",&n);
    printf ("\n");
    int a[n],t[n];
    for (i=0;i<n;i++)
    {
        printf ("Enter %d Element:",i+1);
        scanf ("%d",&a[i]);
    }
    for (i=0;i<n-1;i++)
    {
        for (j=0;j<n-1;j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf ("\nSorted Array before Removing Duplicate Elements\n\n");
    for (i=0;i<n;i++)
    {
        printf ("%d,",a[i]);
    }
    printf ("\b ");
    j=0;
    t[j]=a[j];
    for (i=1;i<n;i++)
    {
        if (t[j]!=a[i])
        {
            j++;
            t[j]=a[i];
        }
    }
    printf ("\n\nSorted Array after Removing Duplicate Elements\n\n");
    for (i=0;i<=j;i++)
    {
        printf ("%d,",t[i]);
    }
    printf ("\b ");
    getch();
}