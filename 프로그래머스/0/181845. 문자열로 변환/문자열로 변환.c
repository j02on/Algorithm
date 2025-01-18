#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(n);
    
    sprintf(answer, "%d", n);
    
    return answer;
}
/*sprintf 함수는 정수를 문자열로 변환하고, 그 결과를 문자열 배열 answer에 저장합니다. answer 배열은 충분한 크기로 할당되어야 하며, 변환된 문자열이 배열 크기를 초과하지 않도록 주의해야 합니다.*/