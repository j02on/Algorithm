#include <stdio.h>
#include <string.h>

int solution(int n) {
    char number_str[10];
    sprintf(number_str, "%d", n);
    int n_length = strlen(number_str);
    int count = 0;
    
    for(int i = 0; i < n_length; i++) {
        int num = number_str[i] - '0';
        count += num;
    }
    return count;
}