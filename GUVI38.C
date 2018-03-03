#include<stdio.h>
int main()
{
int m,n;
scanf("%d%d",&m,&n);
printf("The unswap values are %d\t%d",m,n);
m=m^n;
n=m^n;
m=m^n;
printf("\nThe swaped values %d\t%d",m,n);
return 0;
}
