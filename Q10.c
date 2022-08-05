#include<stdio.h>
void fre(int[],int);
int main()
{
    int n;
    printf("enter size of array =");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    fre(a,n);
    return 0;
}
void fre(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        int cnt=0;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                cnt++;
                a[j]=0;
            }
        }
        if(a[i]!=0)
        printf("frequency of %d is %d \n",a[i],cnt+1);
    }
}
