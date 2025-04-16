#include<stdio.h>
#include<math.h>
#define MAX 100
void nhapdathuc(float hso[],int*bac){
	printf("Nhap bac da thuc:");
	scanf("%d",&*bac);
	printf("Nhap cac hso cua da thuc(bac cao->thap):\n");
	for(int i=*bac;i>=0;i--){
		printf("He so x^%d:",i);
		scanf("%f",&hso[i]);
	}
}
void indathuc(float hso[],int bac){
    int da_in=0;
	for(int i=bac;i>=0;i--){
		if(hso[i] != 0){
			 if (da_in && hso[i] > 0) {
                printf(" + ");
            }
            else if (hso[i] < 0) {
                printf(" - ");
            }

            float val = fabs(hso[i]);

            if (i == 0) printf("%.2f", val);
            else if (i == 1) printf("%.2fx", val);
            else printf("%.2fx^%d", val, i);

            da_in = 1;
        }
    }
    if (!da_in) printf("0");
    printf("\n");
}

//tinh gtri dthua
float tinhgtridathuc(float hso[],int bac,float x){
	float kq=0;
	for(int i=0;i<=bac;i++){
		kq +=hso[i] * pow(x,i);
	}
	return kq;
}
float sumdathuc(float hso1[],int bac1,float hso2[],int bac2,float hsosum[]){
	int bacT=(bac1>bac2) ? bac1:bac2;
	for(int i=0;i<=bacT;i++){
		float a = (i <= bac1) ? hso1[i] : 0;
        float b = (i <= bac2) ? hso2[i] : 0;
        hsosum[i] = a + b;
    }
    return bacT;

}
int main(){
	float hsoP[MAX],hsoQ[MAX],hsosumT[MAX],x;
	int bacP,bacQ,bacT;
	//nhap
	printf("Nhap da thuc P:\n");
	nhapdathuc(hsoP,&bacP);

	printf("Nhap da thuc Q:\n");
	nhapdathuc(hsoQ,&bacQ);
	printf("Nhap gtri x:");
	scanf("%f",&x);
    bacT = sumdathuc(hsoP,bacP,hsoQ,bacQ,hsosumT);
	//in
	printf("Da thuc P:\n");
	indathuc(hsoP,bacP);
	printf("Da thuc Q:\n");
	indathuc(hsoQ,bacQ);
	printf("Da thuc T:\n");
	indathuc(hsosumT,bacT);
	// tinh
		printf("Gtri P(%.2f)=%.2f\n",x,tinhgtridathuc(hsoP,bacP,x));
		printf("Gtri Q(%.2f)=%.2f\n",x,tinhgtridathuc(hsoQ,bacQ,x));
		printf("Gtri T(%.2f)=%.2f",x,tinhgtridathuc(hsosumT,bacT,x));

	return 0;
}

