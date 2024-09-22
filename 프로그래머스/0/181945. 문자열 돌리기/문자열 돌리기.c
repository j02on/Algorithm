#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[11];
    scanf("%s",str);  //str 입력받기
    int len;
    len = strlen(str); //길이 구하기
    
    int i;
    for(i = 0; i < len; i++) //반복문 for ,while ,do while
    {
        printf("%c\n",str[i]);
    }
    return 0;
}