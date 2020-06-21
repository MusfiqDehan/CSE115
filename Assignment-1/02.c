#include <stdio.h>

int main() {
    printf("Enter size of your array : ");
    int n;
    scanf("%d", &n);
    int arr[n];

    printf("\nInsert value:\n");
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nArray value:\n");
    for(int i=0; i<n; i++) {
        printf("%d\n", arr[i]);
    }

    int max = arr[0];

    for(int i=0; i<n; i++) {
        if(arr[i]>max) {
            max = arr[i];
        }
    }

    printf("\nMax = %d\n", max);

    int min = arr[0];

    for(int i=0; i<n; i++) {
        if(arr[i]<min) {
            min = arr[i];
        }
    }

    printf("Min = %d\n", min);



    return 0;
}
