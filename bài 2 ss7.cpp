#include <stdio.h>

int main() {
    // Khai bao mang so nguyen 5 phan tu
    int arr[5];

    // Nhap gia tri cho tung phan tu trong mang
    printf("Nhap 5 phan tu cho mang:\n");
    for (int i = 0; i < 5; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // In cac phan tu cua mang ra man hinh
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}

