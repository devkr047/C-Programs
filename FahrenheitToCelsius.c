#include<conio.h>
#include<stdio.h>
void main()
{
    float f,c;
    printf ("Enter Temperature in Fahrenheit:");
    scanf ("%f",&f);
    c=(f-32.0)*(5.0/9.0);
    printf ("Temperature in Celsius:%f",c);
    getch();
}