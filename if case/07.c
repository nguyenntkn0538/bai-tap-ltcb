#include<stdio.h>

using namespace std;
int main(){
float DTB;
printf(" Nhap diem:");
scanf("%f",&DTB);
if(DTB>9)
    {
        printf(" Xep loai: Xuat sac");
    }
else if(DTB>=7 && DTB<8)
    {
        printf(" Xep loai: Kha");
    }
else if(DTB>=5 && DTB<7)
    {
    printf(" Xep loai: Trung binh");
    }
else
    {
    printf(" Xep loai: Yeu");
    }
return 0;
}
