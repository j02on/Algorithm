#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num_list[], size_t num_list_len) {
    int answer = 0;
    
    if(num_list_len >= 11)
    {
        for(int i = 0; i < num_list_len; i++)
        {
            answer += num_list[i];
        }
    }
    else if(num_list_len <= 10)
    {
        answer += 1; //밖에서 더해야함. 왜냐하면 반복문에 들어가게 되면 계속 answer이 1씩 증가하기 때문.
        for(int j = 0; j < num_list_len; j++)
        {
            answer *= num_list[j];
        }
    }
    return answer;
}