#include<stdio.h>
#include<math.h>
int main()
{
    int n,temp=0,d,c=0,s=0;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        d=n%10;
        n=n/10;
        c++;
    }
    n=temp;
    while(temp)
    {
        d=temp%10;
        temp=temp/10;
        s=s+pow(d,c);
        c--;
    }
    if(s==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}