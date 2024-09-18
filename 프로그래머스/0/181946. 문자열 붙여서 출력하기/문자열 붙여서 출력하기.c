#include <stdio.h>

int main (void)
{
    char str1 [11];
    char str2 [11];
    scanf("%s %s",str1,str2);//공백으로 문자열을 받음
    printf("%s%s",str1,str2);//공백을 없애 문자열을 붙임
    return 0;
}