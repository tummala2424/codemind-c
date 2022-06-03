#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i,c;
    char str[1000];
    scanf("%[^
]s",str);
    c=strlen(str);
    for(i=c-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    
    return 0;
}