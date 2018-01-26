#include<stdio.h>
#include<conio.h>
void main()
{
int n,c=0;
clrscr();
printf("Enter the value of integer\n");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
c++;
}
printf("\n The no of digits:%d",c);
getch();
}
