#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number \n");
    scanf("%d",&a);
    if((a>=0 && a<=10))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
