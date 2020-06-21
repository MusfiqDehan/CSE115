#include <stdio.h>

int main() {
    int n, r[100];
    scanf("%d", &n);

    for (int i=0; i<=9; i++){
        r[i] = n % 2;
        n = n / 2;
    }

    for (int i=9; i>=0; i--){
        printf("%d", r[i]);
    }

    return 0;
}
