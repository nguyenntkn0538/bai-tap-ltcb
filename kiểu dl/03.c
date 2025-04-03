#include<stdio.h>
#include<math.h>
int main(){
int a,b;
printf("Nhap a:");
scanf("%d",&a);
printf("Nhap b:");
scanf("%d",&b);
int tong=a+b,hieu=a-b,tich=a*b,thuong=a/b;
    //xét các th của thương
    if(a!=0 || b!=0)
    {
        printf("Tong:%d\nHieu:%d\nTich:%d\nThuong:%d",tong,hieu,tich,thuong);

    }
    else if(a%b==0)
        {
            printf("%d chia het cho %d",a,b);
        }
        else
        {
            printf("%d khong chia het cho %d",a,b);
        }
        // lưu ý so sánh vơi số 0

    return 0;
}
