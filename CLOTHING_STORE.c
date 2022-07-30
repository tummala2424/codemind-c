#include<stdio.h>
int main()
{
    int a[100],i,j,p,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            continue;
        }
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                p++;
                a[j]=0;
                break;
            }
        }
    }
    printf("%d",p);
}