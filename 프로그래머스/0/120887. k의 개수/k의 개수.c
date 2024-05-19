#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int i, int j, int k) {
    int answer = 0;
    char numStr[7];
    char kStr[2];
    sprintf(kStr, "%d", k);
    
    for(i; i <= j; i++)
    {
        sprintf(numStr, "%d", i);
        size_t numStr_len = strlen(numStr);
        for(int f = 0; f < numStr_len; f++)
        {
            if(numStr[f] == kStr[0])
            {
                answer++;
            }
        }
    }
    return answer;
}