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
		int x,dem=0;
		printf("Nhap x can tim:");
		scanf("%d",&x);
		// dem x
			for(int i=0;i<n;i++){
				if(a[i]==x){
					dem++;
				}
			}

			if(dem==0){
				printf("ptu %d ko xuat hien trong mang\n",x);

			}
			else{
				printf("ptu %d xuat hien %d lan trong mang",x,dem);

			}
			return 0;
	}

