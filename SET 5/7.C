
#include<stdio.h>
int main()
{
    int a[100],n,j,t,i;
    printf("enter how many numbers\n");
    scanf("%d",&n);
    printf("enter the numbers\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
            }
        }
        printf("%d\n",a[i]);
    }
    printf("\nsmallest no. is :%d\nlargest no. is:%d",a[0],a[n-1]);
    return 0;
}
