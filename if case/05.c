#include <stdio.h>
#include <math.h>

using namespace std;
int main() {
    float a, b, c, delta, x1, x2;
    printf("Nhap a: ");
    scanf("%f",&a);
    printf("Nhap b: ");
    scanf("%f",&b);
    printf("Nhap c: ");
    scanf("%f",&c);
    delta = b*b-4*a*c;
    if(delta>0)
        {
            printf(" Phuong trinh co hai nghiem:\n");
            x1=(-b+sqrt(delta))/2*a;
            x2=(-b-sqrt(delta))/2*a;
            printf("x1=%.2f\n",x1);
            printf("x2=%.2f",x2);
        }
    else if(delta==0)
        {
            printf(" Phuong trinh co nghiem kep:");
            x1=x2=(-b)/2*a;
            printf("x1=x2=%2f",x1,x2);

        }
    else
        {
            printf(" Phuong trinh vo nghiem.");

        }
    return 0;
    }
