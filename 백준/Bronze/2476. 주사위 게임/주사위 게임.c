#include <stdio.h>

int main()
{
    int member,a,b,c,money = 0;
    int temp = 0;

    scanf("%d", &member);
    
    for(int i = 0; i < member; i++) {
        money = 0;
        scanf("%d %d %d", &a, &b, &c);
        if(a == b && b == c) {
            money = a * 1000 + 10000;
        } else if(a == b || b == c || c == a) {
            int same = a;
            if(b == c) {
                same = b;
            }
            money = same * 100 + 1000;
        }else {
            int max = a;
            if(b > max) max = b;
            if(c > max) max = c;
            money = max * 100;
        }
        if(money > temp) {
            temp = money;
        }
    }
    printf("%d", temp);

    return 0;
}
