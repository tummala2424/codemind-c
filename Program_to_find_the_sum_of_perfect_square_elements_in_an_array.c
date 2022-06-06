#include<stdio.h>
int main()
{
    int i,j,n,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=1;j<=arr[i];j++)
        {
            if(arr[i]==j*j)
            {
                sum=sum+arr[i];
            }
        }
    }
    printf("%d",sum);
    return 0;
}