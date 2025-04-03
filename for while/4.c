#include<stdio.h>
int main(){
 int i;
 int sum=0 ;
 for(i=1;i<=100;i+=2)// gán cộng thêm 2 để ra lẻ
     {
         sum +=i;
     }
     printf("Tong cua cac so le 1->100 la:%d",sum);
     return 0;
}
