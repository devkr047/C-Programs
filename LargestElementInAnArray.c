#include<conio.h>
#include<stdio.h>
void main()
{
    int n,i,max;
    printf ("Enter Number of Elements:");
    scanf ("%d",&n);
    printf ("\n");
    int a[n];
    for (i=0;i<n;i++)
    {
        printf ("Enter %d Element:",i+1);
        scanf ("%d",&a[i]);
    }
    max=a[0];
    for (i=1;i<n;i++)
    {
        if (a[i]>max)
        {
            max=a[i];
        }
    }
    printf ("\nLargest Element in an Array:%d",max);
    getch();
}