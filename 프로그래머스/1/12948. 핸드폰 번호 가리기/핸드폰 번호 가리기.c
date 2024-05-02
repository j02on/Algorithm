#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* phone_number) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    size_t phone_number_len = strlen(phone_number);
    int count = 0;
    char* answer = (char*)malloc((phone_number_len + 1) * sizeof(char));
    
    for(int i = 0; i < phone_number_len; i++)
    {
        if(i < phone_number_len - 4)
        {
            answer[count++] = '*';
        }
        else
        {
            answer[count++] = phone_number[i];
        }
        
    }
    answer[count] = '\0';
    return answer;
}