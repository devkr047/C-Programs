#include<conio.h>
#include<stdio.h>
#include<math.h>
float discriminant (int a,int b,int c)
{
    float D;
    D=(pow (b,2))-(4*a*c);
    return D;
}
void roots (int a,int b,int c)
{
    float res,root1,root2;
    res=discriminant (a,b,c);
    if (res>0)
    {
        printf ("\nRoots are Real and Different\n\n");
        root1=(-b+(sqrt (res)))/(2*a);
        root2=(-b-(sqrt (res)))/(2*a);
        printf ("Roots are %f and %f",root1,root2);
    }
    else if (res==0)
    {
        printf ("\nRoots are Real and Same\n\n");
        root1=(-b)/(2*a);
        printf ("Root is %f",root1);
    }
    else
    {
        printf ("\nRoots are Imiginary\n\n");
        root1=(-b)/(2*a);
        root2=(sqrt (-res))/(2*a);
        printf ("Roots are %.2f+%.2fi and %.2f-%.2fi",root1,root2,root1,root2);
    }
}
void main()
{
    int a,b,c;
    printf ("Enter Details of Equation\n\n");
    printf ("Enter Coefficient of x^2:");
    scanf ("%d",&a);
    printf ("Enter Coefficient of x:");
    scanf ("%d",&b);
    printf ("Enter Constant Coefficient:");
    scanf ("%d",&c);
    roots (a,b,c);
    getch();
}