#include<stdio.h>
int* rotate(int a[],int n,int N,int d)
{
    switch(d)
    {
    case 1:
        {
            while(N--)
            {
                int temp=a[n-1];
                for(int i=n;i>0;i--)
                    a[i]=a[i-1];
                a[0]=temp;
            }
            break;
        }
    case 0:
        {
            while(N--)
            {
                int temp=a[0];
                for(int i=0;i<n;i++)
                    a[i]=a[i+1];
                a[n-1]=temp;
            }
            break;

        }
    }
    return a;
}
int main()
{
    int n;
    printf("Enter size for array =");
    scanf("%d",&n);
    int a[n],N,d;
    for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
            printf("%d\t",a[i]);
    printf("\n Enter posetion / value for n =");
    scanf("%d",&N);
    printf("Enter 1 for right and 0 for left =");
    scanf("%d",&d);
    rotate(a,n,N,d);
    printf("\n\n\n");
     for(int i=0;i<n;i++)
            printf("%d\t",a[i]);
}
