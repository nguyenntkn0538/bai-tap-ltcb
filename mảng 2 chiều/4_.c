#include<stdio.h>
int main(){
	// matran xoan oc
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	int a[100][100];
	int val=1, tren=0,duoi=n-1,trai=0,phai=n-1;
	// xet matran theo vong xoan oc
		while( val <= n*n){
			// trai sang phai
			for(int i=trai;i<=phai;i++){
				a[tren][i] =val++;
			}
			tren ++;


		// tren xuong duoi
		for(int i=tren;i<=duoi;i++){
			a[i][phai] =val++;

		}
		phai--;

		// phai sang trai
		for(int i=phai;i>=trai;i--){
			a[duoi][i] =val++;
		}
		duoi--;
		//duoi len tren
		for(int i=duoi;i>=tren;i--){
			a[i][trai] =val++;
		}
		trai++;
 	}
 	//in kq
 	printf("Matran xoan oc %d nhan %d:\n",n,n);
 	for(int i=0;i<n;i++){
 		for(int j=0;j<n;j++){
 			printf("%3d",a[i][j]);
		 }
		 printf ("\n");
	 }
 	return 0;
}
