#include<stdio.h>// kết hợp bài 7 và 8
int main(){
int n;
double sum=0.0,factory=1.0;//ko có (n) khác đôi chút so với bài 8
printf("Nhap gia tri cua n:");
scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        factory *=i;
        sum +=1.0/factory;
    }
printf("Tong S=%.4lf\n",sum);
return 0;
}


