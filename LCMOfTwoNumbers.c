#include<conio.h>
#include<stdio.h>
void main()
{
    int n1,n2,max;
    printf ("Enter Two Numbers\n\n");
    printf ("First Number:");
    scanf ("%d",&n1);
    printf ("Enter Second Number:");
    scanf ("%d",&n2);
    if (n1>n2)
    {
        max=n1;
    }
    else
    {
        max=n2;
    }
    while (1)
    {
        if (max%n1==0 && max%n2==0)
        {
            printf ("\nLCM of %d and %d is %d",n1,n2,max);
            break;
        }
        max++;
    }
    getch();
}