#include<stdio.h>
#include<math.h>
// lai kép S=A nhan (1+r)^n
int main(){
	double tien_goc, lai_suat_thang=0.0045, so_tien_sau_n_thang;
	int so_thang;
	printf("Nhap so tien gui(dong):");
	scanf("%lf",&tien_goc);
	printf("Nhap so thang gui:");
	scanf("%d",&so_thang);
	// tinh lai kep theo ct
	so_tien_sau_n_thang = tien_goc * pow(1+lai_suat_thang,so_thang);

	// in
	printf("So tien sau %d thang la:%.2lf",so_thang,so_tien_sau_n_thang);

	return 0;
}
