#include<conio.h>
#include<stdio.h>
int power (int n,int p)
{
    if (p>0)
    {
        return n*power (n,p-1);
    }
    else
    {
        return 1;
    }
}
void main()
{
    int n,p,res;
    printf ("Enter a Number:");
    scanf ("%d",&n);
    printf ("Enter a Power:");
    scanf ("%d",&p);
    res=power (n,p);
    printf ("\n%d to the power %d:%d",n,p,res);
    getch();
}