#include<conio.h>
#include<stdio.h>
void main()
{
    int n,i,min,max;
    printf ("Enter Number of Elements:");
    scanf ("%d",&n);
    printf ("\n");
    int a[n];
    for (i=0;i<n;i++)
    {
        printf ("Enter %d Element:",i+1);
        scanf ("%d",&a[i]);
    }
    min=a[0];
    max=a[0];
    for (i=1;i<n;i++)
    {
        if (a[i]>max)
        {
            max=a[i];
        }
        if (a[i]<min)
        {
            min=a[i];
        }
    }
    printf ("\nMinimum Element in an Array:%d",min);
    printf ("\nMaximum Element in an Array:%d",max);
    getch();
}