
#include <stdio.h>
#include <stdlib.h> //  malloc và free
int main() {
    int n;
    int *ptr;
    printf("Nhap so luong  ptu cua mang: ");
    scanf("%d",&n);

    // cap phat bo nho mang
    ptr = (int*)malloc(n*sizeof(int));//sizeof toan tu kich thuoc
    if (ptr == NULL){// null hang so mang khi ko toi kq nao {
        printf("Khong the cap phat bo nho.\n");
        return 1;
    }
    // Nhap
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0;i<n;i++) {
        printf("Phan tu thu %d: ",i);
        scanf("%d",ptr+i);
    }
		//sap xep tang dan bg con tro
    for (int i = 0;i<n-1;i++) {
        for (int j = i + 1;j<n; j++) {
            if (*(ptr + i) > *(ptr + j)) {
                int temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }

    // In
    printf("Mang sau khi sap xep tang dan:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    // Giai phong bo nho
    free(ptr);

    return 0;
}

