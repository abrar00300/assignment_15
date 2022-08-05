#include<stdio.h>
int find(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
            return a[i];
    }
    return '%';
}
int main()
{
    int n;
    printf("enter size of array=");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
    if(find(a,n)=='%')
        printf("no adjacent dupicates found ");
    else
        printf("the first dupicate adjacent elemnt is %d ",find(a,n));
    return 0;
}
