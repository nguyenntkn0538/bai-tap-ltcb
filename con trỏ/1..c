#include<stdio.h>
void hoandoi(float *x,float *y){
	float temp=*x;
	*x=*y;
	*y=temp;

}
int main(){
	float a,b;
	printf("Nhap gtri a:");
	scanf("%f",&a);
	printf("Nhap gtri b:");
	scanf("%f",&b);
	printf("Truoc khi hoan doi la a=%.2f\n b=%.2f\n",a,b);
		hoandoi(&a,&b);
	printf("Sau khi hoan doi la a=%.2f\n b=%.2f\n",a,b);

return 0;

}
