#include<stdio.h>
int main()
{
    int n,i,j,c=1,s,k=0;
    scanf("%d",&n);
    int arr[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        c=1;
        if(arr[i]==-1)
        {
            continue;
        }
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
                arr[j]=-1;
            }
        }
        if(c==arr[i])
        {
            k++;
            printf("%d ",arr[i]);
        }
    }
    if(k==0)
    {
        printf("-1");
    }
}