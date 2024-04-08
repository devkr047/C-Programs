#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
    float p,r,t,amount,CI;
    printf ("Enter Principle Amount:");
    scanf ("%f",&p);
    printf ("Enter Rate of Interest:");
    scanf ("%f",&r);
    printf ("Enter Time (in Years):");
    scanf ("%f",&t);
    amount=p*((pow((1+(r/100)),t)));
    CI=amount-p;
    printf ("\nCompound Interest:%f",CI);
    getch();
}