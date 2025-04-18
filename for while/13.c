#include<stdio.h>
#include<math.h>// vi co pow,fabs
int main(){
	double x, eps,term, e=1.0;
	int i=1;
	double tuso,mauso;

	printf("Nhap x:");
	scanf("%lf",&x);
	printf("Nhap do chinh xac eps:");
	scanf("%lf",&eps);
		do{
			//tinh tu so x^i
			tuso=pow(x,i);
			//tinh mau so i!
			mauso=1;
			for(int j=1;j<=i;j++){
				mauso *=j;
			}
			//tinh hang tu
			term = tuso/mauso;
			// cong vao e
			e +=term;
			i++;
		}while(fabs(term)>eps);// dung lai khi term<eps
		//in
		printf("e mu %.2lf= %.7lf\n",x,e);

		return 0;

}
