#include<stdio.h>
void sortd(int [],int);
void merge(int [],int [],int);
int main()
{
    int n;
    printf("enter size of array =");
    scanf("%d",&n);
    int a[n],b[n];
        printf("\n enter elemnts for first array ");
        for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
        printf("\n enter elemnts for secnd array ");
         for(int i=0;i<n;i++)
        scanf("%d",&b[i]);
    sortd(a,n);
    sortd(b,n);
    merge(a,b,n);
//    for(int i=0;i<n;i++)
//        printf("%d\t",a[i]);
    return 0;
}
void sortd(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
void merge(int a[],int b[],int n)
{
    int s;
    s=n+n;
    int c[s];
    for(int i=0;i<n;i++)
        c[i]=a[i];
    for(int i=0,j=n;i<n,j<s;i++,j++)
        c[j]=b[i];
   // return c;
   for(int i=0;i<s;i++)
        printf("%d\t",c[i]);
}
