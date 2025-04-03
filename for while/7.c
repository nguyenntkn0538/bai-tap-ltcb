#include<stdio.h>
int main(){
 int N;
 double S=0.0;// xét cho chi tiết
 printf("Nhap N:");
 scanf("%d",&N);
 //CH? Tính tổng S=1+1/2+1/3+...+1/N
 for(int i=1;i<=N;i++)
    {
        S +=1.0/i;// gán từng phần tử theo S
    }
    printf("Tong S=%.4lf\n",S);
    return 0;
}
