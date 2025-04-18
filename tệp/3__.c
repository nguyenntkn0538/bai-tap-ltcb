#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
	char ten_hang[20];
	int don_gia,so_luong,thanh_tien;
} Mathang;

int main(){
	FILE *tep;
	Mathang danh_sach[100];
	int so_mat_hang,tong_tien=0;
	//nhsp
	printf("Nhap so luong mat hang:");
	scanf("%d",&so_mat_hang);
	getchar();//xoa ki tu newline \n

	for(int i=0;i<so_mat_hang;i++){
		printf("Mat hang thu %d:\n",i+1);
		printf("Ten hang:");

		 fgets(danh_sach[i].ten_hang, sizeof(danh_sach[i].ten_hang), stdin);
        danh_sach[i].ten_hang[strcspn(danh_sach[i].ten_hang, "\n")] = '\0'; // xóa ký t? xu?ng dòng

        printf("Don gia: ");
        scanf("%d", &danh_sach[i].don_gia);
        printf("So luong: ");
        scanf("%d", &danh_sach[i].so_luong);
        getchar();
        // fgets ham doc chuoi co dau cach
        //sizeof toan tu tinh so byte
        danh_sach[i].thanh_tien = danh_sach[i].don_gia * danh_sach[i].so_luong;
        tong_tien += danh_sach[i].thanh_tien;
    }
    //ghi vao tep nhi phan
    tep=fopen("SO_LIEU.C","wb");
    if(tep==NULL){
    	printf("Ko mo duoc tep de ghi!\n");
    	return 1;
	}
	fwrite(&so_mat_hang, sizeof(int), 1, tep);
    fwrite(danh_sach, sizeof(Mathang), so_mat_hang, tep);
    fclose(tep);

    // doc lai tu tep
     tep=fopen("SO_LIEU.C","rb");
    if (tep==NULL) {
        printf("Khong mo duoc tep de doc!\n");
        return 1;
    }

    fread(&so_mat_hang, sizeof(int),1,tep);
    fread(danh_sach, sizeof(Mathang),so_mat_hang,tep);
    fclose(tep);

	// kq
	 printf("\n%-5s %-15s %-10s %-10s %-12s\n","STT","Ten Hang","Don gia","So luong","Thanh tien");
    for (int i = 0; i < so_mat_hang; i++) {
        printf("%-5d %-15s %-10d %-10d %-12d\n",i + 1,
               danh_sach[i].ten_hang,
               danh_sach[i].don_gia,
               danh_sach[i].so_luong,
               danh_sach[i].thanh_tien);
    }
    printf("Tong tien: %d\n",tong_tien);

    return 0;

}
