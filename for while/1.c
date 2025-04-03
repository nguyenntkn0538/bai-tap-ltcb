#include<stdio.h>
int main(){
int tong=0,so,i;
printf("Nhap 10 so nguyen la:\n");
//vì sử dụng for nên ko cần scanf ở đây
for(i=0;i<10;i++)
        {
            printf("So thu %d:",i+1);
            scanf("%d",&so);
            tong +=so;
            //+n là hàm gán tổng
        }
        printf("Tong cua 10 so nguyen la:%d\n",tong);
        return 0;

}
