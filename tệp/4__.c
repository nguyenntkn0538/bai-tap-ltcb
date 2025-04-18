#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char ten_hang[20];
    int don_gia;
    int so_luong;
    int thanh_tien;
} MatHang;

int main() {
    // lay tep tu b3,nen chay b3 trc
    FILE *tep;
    MatHang danh_sach[100];
    int so_mat_hang, i, tong_tien = 0;

    // Mo tep nhi phan de doc
    tep = fopen("SO_LIEU.C", "rb");
    if (tep == NULL) {
        printf("Khong mo duoc tep SO_LIEU.C!\n");
        return 1;
    }

    // Đoc so luong mat hang
    fread(&so_mat_hang, sizeof(int), 1, tep);

    // doc ds mat hang
    fread(danh_sach, sizeof(MatHang), so_mat_hang, tep);
    fclose(tep);

    // In danh sach
    printf("\n%-5s %-15s %-10s %-10s %-12s\n", "STT", "Ten Hang", "Don gia", "So luong", "Thanh tien");
    for (i = 0; i < so_mat_hang; i++) {
        printf("%-5d %-15s %-10d %-10d %-12d\n", i + 1,
               danh_sach[i].ten_hang,
               danh_sach[i].don_gia,
               danh_sach[i].so_luong,
               danh_sach[i].thanh_tien);
        tong_tien += danh_sach[i].thanh_tien;
    }

    printf("Tong tien: %d\n", tong_tien);

    return 0;
}

