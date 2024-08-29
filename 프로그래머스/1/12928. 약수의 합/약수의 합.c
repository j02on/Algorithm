#include <stdio.h>

int solution(int n) {
    int countNumber = 0;
    
    for(int i = 1; i <= n; i++) {
        (n % i == 0) ? (countNumber += i) : (countNumber += 0);
    }
    
    return countNumber;
}