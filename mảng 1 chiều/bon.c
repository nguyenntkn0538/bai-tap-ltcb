#include<stdio.h>
int main(){
	int n;
	printf("Nhap so luong phan tu cua mang di:");
	scanf("%d",&n);
	 int a[n];
	 printf("Nhap cac phan tu cua mang: \n");
	for(int i=0;i<n;i++){
		printf("a[%d] :",i);
		scanf("%d",&a[i]);
	}

 	int max=a[0],min=a[0];
 	int vtrimax=0, vtrimin=0;
 	//tim ptu max,min
 		for(int i=1;i<n;i++){
 			if(a[i]>max){
 				max=a[i];
 				vtrimax=i;
			 }
			 if(a[i]<min){
			 	min=a[i];
			 	vtrimin=i;
			 }
		 }
		  printf("\nPhan tu lon nhat la %d tai vi tri %d\n", max, vtrimax);
    printf("Phan tu nho nhat la %d tai vi tri %d\n", min, vtrimin);

    return 0;
}


