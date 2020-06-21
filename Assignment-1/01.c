#include <stdio.h>

int main() {
    int l, w;

    printf("Length = ");
    scanf("%d", &l);
    printf("Width = ");
    scanf("%d", &w);

    printf("Area = %d\nPerimeter = %d\n", (l*w), 2*(l+w));

    return 0;
}
