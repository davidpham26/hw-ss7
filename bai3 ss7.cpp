#include <stdio.h>
int main() {
    // Khai bao va gan gia tri cho mang
    int arr[5] = {1, 2, 3, 4, 5};
    int count = 0; // Dem so phan tu chan

    // In cac phan tu la so chan
    printf("Cac phan tu la so chan trong mang:\n");
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            count++;
        }
    }

    if (count == 0) { // Neu khong tim thay so chan
        printf("Mang khong chua so chan");
    }

    printf("\n");
    return 0;
}

