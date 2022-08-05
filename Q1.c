#include<stdio.h>
int big(int a[],int n)
{
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    return max;
}
int main()
{
    int n;
    printf("Enter size of Array =");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("enter elemnts= ");
        scanf("%d",&a[i]);
    }
    printf("greatest number in the array is %d ",big(a,n));
    return 0;
}

