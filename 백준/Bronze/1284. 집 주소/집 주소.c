#include <stdio.h>
#include <string.h>

int main()
{
    while(1) {
        int num = 0;
        int count = 0;
        scanf("%d", &num);
        if(num == 0) {
            break;
        }
        char isStr[100];
        sprintf(isStr, "%d", num);
        int isLen = strlen(isStr);
        count += isLen + 1;
        for(int i = 0; i < isLen; i++) {
            if(isStr[i] == '1') {
                count += 2;
            } else if(isStr[i] == '0') {
                count+= 4;
            } else {
                count += 3;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
