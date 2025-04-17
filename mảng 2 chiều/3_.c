
#include<stdio.h>
int main(){
	int a[100][100],b[100][100],c[100][100];
	int n,m,p;
	// nhap kich thuoc matran
	printf("Kich thuoc matran a(n nhan m):\n");
	printf("Nhap n:");
	scanf("%d",&n);
	printf("Nhap m:");
	scanf("%d",&m);
	printf("Kich thuoc matran b(m nhan p):\n");
	printf("Nhap p:");
	scanf(" %d",&p);
	// nhap matra
	printf("Nhap matran a (%d nhan %d):\n",n,m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("a[i][j]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Nhap matran b (%d nhan %d):\n",m,p);
	for(int i=0;i<m;i++){
		for(int j=0;j<p;j++){
			printf("b[i][j]=",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	// tinh matran c
	for(int i=0;i<n;i++){
		for(int j=0;j<p;j++){
			c[i][j]=0;
			for(int k=0;k<m;k++){
				c[i][j] += a[i][k] *b[k][j];
			}
		}
	}
	//in
	printf("Ma tran c=a*b la:\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<p;j++){
			printf("%d\t",c[i][j]);

		}
		printf("\n");
	}
	return 0;

}
