#include<stdio.h>
#include<conio.h>
void main()
{
    clrscr();
    int a,b;
    for(a=1;a<=10;a++)
    {
        for(b=10;b>=a;b--)
        {
        printf("*");
        }
        printf("\n");
    }
    getch();
}