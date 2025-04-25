#include <stdio.h>

int main() {
    int a, b;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);

    int tong = a + b;
    int hieu = a - b;
    int tich = a * b;

    printf("Tong: %d\nHieu: %d\nTich: %d\n", tong, hieu, tich);

    // Kiểm tra chia cho 0 trước khi tính thương
    if (b != 0) {
        int thuong = a / b;
        printf("Thuong: %d\n", thuong);

        if (a % b == 0) {
            printf("%d chia het cho %d\n", a, b);
        } else {
            printf("%d khong chia het cho %d\n", a, b);
        }
    } else {
        printf("Khong the chia cho 0!\n");
    }

    return 0;
}
