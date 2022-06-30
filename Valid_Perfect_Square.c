#include<stdio.h>
int main()
{
    int i,n,c=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==1||arr[i]==4||arr[i]==9||arr[i]==16||arr[i]==25||arr[i]==36)
        {
            printf("True
");
        }
        else if(arr[i]==49||arr[i]==64||arr[i]==81||arr[i]==100)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
    return 0;
}