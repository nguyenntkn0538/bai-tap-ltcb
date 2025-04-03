#include<stdio.h>
//xét hàm in ở cs 2
void printfbinary(int n) { // Hàm đệ quy
    if(n > 1) {
        printfbinary(n >> 1); // n/2
    }
    printf("%d", n & 1);
    }// In ra bit <<

int main() {
    int n;
    printf("Nhap so nguyen duong: ");
    scanf("%d", &n);

    // Kiểm tra n có phải là số nguyên dương
    if(n < 0) {
        printf("Loi! Hay nhap so nguyen duong!");
        return 1;
    } else {
        // In ra các hệ cơ số
        printf("So %d trong he co so 2: ", n);
        printfbinary(n); // Gọi hàm in nhị phân
        printf("\nSo %d trong he co so 8: %o\n", n, n); // %o tính hệ cơ số 8
        printf("So %d trong he co so 16: %X\n", n, n); // %X tính hệ cơ số 16
        return 0;
    }
}

