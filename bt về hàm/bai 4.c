#include<stdio.h>
#define MAX 100
// nhap matran
void nhapmatran( int X[MAX][MAX],int hang, int cot){
	for (int i=0;i < hang;i++){
    for (int j=0;j < cot;j++){
    	printf ("X[%d %d]",i,j);
    	scanf("%d",&X[i][j]);

	}
	}
}
// in matran
void inmatran( int X[MAX][MAX],int hang, int cot){
	for (int i=0;i< hang;i++){
     for (int j=0;j<cot;j++){
    	printf("%5d",X[i][j]);
    }
	 	printf("\n");// cach dong trong matran
	}
}
// tong 2 matran
void tongmatran(int a[MAX][MAX],int b[MAX][MAX],int kq[MAX][MAX],int hang,int cot){
	for (int i=0;i< hang;i++){
    for (int j=0;j<cot;j++){
    	kq[i][j] += a[i][j]+ b[i][j];
    }
}
}
// tich 2 matran
void tichmatran(int a[MAX][MAX],int b[MAX][MAX],int kq[MAX][MAX],int hang1,int cot1,int cot2){
	for (int i=0;i<hang1;i++){
	for (int j=0;j<cot2;j++){
		kq[i][j] = 0;

	for (int k=0;k<cot1;k++){
		kq[i][j] = a[i][k] * b[k][j];
	}
	}
}
}
int main(){
	int hang1,hang2,cot1,cot2;
	int a[MAX][MAX], b[MAX][MAX], tong[MAX][MAX], tich[MAX][MAX];
	// nhap matran a,b
	printf("Nhap hang va cot cua matran a:");
	scanf("%d %d",&hang1,&cot1);
	nhapmatran(a,hang1,cot1);
	printf("Nhap hang va cot cua matran b:");
	scanf("%d %d",&hang2,&cot2);
	nhapmatran(b,hang2,cot2);

		// in matran a,b
		printf("Matran a:\n");
		inmatran(a,hang1,cot1);
		printf("Matran b:\n");
		inmatran(b,hang2,cot2);
			//tong matran(cung kich thuoc)
			if(cot1==cot2 && hang1==hang2){
				tongmatran(a,b,tong,hang1,cot1);
				printf("Tong 2 matran:");
				inmatran(tong,hang1,cot1);
			}
			else {
				printf("khong the cong nhe, 2 matran nay khac kich thuoc!");

			}
			//tich matran(cot a=dong b)
			if(cot1==hang2){
				tichmatran(a,b,tich,hang1,cot1,cot2);
				printf("Tich 2 matran:");
				inmatran(tich,hang1,cot2);
			}

			else{
				printf("khong the nhan nhe, 2matran nay cot cua matran nay khong bang hang matran kia!");

			}
			return 0;
		}
















