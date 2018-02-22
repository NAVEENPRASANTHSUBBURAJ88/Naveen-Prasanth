#include<stdio.h>
int main()
{
int a,b;
scanf("%d%d",&a,&b);
printf("The unswap values are %d\t%d",a,b);
a=a^b;
b=a^b;
a=a^b;
printf("\nThe swaped values %d\t%d",a,b);
return 0;
}
