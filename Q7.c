#include<stdio.h>
int dupli(int a[],int n)
{
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j]&&a[i]!=0)
            {
                cnt++;
                a[j]=0;
            }
        }
    }
    return cnt;
}
int main()
{
    int n;
    printf("enter size of array=");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("total number of duplicate elemnts are %d ",dupli(a,n));
    return 0;
}
