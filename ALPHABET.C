#include <stdio.h>
int main()
{
char x;
printf("Enter any character");
scanf("%c",&x);
if((x >= 'a' && x<='z') || (x >='A' && x <='Z'))
{
    printf("character is an ALPHABET.",x);
}

else
{
    printf("character is NOT ALPHABET.",x);
}
return 0;
}
