#include<conio.h>
#include<stdio.h>
void main()
{
    int n,i,j,k=0,c,temp;
    printf ("Enter Number of Elements:");
    scanf ("%d",&n);
    printf ("\n");
    int a[n],arr[n];
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
    printf ("\nArray before Removing all Occurences of Elements\n\n");
    for (i=0;i<n;i++)
    {
        printf ("%d,",a[i]);
    }
    printf ("\b ");
    for (i=0;i<n;i++)
    {
        j=i,c=0;
        while (a[j]==a[j+1])
        {
            c++;
            j++;
            i++;
        }
        if (c==0)
        {
            arr[k]=a[j];
            k++;
        }
    }
    printf ("\n\nArray after Removing all Occurences of Elements\n\n");
    for (i=0;i<k;i++)
    {
        printf ("%d,",arr[i]);
    }
    printf ("\b ");
    getch();
}