#include<stdio.h>
// tìm ucln,bcnn trước int main để tránh lỗi
int ucln(int a,int b)
    {
        while (b!=0)// kết thúc nếu b=0
        {
                int r=b;//r là hàm tạm gán
                b=a%b; //lấy dư
                a=r;
        }
        return a;//khi b=0 kết quả a là ucln
    }
int bcnn(int a,int b)
    {
        return (a*b)/ucln(a,b);
    }
int main(){
    int a,b;
    printf("nhap so nguyen 1:");
    scanf("%d",&a);
    printf("nhap so nguyen 2:");
    scanf("%d",&b);
    //in kết quả
    printf("Uoc chung lon nhat cua %d va %d la:%d\n",a,b,ucln);
    printf("Boi chung lon nhat cua %d va %d la:%d",a,b,bcnn);
    return 0;


}
