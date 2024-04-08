#include<conio.h>
#include<stdio.h>
void main()
{
    float p,r,t,SI;
    printf ("Enter Principle Amount:");
    scanf ("%f",&p);
    printf ("Enter Rate of Interest:");
    scanf ("%f",&r);
    printf ("Enter Time (in Years):");
    scanf ("%f",&t);
    SI=(p*r*t)/100;
    printf ("\nSimple Interest:%f",SI);
    getch();
}