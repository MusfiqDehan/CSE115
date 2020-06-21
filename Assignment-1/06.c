#include <stdio.h>

int main() {
    int sum, first=5, last=100, difference=5, n;

    n = last / difference;
    sum = n/2*(2*first + (n-1)*difference);

    printf("Sum = %d\n", sum);

    return 0;
}

