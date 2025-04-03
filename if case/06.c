#include<stdio.h>
#include<math.h>
using namespace std;
// tính định thức trong đại số tuyến tính
int main(){
float a,b,c,d,e,f;
printf(" Nhap a:");
scanf("%f",&a);
printf(" Nhap b:");
scanf("%f",&b);
printf(" Nhap c:");
scanf("%f",&c);
printf(" Nhap d:");
scanf("%f",&d);
printf(" Nhap e:");
scanf("%f",&e);
printf(" Nhap f:");
scanf("%f",&f);
// cần tính det của các thành phần trong hệ
 float D,D1,D2,x,y;
// a b c
// d e f
// D,D1,D2 làn lượt là các det
D=a*e-b*d;
D1=b*f-c*e;
D2=a*f-c*d;
// xét các trường hợp trong hệ cramer
if(D!=0)
    {
        printf(" He phuong trinh co nghiem duy nhat:");
        x=D1/D;
        y=D2/D;
        printf("x=%.2f\n y=%.2f",x,y);
    }
else if(D1==0 && D2==0)
    {
        printf(" He phuong trinh co vo so nghiem.");
    }
else
    {
        printf(" He phuong trinh vo nghiem.");
    }
return 0;

}
