#include <stdio.h>

int main()
{
    int snackPrice = 0;
    int snackCount = 0;
    int dongsuPrice = 0;
    scanf("%d %d %d", &snackPrice, &snackCount, &dongsuPrice);
    
    int sendPrice = (snackCount * snackPrice) - dongsuPrice;
    if(sendPrice < 0) sendPrice = 0;
    
    printf("%d", sendPrice);

    return 0;
}