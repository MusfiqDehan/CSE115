#include <stdio.h>

int main() {
    int minutes;
    scanf("%d", &minutes);

    printf("%d hours, %d minutes\n", minutes/60, minutes%60);

    return 0;
}
