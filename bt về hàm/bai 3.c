#include<stdio.h>
//fibonacci là các số nguyên
int fibonacci(int n){
    if(n<0){
        printf("gia tri kohop le roi!n nguyen >=0 nha!\n");
        return -1;
    }
    else if(n==0){
            return 0;
    }
    else if(n==1){
        return 1;
    }
    else {
        return fibonacci(n-1)+fibonacci(n-2);//đệ quy
    }
}
int main(){
    int n;
    printf(" gia tri n nhap do de tinh phan tu n trong day fibonacci:");
    scanf("%d",&n);
    if (fibonacci(n)!=1){
        printf("phan tu thu %d trong day fibonacci la:%d\n",n,fibonacci(n));
    }
    return 0;
}
