#include<stdio.h>
//số hoàn hảo là số nguyên duong có tổng các ước =2 lần nó
int checksohoanhao(int n)
    {
        int sum=0;
        for(int i=1;i<=n/2;i++)
        {
            if(n%i==0)
            {
                sum +=i;
            }
        }
        return sum==n;//ktr xem tổng của các ước đó =n thì kết thúc
    }
int main(){
    int n;
    printf(" Nhap so nguyen duong n:");
    scanf("%d",&n);
    if( checksohoanhao(n))
    {
        printf("%d la so hoan hao.\n",n);
    }
    else
    {
        printf("%d khong la so hoan hao.",n);
    }
    return 0;
}

