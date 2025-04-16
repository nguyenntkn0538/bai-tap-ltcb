#include<stdio.h>
// thap phan sang co so (2,8,16)
void doicoso(int n, int base,char res[]){

//base he co so dem 
	int i=0;
		if(n==0){
			printf("0");
			return ;
		}
		while (n>0){
			int du=n%base;
				if(du<10){
					res[i]=du +'0';// 0->9
				}
				else{
					res[i]=du+'A';//A->F cs16
				}
			i++;
			n=n/base;
		}
		// dao res
		int j;
		for( j=i-1;j>=0;j--){
			printf("%c",res[j]);
			
		}
		
}
	int main (){
		int m;
		char res[100];
		printf("Nhap 1 so nguyen duong:");
		scanf("%d",&m);
		
		printf("he nhi phan(cs 2):");
		doicoso(m,2,res);
		printf("\n");
		printf("he bat phan(cs8):");
		doicoso(m,8,res);
		printf("\n");
		printf("he thap luc phan(cs16):");
		doicoso(m,16,res);
		return 0;
		
		
	}







