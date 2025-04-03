#include<stdio.h>
// số nguyên ko dấu
unsigned long long int factory(int n)
{
unsigned long long int result =1;// quy ước khởi giá trị
for (int i=2;i<=n;i++)
    {
        result *=i;//gán nhân
    }
    return result;
}
int main (){
int n;
printf("Nhap so nguyen duong n:");
scanf("%d",&n);
    if(n<0)
    {
        printf("Loi!Vui long nhap so nguyen duong n!\n");
    }
    else
    {
        printf("Giai thua cua %d la %llu\n",n,factory(n));
    }
return 0;
}
