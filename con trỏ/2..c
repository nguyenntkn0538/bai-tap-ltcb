#include<stdio.h>
//ap dung them con tro ko thi lam tuong tu bai mang 1 chieu
int main(){
	int a[10];
	int *pt=a;
	printf("Nhap 10 so nguyen:\n");
	for(int i=0;i<10;i++){
		printf("ptu thu %d la:",i);
		scanf("%d",pt+i);

	}
	printf("Mang vua nhap:\n");
	for(int i=0;i<10;i++){
		printf("%d",*(pt+i));
	}
	printf("\n");
	return 0;
}
