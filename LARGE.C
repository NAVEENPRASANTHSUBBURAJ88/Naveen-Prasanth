#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("Enter the value:");
scanf("%d%d%d",&a,&b,&c);
clrscr();
if(a>b&&a>c)
{
printf("a is great");
}
else if(b>a&&b>c)
{
printf("b is great");
}
else
{
printf("c is great");
}
getch();
return 0;
}

