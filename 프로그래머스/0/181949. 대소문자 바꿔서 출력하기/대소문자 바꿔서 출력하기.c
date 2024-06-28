#include <stdio.h>
#include <string.h>

int main (void)
{
    char str[21];
    scanf("%s",str);
    
    int i,len;
    len = strlen(str);
    
    for(i = 0; i < len; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')//대문자를 소문자로 바꾸는 식
        {
            printf("%c",str[i] += 32);
        }
    
        else if(str[i] >= 'a' && str[i] <= 'z')//소문자를 대문자로 바꾸는 식
        {
            printf("%c",str[i] -= 32);
        }
    }
    return 0;
}