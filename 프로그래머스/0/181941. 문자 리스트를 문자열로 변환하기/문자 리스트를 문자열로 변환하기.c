#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution (const char* arr[], size_t arr_len){
    char* answer = (char*)malloc(arr_len + 1);
    for(int i = 0; i < arr_len; i++)
    {
        answer[i] = arr[i][0];//이차원 배열의 i번째의 첫번째를 answer에 넣음
    }
    answer[arr_len] = '\0';
    return answer;
}