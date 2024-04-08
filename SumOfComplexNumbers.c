#include<conio.h>
#include<stdio.h>
typedef struct ComplexNumber
{
    int real;
    int img;
}complex;
complex add (complex,complex);
void main()
{
    complex a,b,sum;
    printf ("\nEnter Details of First Number\n\n");
    printf ("Enter Real Part:");
    scanf ("%d",&a.real);
    printf ("Enter Imiginary Part:");
    scanf ("%d",&a.img);
    printf ("\nEnter Details of Second Number\n\n");
    printf ("Enter Real Part:");
    scanf ("%d",&b.real);
    printf ("Enter Imiginary Part:");
    scanf ("%d",&b.img);
    sum=add (a,b);
    printf ("\nSum of Complex Numbers:%d+%di",sum.real,sum.img);
    getch();
}
complex add (complex x,complex y)
{
    complex sum;
    sum.real=x.real+y.real;
    sum.img=x.img+y.img;
    return (sum);
}