#include<stdio.h>
#include<conio.h>
void main()
{
int s=1,n,i;
clrscr();
printf("Enter n value\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
s=s*i;
}
printf("Factorial is %d",s);
getch();
}
