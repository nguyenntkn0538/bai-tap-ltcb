#include<stdio.h>//tính đệ quy n! chỉ ở số nguyên dương
int factorial(int n){
    if(n==0||n==1)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}
int main(){
double n;
printf("Nhap n  nguyen duong de:");
scanf("%lf",&n);
    if(floor(n)!=n)

    {
        printf("Giai thua chi duoc tính theo so nguyen thoi nhe.\n");
    }
    else if(n<0)
    {
        printf("Loi roi!Nhap n nguyen duong co ma!\n");

    }else
    {
    printf("Gia tri cua (n!)%lf!=%llu",n,factorial(n));
    }

     return 0;
}

