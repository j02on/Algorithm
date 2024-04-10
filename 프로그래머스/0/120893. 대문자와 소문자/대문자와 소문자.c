#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


char* solution(const char* my_string) {

    size_t my_string_len = strlen(my_string);
    char* answer = (char*)malloc(my_string_len + 1);
    int a = 0;
    
    for(int i = 0; i < my_string_len; i++)
    {
        if('A' <= my_string[i] && my_string[i] <= 'Z')
        {
            answer[a++] = my_string[i] + 32;
        }
        else
        {
            answer[a++] = my_string[i] - 32;
        }
    }
    answer[a] = '\0';
    return answer;
}