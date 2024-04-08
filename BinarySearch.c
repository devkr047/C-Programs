#include<conio.h>
#include<stdio.h>
void main()
{
    int n,i,j,temp,s,mid;
    printf ("Enter Number of Element:");
    scanf ("%d",&n);
    printf ("\n");
    int a[n],l=0,u=n-1;
    for (i=0;i<n;i++)
    {
        printf ("Enter %d Element:",i+1);
        scanf ("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<i;j++)
        {
            if (a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf ("\nEnter Element to be Searched:");
    scanf ("%d",&s);
    while (l<=u)
    {
        mid=(l+u)/2;
        if (a[mid]<s)
        {
            l=mid+1;
        }
        else if (a[mid]>s)
        {
            u=mid-1;
        }
        else if (a[mid]==s)
        {
            printf ("\n%d Found at %dth Index",s,mid);
            break;
        }
    }
    if (l>u)
    {
        printf ("\n%d doesn't exist in an Array",s);
    }
    getch();
}