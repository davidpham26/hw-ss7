#include <stdio.h>

int main() {
    int n; // So phan tu cua mang

    // Nhap so phan tu cua mang
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n]; // Khai bao mang voi n phan tu

    // Nhap gia tri tung phan tu cua mang
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // In cac phan tu vua nhap
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}

