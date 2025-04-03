
#include<stdio.h>
double power(double x,double y)
{
	if(y==0)
		{
			return 1;
		}
	else{
		return x*power(x,y-1);
		}
}
int main(){
	double x,y;
	printf("Nhap x va y:");
	scanf("%lf %lf",&x,&y);

	printf("gia tri x^y %lf^%lf la:%.2lf",x,y,power(x,y));
	return 0;

}
