#include<stdio.h>
#include<math.h>
int main()
{
    int n,k,d,s=0,x,add=0,temp=0,r;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        d=n%10;
        n=n/10;
        s=s*10+d;
    }
    k=temp*temp;
    x=s*s;
    while(x)
    {
        r=x%10;
        x=x/10;
        add=add*10+r;
    }
    if(k==add)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}