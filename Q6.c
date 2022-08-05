#include<stdio.h>
void read(int a[],int n)
{
    for(int i=n-1;i>=0;i--)
        printf("%d\t",a[i]);
}
int main()
{
    int n;
    printf("enter size of array=");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
    printf("enter value for N=");
    int nn;
    scanf("%d",&nn);
    read(a,nn);
    return 0;
}
