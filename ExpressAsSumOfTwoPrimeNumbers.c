#include<conio.h>
#include<stdio.h>
int prime (int n)
{
    int i,c=0;
    for (i=2;i<n;i++)
    {
        if (n%i==0)
        {
            c++;
            return 0;
        }
    }
    if (c==0)
    {
        return 1;
    }
}
void main()
{
    int n,i,j,c=0;
    printf ("Enter a Number:");
    scanf ("%d",&n);
    for (i=2;i<=n;i++)
    {
        for (j=2;j<=n;j++)
        {
            if ((i+j)==n && prime (i)==1 && prime (j)==1)
            {
                printf ("Yes, %d can be Expressed as Sum of Two Prime Numbers",n);
                c++;
                break;
            }
        }
    }
    if (c==0)
    {
        printf ("No, %d cannot be Expressed as Sum of Two Prime Numbers",n);
    }
    getch();
}