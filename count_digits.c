#include<stdio.h>
int main()
{
    int n,arr[100],i,c=0,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        if(arr[i]==0)
        {
            c=1;
        }
        while(arr[i]!=0)
        {
            d=arr[i]%10;
            c++;
            arr[i]=arr[i]/10;
        }
         printf("%d ",c);
    }
}