#include<stdio.h>
void main()
{
    int i,n,n1=1,n2=0,n3;
    printf("Enter N Value\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        printf("%d",n3);
    }
    getch();
}
