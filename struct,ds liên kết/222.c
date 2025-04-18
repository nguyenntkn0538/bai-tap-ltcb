#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Cấu trúc sinh viên
typedef struct SinhVien {
    char hoTen[50];
    int tuoi;
    float diemTB;
    struct SinhVien* keTiep;
} SinhVien;

// Tạo node sinh viên mới
SinhVien* taoSinhVien(char hoTen[], int tuoi, float diemTB) {
    SinhVien* sv = (SinhVien*)malloc(sizeof(SinhVien));
    strcpy(sv->hoTen, hoTen);
    sv->tuoi = tuoi;
    sv->diemTB = diemTB;
    sv->keTiep = NULL;
    return sv;
}

// Thêm sinh viên vào cuối danh sách
void themCuoi(SinhVien** dauDanhSach, SinhVien* svMoi) {
    if (*dauDanhSach == NULL) {
        *dauDanhSach = svMoi;
    } else {
        SinhVien* tam = *dauDanhSach;
        while (tam->keTiep != NULL) {
            tam = tam->keTiep;
        }
        tam->keTiep = svMoi;
    }
}

// In danh sách sinh viên
void inDanhSach(SinhVien* dauDanhSach) {
    int stt = 1;
    printf("\n%-5s %-20s %-10s %-10s\n", "STT", "Ho ten", "Tuoi", "Diem TB");
    while (dauDanhSach != NULL) {
        printf("%-5d %-20s %-10d %-10.2f\n", stt++, dauDanhSach->hoTen, dauDanhSach->tuoi, dauDanhSach->diemTB);
        dauDanhSach = dauDanhSach->keTiep;
    }
}

// Chèn sinh viên trước một sinh viên có tên cho trước
void chenTruoc(SinhVien** dauDanhSach, char tenCanTim[], SinhVien* svMoi) {
    if (*dauDanhSach == NULL) return;

    // Nếu chèn trước đầu danh sách
    if (strcmp((*dauDanhSach)->hoTen, tenCanTim) == 0) {
        svMoi->keTiep = *dauDanhSach;
        *dauDanhSach = svMoi;
        return;
    }

    SinhVien* truoc = *dauDanhSach;
    SinhVien* hienTai = (*dauDanhSach)->keTiep;

    while (hienTai != NULL) {
        if (strcmp(hienTai->hoTen, tenCanTim) == 0) {
            svMoi->keTiep = hienTai;
            truoc->keTiep = svMoi;
            return;
        }
        truoc = hienTai;
        hienTai = hienTai->keTiep;
    }

    printf("Khong tim thay sinh vien co ten '%s'\n", tenCanTim);
}

// Xóa sinh viên theo tên
void xoaSinhVien(SinhVien** dauDanhSach, char tenCanXoa[]) {
    if (*dauDanhSach == NULL) return;

    // Nếu là node đầu
    if (strcmp((*dauDanhSach)->hoTen, tenCanXoa) == 0) {
        SinhVien* tam = *dauDanhSach;
        *dauDanhSach = (*dauDanhSach)->keTiep;
        free(tam);
        return;
    }

    SinhVien* truoc = *dauDanhSach;
    SinhVien* hienTai = (*dauDanhSach)->keTiep;

    while (hienTai != NULL) {
        if (strcmp(hienTai->hoTen, tenCanXoa) == 0) {
            truoc->keTiep = hienTai->keTiep;
            free(hienTai);
            return;
        }
        truoc = hienTai;
        hienTai = hienTai->keTiep;
    }

    printf("Khong tim thay sinh vien co ten '%s'\n", tenCanXoa);
}

// Menu chức năng
int main() {
    SinhVien* danhSach = NULL;
    int luaChon;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Them sinh vien\n");
        printf("2. In danh sach\n");
        printf("3. Chen sinh vien truoc ten cho truoc\n");
        printf("4. Xoa sinh vien theo ten\n");
        printf("0. Thoat\n");
        printf("Lua chon: ");
        scanf("%d", &luaChon);
        getchar(); // Xóa ký tự '\n'

        if (luaChon == 1) {
            char ten[50];
            int tuoi;
            float diem;
            printf("Nhap ho ten: ");
            fgets(ten, sizeof(ten), stdin);
            ten[strcspn(ten, "\n")] = 0;
            printf("Nhap tuoi: ");
            scanf("%d", &tuoi);
            printf("Nhap diem TB: ");
            scanf("%f", &diem);
            getchar();

            SinhVien* svMoi = taoSinhVien(ten, tuoi, diem);
            themCuoi(&danhSach, svMoi);
        } else if (luaChon == 2) {
            inDanhSach(danhSach);
        } else if (luaChon == 3) {
            char tenChen[50];
            printf("Nhap ten sinh vien muon chen truoc: ");
            fgets(tenChen, sizeof(tenChen), stdin);
            tenChen[strcspn(tenChen, "\n")] = 0;

            char tenMoi[50];
            int tuoi;
            float diem;
            printf("Nhap ho ten moi: ");
            fgets(tenMoi, sizeof(tenMoi), stdin);
            tenMoi[strcspn(tenMoi, "\n")] = 0;
            printf("Nhap tuoi: ");
            scanf("%d", &tuoi);
            printf("Nhap diem TB: ");
            scanf("%f", &diem);
            getchar();

            SinhVien* svMoi = taoSinhVien(tenMoi, tuoi, diem);
            chenTruoc(&danhSach, tenChen, svMoi);
        } else if (luaChon == 4) {
            char tenXoa[50];
            printf("Nhap ten sinh vien muon xoa: ");
            fgets(tenXoa, sizeof(tenXoa), stdin);
            tenXoa[strcspn(tenXoa, "\n")] = 0;
            xoaSinhVien(&danhSach, tenXoa);
        }

    } while (luaChon != 0);

    return 0;
}
