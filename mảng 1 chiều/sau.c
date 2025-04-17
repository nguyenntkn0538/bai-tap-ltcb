#include<stdio.h>
int main (){
		int n;
		printf("Nhap so luong ptu cua mang:");
		scanf("%d",&n);
		int a[n];
		printf("Nhap cac ptu cua mang di:\n");
			for(int i=0;i<n;i++){
				printf("a[%d]=",i);
				scanf("%d",&a[i]);
			}
			// am=0
			for(int i=0;i<n;i++){
				if(a[i]<0){
					a[i]=0;
				}
			}
			//in
			printf("Mang sau khi thay so am =0 la:\n");
			for(int i=0;i<n;i++){
				printf("%d",a[i]);
			}
			return 0;
}
