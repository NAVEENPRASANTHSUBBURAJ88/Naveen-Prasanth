#include<stdio.h>
#include<conio.h>
void main()
{
char a[20];
int i,n,num=0,num1=0;
clrscr();
printf("Enter the String\n");
scanf("%[^\n]",&a);
for(i=0;a[i]!='\0';i++)
{
if((a[i]>=65)&&(a[i]<=91) || (a[i]>=97)&&(a[i]<=123) || (a[i]=='.'))
{
num++;
}
num1++;
}
n=num1-num;
printf("Number of numerical characters are %d",n);
getch();
}

