#include<stdio.h>
int main(){
	int a[3][3];
	printf("Nhap cac ptu cua matran 3 nhan 3:\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
		printf("Matran vua nhap la:\n");
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				printf("%d\t",a[i][j]);
			}
			printf("\n");
		}
		return 0;
}
