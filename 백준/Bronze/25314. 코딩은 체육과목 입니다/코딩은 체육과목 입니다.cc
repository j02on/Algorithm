#include <stdio.h>

int main()
{
    int backjoon = 0;
    scanf("%d", &backjoon);

    int num = backjoon / 4;

    for (int i = 0; i < num; i++)
    {
        printf("long ");
    }
    printf("int");

    return 0;
}