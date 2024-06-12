#include <stdio.h>

int main (void)
{
    char str[10];
    int n;
    
    scanf("%s %d",str,&n,sizeof(str));
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%s",str);
    }
    return 0;
}