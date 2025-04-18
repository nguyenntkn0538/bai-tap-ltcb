#include<stdio.h>
#include<math.h>
int main(){
	float x,rad,eps;
    int i=0;
    float sinx=0,term;// term la so hang
    long long k;// khai bao ptu, tranh tran
    printf("Nhap x( do ):");
    scanf("%f",&x);
    printf("Nhap do chinh xac eps:");
    scanf("%f",&eps);
    // chuyen sang radian
    rad= x*3.14/180;
    do{
	    // tinh(2i+1)
    	k=1;
    	for(int j=1;j<= 2*i+1;j++){
    		k *=j;
		}

	//hang thu i cua chuoi
	term= pow(-1,i) * pow(rad, 2*i+1)/k;
	// cong vao tong
	sinx +=term;
	 i++;
    }while(fabs(term) > eps);// dung khi term <= eps
	// in
	printf("Gtri gan dung cua sin(%.2f) la:%.4f\n",x,sinx);

	return 0;

}
