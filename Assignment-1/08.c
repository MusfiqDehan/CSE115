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

    printf("\nYour array :\n");
    for(int i=0; i<n; i++) {
        if(arr[i]!=0) {
            printf("%d\n", arr[i]);
        }
    }

    for(int i=0; i<n; i++) {
        if(arr[i]==0) {
            printf("%d\n", arr[i]);
        }
    }

    return 0;
}
