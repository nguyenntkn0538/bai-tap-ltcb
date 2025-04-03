#include<stdio.h>
#include<math.h>
int main(){
int n,i;
//Số nguyên tố là một số tự nhiên lớn hơn 1 và chỉ có hai ước số dương duy nhất là 1 và chính nó
    printf(" Moi nhap so de kiem tra:");
    scanf("%d",&n);
    if(n<2)
        {
            printf(" %d khong phai so nguyen to.\n",n);
        }
     else if(n==2) // phải xét riêng =2 vì là số chẵn duy nhất
        {
             printf(" %d la so nguyen to.\n",n);
        }
     else
        {
            for(i=2;i <= sqrt(n);i++)
            {
                if(n%i==0)
                {
                    printf(" %d khong la so nguyen to.\n",n);
                    return 0;// có thể kết thúc luôn chương trình ở đây
                }
            }
         printf("%d la so nguyen to.\n",n);
        }
        return 0;
}

