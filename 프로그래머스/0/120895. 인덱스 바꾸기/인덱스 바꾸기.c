#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


char* solution(const char* my_string, int num1, int num2) {

    size_t my_string_len = strlen(my_string);
    char* answer = (char*)malloc(1);
    
    for(int i = 0; i < my_string_len; i++)
    {
        if(i == num1)
        {
            answer[num2] = my_string[i];
        }
        else if(i == num2)
        {
            answer[num1] = my_string[i];
        }
        else
        {
            answer[i] = my_string[i];
        }
    }
    answer[my_string_len] = '\0';
    return answer;
}