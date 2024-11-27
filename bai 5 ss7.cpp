#include <stdio.h>

int main() {
    // Khai bao va gan gia tri cho mang
    int arr[5] = {3, 7, 2, 9, 5};

    // Khoi tao gia tri lon nhat va nho nhat bang phan tu dau tien
    int max = arr[0];
    int min = arr[0];

    // Duyet mang de tim gia tri lon nhat va nho nhat
    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Cap nhat gia tri lon nhat
        }
        if (arr[i] < min) {
            min = arr[i]; // Cap nhat gia tri nho nhat
        }
    }

    // In ket qua
    printf("Phan tu lon nhat trong mang: %d\n", max);
    printf("Phan tu nho nhat trong mang: %d\n", min);

    return 0;
}

