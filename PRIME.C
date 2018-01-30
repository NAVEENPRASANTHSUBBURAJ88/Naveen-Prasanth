#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
int n,i,c=0;
clrscr();
printf("Enter any number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
c++;
}
}
if(c==2)
{
printf("n is a prime number");
}
else
{
printf("n is not a prime number");
}
getch();
}
