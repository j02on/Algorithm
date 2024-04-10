#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


char* solution(const char* rsp) {

    size_t rsp_len = strlen(rsp);
    char* answer = (char*)malloc(rsp_len + 1);
    int a = 0;
    for(int i = 0; i < rsp_len; i++)
    {
        if(rsp[i] == '0')
        {
            answer[a++] = '5';
        }
        else if(rsp[i] == '2')
        {
            answer[a++] = '0';
        }
        else
        {
            answer[a++] = '2';
        }
    }
    answer[a] = '\0';
    return answer;
}