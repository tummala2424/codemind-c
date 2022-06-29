#include<stdio.h>
int main()
{
    int n,d=0,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            d++;
        }
    }
    if(d<=2)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}