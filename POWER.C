#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter the number and power\n");
scanf("%d%d",&a,&b);
c=pow(a,b);
printf("The Power is %d",c);
getch();
}
