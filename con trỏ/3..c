#include<stdio.h>
int main(){
	int a[10];
	int *pt=a;
		printf("Nhap 10 so nguyen:\n");
		for(int i=0;i<10;i++){
			printf("ptu thu %d la:",i);
			scanf("%d",pt+i);
		}
		int max=*pt, min=*pt;
		for(int i=0;i<10;i++){
			if(*(pt+i)>max){
				max=*(pt+i);
			}
			if(*(pt+i)<min){
				min=*(pt+i);
			}
		}
		//in kq
		printf("Gtri lon nhat la:%d\n",max);
		printf("Gtri nho nhat la:%d",min);
		return 0;

}
