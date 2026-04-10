#include <stdio.h>

int main() {
    int N, i;
    
    printf("Enter number of elements: ");
    scanf("%d", &N);

    int arr[N], even[N], odd[N];
    int e = 0, o = 0;

    // Input elements
    printf("Enter %d integers:\n", N);
    for(i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Partition
    for(i = 0; i < N; i++) {
        if(arr[i] % 2 == 0) {
            even[e++] = arr[i];
        } else {
            odd[o++] = arr[i];
        }
    }

    // Display even list
    printf("\nEven numbers:\n");
    for(i = 0; i < e; i++) {
        printf("%d ", even[i]);
    }

    // Display odd list
    printf("\nOdd numbers:\n");
    for(i = 0; i < o; i++) {
        printf("%d ", odd[i]);
    }

    return 0;
}