#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c;
    clrscr();
    printf("enter valur a=");
    scanf("%d",&a);
    printf("enter value b=");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("value of a=%d",a);
    printf("\n
    value of b=%d",b);
    getch();

}