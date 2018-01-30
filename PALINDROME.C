#include<stdio.h>
#include<conio.h>]
void main()
{
int n,s=0,r,t;
clrscr();
printf("Enter n value\n");
scanf("%d",&n);
t=n;
while(n!=0)
{
r=n%10;
s=s*10+r;
n=n/10;
}
if(t==s)
{
printf("%d is palindrome",t);
}
else
{
printf("%d is not palindrome",t);
}
getch();
}
