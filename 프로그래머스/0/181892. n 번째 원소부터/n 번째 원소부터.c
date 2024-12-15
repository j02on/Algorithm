#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int num_list[], size_t num_list_len, int n) {

    int* answer = (int*)malloc((num_list_len - (n - 1))*sizeof(int));
    int a = 0;
    for(int i = 0; i < num_list_len; i++)
    {
        if(n - 1 <= i) // 배열은 0부터 시작하므로 -1을 해준다.(n - 1보다 큰 값만 반환)
        {
            answer[a] = num_list[i];//answer[a](첫번째)에 num_list[i]를 넣는다.
            a++;
        }
    }
    return answer;
}