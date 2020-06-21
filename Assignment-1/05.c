#include <stdio.h>

int main() {
    int n;
    double sum=0.0;
    printf("No of terms : ");
    scanf("%d", &n);

    printf("\nThe series is = ");
    for(int i=1; i<=n; i++) {
        if(i<n) {
            printf("1/%d +", i);
        }
        else {
            printf("1/%d", i);
        }

        sum = sum + 1/(double)i;
    }

    printf("\nSum upto %d terms = %lf", n, sum);

    return 0;
}
