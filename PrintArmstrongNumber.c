#include<conio.h>
#include<stdio.h>
void main()
{
    int n,temp,i,s,d;
    printf ("Enter Number of Terms:");
    scanf ("%d",&n);
    printf ("\nArmstrong Numbers between 1 to %d are\n\n",n);
    for (i=1;i<=n;i++)
    {
        temp=i;
        s=0;
        while (temp!=0)
        {
            d=temp%10;
            s=s+(d*d*d);
            temp=temp/10;
        }
        if (s==i)
        {
            printf ("%d,",i);
        }
    }
    printf ("\b ");
    getch();
}