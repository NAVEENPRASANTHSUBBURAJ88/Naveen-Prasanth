#include<stdio.h>
#include<string.h>
int main()
{     
char a[16];
printf("Enter the string:");
scanf("%[^\n]s", a);
int Digit = 0;
int j=0;
while(j<strlen(a) && Digit == 0)
{
  if(a[j] < 57 && a[j] > 48)
    {Digit = 1;}
  else
    {Digit = 0;
    break;}
  j++;
}
if(Digit==1)
{
  printf("The string is numeric");
}
else
{
    printf("The given string is not numeric");
}
return 0;
}
