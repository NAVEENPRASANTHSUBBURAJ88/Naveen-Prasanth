#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("Enter the YEAR\n");
    scanf("%d",&a);
    if(a%4==0)
    printf("%d is LEAP YEAR",a);
    else
    printf("%d is not LEAP YEAR",a);
    getch();
}



