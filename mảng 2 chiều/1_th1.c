#include <stdio.h>

int main() {
    int a[3][3] = {
        {2, 4, 6},
        {4, 5, 6},  // vi nhap san
        {3, 8, 5}
    };

    printf("Ma tran 3x3 (da khai bao san gia tri):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

