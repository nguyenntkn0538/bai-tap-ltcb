#include<stdio.h>
int main (){
int n;//fibonaci là dãy số nguyên
printf("Nhap so nguyen duong n(n>2):");
scanf("%d",&n);
    if(n<=2)
    {
        printf(" Loi! Vui long nhap dung so nguyen duong n>2!/n");
        return 1;
    }
    int f1=1,f2=1,fn;
    for (int i=3;i<=n;i++)
    {
        fn=f1+f2;//fn=f(n-1)+f(n-2)
        f1=f2;//cập nhật dô f(n-1)
        f2=fn;//tương tự f(n-2)
    }
    printf("So thu %d cua day fibonaci la:%d\n",n,fn);
    return 0;
}
