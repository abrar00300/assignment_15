#include<stdio.h>
int uni(int a[],int n)
{
    int flag=0,cnt=0;
    for(int i=0;i<n;i++)
    {
        flag=0;
        for(int j=0;j<n;j++)
        {
            if(i==j)
                continue;
            if(a[i]==a[j])
                flag=1;
        }
        if(flag!=1)
            cnt++;
    }
    return cnt;
}
int main()
{
    int n;
    printf("Enter size of array =");
    scanf("%d",&n);
    int a[n];
    printf("enter elemnts =\n");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("total unique elemnts in array are %d ",uni(a,n));
    return 0;
}
