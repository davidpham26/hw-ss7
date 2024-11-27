#include <stdio.h>

int main() {
    // Khai bao va gan gia tri cho mang
    int arr[] = {5, 10, 15, 20, 25};
    int length = sizeof(arr) / sizeof(arr[0]); // Tinh do dai mang

    // In tung phan tu trong mang
    printf("Cac phan tu trong mang:\n");
    for (int i = 0; i < length; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // In do dai mang
    printf("Do dai cua mang: %d\n", length);

    return 0;
}

