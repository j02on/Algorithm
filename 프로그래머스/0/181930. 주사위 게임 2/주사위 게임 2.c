#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b, int c) 
{
    int answer = 0;

    if (a >= 1 && a <= 6 && b >= 1 && b <= 6 && c >= 1 && c <= 6) 
    {
        if (a != b && b != c && a != c) 
        {
            answer = a + b + c;
        }
        else if (a == b && b != c) 
        {
            answer = (a + b + c) * ((a * a) + (b * b) + (c * c)); 
        }
        else if (a != b && b == c) 
        {
            answer = (a + b + c) * ((a * a) + (b * b) + (c * c)); 
        }
        else if (a == c && c != b) 
        {
            answer = (a + b + c) * ((a * a) + (b * b) + (c * c)); 
        }
        else if (a == b && b == c) 
        {
            answer = (a + b + c) * ((a * a) + (b * b) + (c * c)) * ((a * a * a) + (b * b * b) + (c * c * c)); 
        }
    }
    return answer;
}