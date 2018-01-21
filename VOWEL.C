#include<stdio.h>
#include<conio.h>
void main()
{
char x;
clrscr();
printf("Enter any character\n");
scanf("%c",&x);
if(x=='a')
{
printf("It is vowel");
}
else if(x=='A')
{
printf("it is vowel");
}
else if(x=='e')
{
printf("it is vowel");}
else if(x=='E')
{
printf("it is vowel");}
else if(x=='i'||x=='o'||x=='u'||
	x=='I'||x=='O'||x=='U')
{
printf("it is vowel");
}
else
{
printf("it is consonant");
}
getch();
}
