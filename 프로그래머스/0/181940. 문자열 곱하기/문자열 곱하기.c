#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* my_string, int k) {

    size_t my_string_len = strlen(my_string);
    char* answer = (char*)malloc(my_string_len * k + 1);
    int a = 0;
    
    for(int i = 0; i < k; i++)
    {
        for(int j = 0; j < my_string_len; j++)
        {
            answer[a] = my_string[j];
            a++;
        }
    }
    
    answer[my_string_len * k] = '\0';
    return answer;
}