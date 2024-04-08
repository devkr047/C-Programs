#include<conio.h>
#include<stdio.h>
void main()
{
    int n1,n2,i,temp,s,d,c=0;
    printf ("Enter Intervals\n\n");
    printf ("Enter Lower Limits:");
    scanf ("%d",&n1);
    printf ("Enter Upper Limit:");
    scanf ("%d",&n2);
    printf ("\nArmstrong Numbers Between %d and %d are\n\n",n1,n2);
    for (i=n1;i<=n2;i++)
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
            c++;
        }
    }
    if (c!=0)
    {
        printf ("\b ");
    }
    else
    {
        printf ("No Armstrong Numbers Between %d and %d",n1,n2);
    }
    getch();
}