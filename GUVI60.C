#include<stdio.h>
void main()
{
    int i,n,f1=1,f2=0,f3;
    printf("Enter N Value\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        f3=f1+f2;
        f1=f2;
        f2=f3;
        printf("%d",f3);
    }
    getch();
}
