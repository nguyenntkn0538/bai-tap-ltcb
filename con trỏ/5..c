#include <stdio.h>
#include <stdlib.h>//maloc va free
// khá giong b4
int main() {
    int n, k;
    int *arr;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Khong the cap phat bo nho.\n");
        return 1;
    }
    printf("Nhap cac phan tu:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i);
        scanf("%d", arr + i);
    }
    printf("Nhap gia tri k can tim: ");
    scanf("%d", &k);
    // Tìm vtri cac pt co gtri =k
    int found = 0;
    printf("Cac vi tri co gia tri bang %d la: ", k);
    for (int i = 0; i < n; i++) {
        if (*(arr + i) == k) {
            printf("%d ", i);
            found = 1;
        }
    }
    if (!found) {
        printf("Khong co phan tu nao bang %d trong mang.", k);
    }
    printf("\n");
//giai phong bo nho
    free(arr);

    return 0;
}

