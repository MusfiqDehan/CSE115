/*
***Problem-1***
Write a program where you will take the two sides of a rectangle and calculate the area and perimeter of the rectangle.
*/

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
