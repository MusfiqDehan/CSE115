#include <stdio.h>

int main() {
    int x, y, z;

    printf("x = ");
    scanf("%d", &x);

    printf("y = ");
    scanf("%d", &y);

    printf("z = ");
    scanf("%d", &z);

    printf("\nThe numbers which are divisible by %d within the range of %d and %d (inclusive) are shown below :\n", z, x, y);
    for(int i=x; i<=y; i++) {
        if(i%z==0){
            printf("%d\n", i);
        }
    }

    return 0;
}
