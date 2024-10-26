#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

char* solution (int a, int b)
{
    int ab = a * (int)pow(10,floor(log10(b)+1)) + b;
    int ab2 = 2 * a * b;
    return ab >= ab2 ? ab : ab2;
}