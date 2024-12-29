#include <stdio.h>
#include <string.h>

int main()
{
    while(1) {
        char eng;
        char engAll[251];
        int count = 0;
        scanf(" %c %[^\n]", &eng, engAll);
        
        if(eng == '#') break;
        int len = strlen(engAll);
        
        for(int i = 0; i < len; i++) {
            if(engAll[i] == eng ||engAll[i] == eng - 32) count++;
        }
        printf("%c %d\n", eng, count);
    }
 
    return 0;
}