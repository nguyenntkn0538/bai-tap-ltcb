#include<stdio.h>
int main(){
int nam,thang,songay;
printf(" nhap nam:");
scanf("%d",&nam);
printf(" nhap thang:");
scanf("%d",&thang);
// kiểm tra số ngày sử dụng hàm switch case
        switch(thang)
        {
// tháng 1,,3,5,7,8,10,12 có 31 ngày
                case 1: case 3: case 5: case 7: case 8: case 10: case 12: songay=31;break;
// trừ tháng 2 thì 30 ngày
                case 4: case 6: case 9: case 11: songay=30;break;
// xét tháng 2
                case 2:
                    // xét năm nhuận và ko nhuận( nhuận có 4 quý)
                    if(nam%4==0 && nam%100!=0 || nam%400==0)
                        {
                            songay=29;
                        }
                      else
                        {
                            songay=28;break;
                        }

                default:
                        printf(" Thang khong hop le!\n");
                    return 1;//kết thúc ngay vì mã lỗi
        }
                    // cho ra kết quả
                    printf(" Thang %d nam %d co %d ngay.\n",thang,nam,songay);
        return 0;


}
