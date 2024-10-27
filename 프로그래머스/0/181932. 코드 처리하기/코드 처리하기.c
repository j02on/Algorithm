#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* code) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    size_t code_len = strlen(code);
    char* answer = (char*)malloc((code_len + 1)*sizeof(char));
    int idx = 0;
    int mode = 0;

    for (int i = 0 ; i < strlen(code); i++)
    {
        if(mode == 0) //mode가 0일 때 
        {
            if(code[i] == '1') //code i번째가 1이라면?  
            {
                mode = mode ^ 1; // ^이란?: 비트 XOR 연산자이며, mode의 각 비트를 1과 XOR하여 반전 시킨다. 
            }
            else
            {
                if( i % 2 == 0) //짝수라면? 
                {
                    answer[idx] = code[i]; //answer[idx]에 code[i]를 넣음 
                    idx++;//idx를 증가시킴 
                }
            }
        }
        else if(mode == 1) //mode가 0일 때 
        {
            if(code[i] == '1') //code i번째가 1일 때 
            {
                mode = mode ^ 1; // mode에 1과 반대되는 값을 넣어줌 
            }
            else
            {
                if( i % 2 != 0) // i가 짝수가 아니라면? 
                {
                    answer[idx] = code[i]; //answer idx번째에 code i번째를 넣음 
                    idx++;// idx를 증가시킨다. 
                }
            }
        }
    }

    answer[idx] = '\0';//answer idx까지의 문장에서 널문자(공백)을 없앤다. 

    if(idx == 0) //만약 idx가 비어 있다면? 
    {
        answer = "EMPTY"; //EMPTY를 반환 
    }

    return answer;//answer값을 리턴한다. 
}