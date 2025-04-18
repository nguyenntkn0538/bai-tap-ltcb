#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Đn cấu trúc mặt hàng
typedef struct {
    char tenHang[50];
    int donGia;
    int soLuong;
    int thanhTien;
}
MatHang;

// hoán đổi 2 mặt hàng
void hoanVi(MatHang *a, MatHang *b) {
    MatHang temp = *a;
    *a = *b;
    *b = temp;
}

// Hàm sắp xếp theo tên hàng (sắp xếp tăng dần theo từ điển)
void sapXepTheoTen(MatHang ds[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(strcmp(ds[i].tenHang, ds[j].tenHang) > 0)  {
                hoanVi(&ds[i], &ds[j]);
            }
        }// strcmp ham so sanh chuoi
    }
}

// Hàm hiển thị danh sách mặt hàng
void hienThiDanhSach(MatHang ds[], int n) {
    int tongTien = 0;
    printf("\n%-5s %-15s %-10s %-10s %-10s\n", "STT", "Ten Hang", "Don gia", "So luong", "Thanh tien");
    for(int i = 0; i < n; i++) {
        printf("%-5d %-15s %-10d %-10d %-10d\n", i + 1, ds[i].tenHang, ds[i].donGia, ds[i].soLuong, ds[i].thanhTien);
        tongTien += ds[i].thanhTien;
    }
    printf("\nTong tien: %d\n", tongTien);
}

int main() {
    int n;
    printf("Nhap so luong mat hang: ");
    scanf("%d", &n);

    MatHang ds[n];

    for(int i = 0; i < n; i++) {
        printf("\nNhap thong tin mat hang thu %d:\n", i + 1);
        printf("Ten hang: ");
        scanf(" %[^\n]", ds[i].tenHang);
        printf("Don gia: ");
        scanf("%d", &ds[i].donGia);
        printf("So luong: ");
        scanf("%d", &ds[i].soLuong);
        ds[i].thanhTien = ds[i].donGia * ds[i].soLuong;
    }

    sapXepTheoTen(ds, n);
    hienThiDanhSach(ds, n);

    return 0;
}

