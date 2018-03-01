#include<stdio.h>
main()
{
    int s=1,n,i;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s*i;
    }
    printf("Factorial is %d",s);
    getch();
}
