#include<stdio.h>
int main(){
	int a[3][3],b[3][3],c[3][3];
	// nhap cac matran
	printf("Nhap cac ptu cua matran a(3 nhan 3):\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Nhap cac ptu cua matran b(3 nhan 3):\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("b[%d][%d]=",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	// tinh matran c
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			c[i][j]=a[i][j]+b[i][j];

		}
	}
	//in
	printf("Tong 2 matran a+b=c la :\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
