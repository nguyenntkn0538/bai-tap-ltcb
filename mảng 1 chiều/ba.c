#include<stdio.h>
int main(){
	int a[10];
	int sum=0,sumduong=0,sumam=0;
	int demduong=0,demam=0;
	float tbc,tbcduong,tbcam;
	printf("Nhap 10 phan tu cua mang: \n");
	for(int i=0;i<10;i++){
		printf("ptu thu %d :",i+1);
		scanf("%d",&a[i]);
		//sum tat ca so trong mang
		sum +=a[i];
		// tong va dem so luong duong,am
		if(a[i]>0){
			sumduong +=a[i];
			demduong ++;
		}
		else if(a[i]<0){
			sumam +=a[i];
			demam ++;
		}

	}
			// tbc
			tbc=(float)sum/10;
			tbcduong=(demduong>0)? (float)sumduong/demduong :0;
			tbcam=(demam>0)? (float)sumam/demam :0;

			// in kq can tim
			printf("Tong tat ca cac so tren mang:%d\n",sum);
			printf("Tong cac so duong:%d\n",sumduong);
			printf("Tong cac so am:\n",sumam);
			printf("Trung binh cong ca mang:%.2f\n",tbc);
			printf("Trung binh cong cac so duong:%.2f\n",tbcduong);
			printf("Trung binh cong cac so am:%.2f",tbcam);

		   	return 0;
}
