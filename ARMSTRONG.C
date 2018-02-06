#include<stdio.h>
void main()
{
    int n,b,c,d=0;
    printf("enter the number\n");
    scanf("%d",&n);
    b=n;
    while(b!=0)
    {
        c=b%10;
        d=d+c*c*c;
        b=b/10;
    }
    if(n==d)
    printf(" yes the given number %d is a armstrong number",n);
    else
    printf(" No the given number %d is not a armstrong number",n);
}



