#include <stdio.h>

int main() {
    int Antenna = 0;
    int Eyes = 0;

    scanf("%d", &Antenna);
    scanf("%d", &Eyes);

    if (Antenna >= 3 && Eyes <= 4) {
        printf("TroyMartian\n");
    }
    if (Antenna <= 6 && Eyes >= 2) {
        printf("VladSaturnian\n");
    }
    if (Antenna <= 2 && Eyes <= 3) {
        printf("GraemeMercurian\n");
    }

    return 0;
}
