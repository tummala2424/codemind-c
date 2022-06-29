#include<stdio.h>
int main()
{
    int a,b,i,temp,d,s=0;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a<b)
    {
        for(i=a;i<=b;i++)
        {
            temp=i;
            s=0;
            while(temp)
            {
                d=temp%10;
                temp=temp/10;
                s=s*10+d;
            }
            if(i==s)
            {
                printf("%d ",i);
            }
        }
    }
    return 0;
}