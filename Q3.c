#include<stdio.h>
int* sort(int a[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]<a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    return a;
}
int main()
{
    int n;
    printf("Enter size of array =");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("enter element =");
        scanf("%d",&a[i]);
    }
    sort(a,n);
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
