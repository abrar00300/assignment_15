#include<stdio.h>
int small(int a[],int n)
{
    int min=32000;
    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
            min=a[i];
    }
    return min;
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
    printf("smallest number in the array is %d ",small(a,n));
    return 0;
}


