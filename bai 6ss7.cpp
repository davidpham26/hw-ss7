#include <stdio.h>

int main() {
    // Khai bao va gan gia tri cho mang
    int arr[5] = {1, 2, 3, 4, 5};

    // Thay doi mang: so le +2, so chan +3
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            arr[i] += 3; // So chan tang 3
        } else {
            arr[i] += 2; // So le tang 2
        }
    }

    // In mang moi
    printf("Mang sau khi thay doi:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

