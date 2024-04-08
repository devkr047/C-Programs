#include<conio.h>
#include<stdio.h>
void main()
{
    int i;
    float f;
    char c;
    double d;
    printf ("Size of int:%d byte\n",sizeof(i));
    printf ("Size of float:%d byte\n",sizeof(f));
    printf ("Size of char:%d byte\n",sizeof(c));
    printf ("Size of double:%d byte",sizeof(d));
    getch();
}