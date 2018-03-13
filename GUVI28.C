#include<stdio.h>
int main()
{
    int n,i,a[50];
    printf("array size:\n");
    scanf("%d",&n);
    printf("Enter the numbers:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("the number and its position is %d\t%d\n",a[i],i);
    }
    return 0;
}
