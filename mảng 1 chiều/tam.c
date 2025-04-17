#include<stdio.h>
int main(){
	int n1,n2;
	//nhap tung mang 1
	printf("Nhap so luong cac ptu cua mang 1:");
	scanf("%d",&n1);
	int a[n1];
	for(int i=0;i<n1;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("Nhap so luong cac ptu cua mang 2:");
	scanf("%d",&n2);
	int b[n2];
	for(int i=0;i<n2;i++){
		printf("b[%d]=",i);
		scanf("%d",&b[i]);
	}
	//mang sau gop
	int c [n1+n2];
	int i=0,j=0,k=0;
		// bat dau gop mang theo tang dan
		while(i<n1 && j<n2){
			if(a[i]<b[j]){
				c[k++]=a[i++];
			}
			else{
				c[k++]=b[j++];
			}
		}
	// neu sot ptu
	while(i<n1){
		c[k++]=a[i++];

	}
	while(j<n2){
		c[k++]=b[j++];

	}
		// in kq
		printf("Mang sau khi gop,giu tt tang dan la:\n");
		for(int i=0;i<n1+n2;i++){
			printf("%d",c[i]);
		}
	return 0;
}
