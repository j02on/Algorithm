#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* my_string, int n) {

    char* answer = (char*)malloc(n + 1);
    
    size_t my_string_len = strlen(my_string);
    int a = 0;
    for(int i = my_string_len - n; i < my_string_len; i++) // my_string_len - n 은 인덱스를 나타내기 위함.
    {
        answer[a] = my_string[i];
        a++;
    }
    answer[n] = '\0';
    return answer;
}