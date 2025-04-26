#include<stdio.h>
#define MAX 100
int main (){
	int a[MAX][MAX],b[MAX][MAX],c[MAX][MAX];
	int sodonga,socota,sodongb,socotb;
	FILE *tep;
	// nhap
	printf("Nhap so dong matran a:");
	scanf("%d",&sodonga);
	printf("Nhap so cot matran a:");
	scanf("%d",&socota);
	printf("Nhap so dong matran b:");
	scanf("%d",&sodongb);
	printf("Nhap so cot matran b:");
	scanf("%d",&socotb);
		if(socota !=sodongb){
			printf("Ko the nhan matran! so cot a phai bang so dong b!\n");
		}

		printf("Nhap ma tran a(%d nhan %d):\n",sodonga,socota);
		for(int i=0;i<sodonga;i++){
			for(int j=0;j<socota;j++){
				printf("a[%d][%d]=",i,j);
				scanf("%d",&a[i][j]);
			}
		}
			printf("Nhap ma tran b(%d nhan %d):\n",sodongb,socotb);
		for(int i=0;i<sodongb;i++){
			for(int j=0;j<socotb;j++){
				printf("b[%d][%d]=",i,j);
				scanf("%d",&b[i][j]);
			}
		}
		// tichmatran
		for(int i=0;i<sodonga;i++){
			for(int j=0;j<socotb;j++){
				c[i][j]=0;

			for(int k=0;k<socota;k++){
				c[i][j]=a[i][k] * b[k][j];
			}
		}
	}
		//ghivao tep
		tep=fopen("TICH_MT.C","w");// mo
		if(tep==NULL){
			printf("Ko the mo tep de ghi \n");
			return 1;
		}
		fprintf(tep,"matran tich c=a*b:\n");// ham mowr tep
		for(int i=0;i<sodonga;i++){
			for(int j=0;j<socotb;j++){
				fprintf(tep,"%4d",c[i][j]);

			}
		fprintf(tep,"\n");
	}
	fclose(tep);// ham dong tep
	printf("Da ghi matran tich vao TICH_MT.C\n");
	return 0;


}

