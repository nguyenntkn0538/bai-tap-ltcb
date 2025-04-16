#include<stdio.h>
int main(){
	int a[10];
	printf("Nhap 10 phan tu cua mang: \n");
	for(int i=0;i<10;i++){
		printf("ptu thu %d :",i+1);
		scanf("%d",&a[i]);
	}
	// intheo hang ngang
	printf("Mang vua nhap:\n");
	for(int i=0;i<10;i++){
		printf("%d",a[i]);
	}
	printf ("\n");
	return 0;
}
