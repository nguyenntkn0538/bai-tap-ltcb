#include<stdio.h>
#define MAX 100
int main (){
	int a[MAX][MAX],b[MAX][MAX],c[MAX][MAX];
	int sodong,socot;
	FILE *tep;
	// nhap
	printf("Nhap so dong:");
	scanf("%d",&sodong);
	printf("Nhap so cot:");
	scanf("%d",&socot);

		printf("Nhap ma tran a(%d nhan %d):\n",sodong,socot);
		for(int i=0;i<sodong;i++){
			for(int j=0;j<socot;j++){
				printf("a[%d][%d]=",i,j);
				scanf("%d",&a[i][j]);
			}
		}
			printf("Nhap ma tran b(%d nhan %d):\n",sodong,socot);
		for(int i=0;i<sodong;i++){
			for(int j=0;j<socot;j++){
				printf("b[%d][%d]=",i,j);
				scanf("%d",&b[i][j]);
			}
		}
		//tong matran
		for(int i=0;i<sodong;i++){
			for(int j=0;j<socot;j++){
				c[i][j]=a[i][j] + b[i][j];
			}
		}
		//ghivao tep
		tep=fopen("CONG_MT.C","w");// mo
		if(tep==NULL){
			printf("Ko the mo tep de ghi \n");
			return 1;
		}
		fprintf(tep,"matran tong c=a+b:\n");// ham mowr tep
		for(int i=0;i<sodong;i++){
			for(int j=0;j<socot;j++){
				fprintf(tep,"%4d",c[i][j]);

			}
		fprintf(tep,"\n");
	}
	fclose(tep);// ham dong tep
	printf("Da ghi matran tong vao CONG_MT.C\n");
	return 0;


}
