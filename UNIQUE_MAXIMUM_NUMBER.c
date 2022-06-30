#include<stdio.h>
int main()
{
    int i,j,c=0,d=0,n,max=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
        if(c==1)
        {
            if(max<arr[i])
            {
                max=arr[i];
            }
            d++;
        }
    }
    if(d>0)
    {
        printf("%d",max);
    }
    else if(d==0)
    {
         printf("-1");
    }
    return 0;
}