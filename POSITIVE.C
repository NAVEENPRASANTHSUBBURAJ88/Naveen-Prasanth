#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("Enter the Number\n");
scanf("%d",&a);
if(a>0)
printf("The Number is Positive");
else if(a<0)
printf("The number is negative");
else
printf("Zero");
getch();
}
