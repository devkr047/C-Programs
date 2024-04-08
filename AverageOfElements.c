#include<conio.h>
#include<stdio.h>
void main()
{
    int n,i,s=0;
    printf ("Enter Number of Elements:");
    scanf ("%d",&n);
    printf ("\n");
    int a[n];
    for (i=0;i<n;i++)
    {
        printf ("Enter %d Element:",i+1);
        scanf ("%d",&a[i]);
        s+=a[i];
    }
    printf ("\nAverage of Elements of an Array:%f",((float)s/(float)n));
    getch();
}