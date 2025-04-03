#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float C, p, S;

    printf("Nhap a: ");
    scanf("%f", &a);
    printf("Nhap b: ");
    scanf("%f", &b);
    printf("Nhap c: ");
    scanf("%f", &c);

    // Kiểm tra xem có phải là tam giác không
    if (a + b > c && a + c > b && b + c > a)
        {
        printf("Tao thanh mot tam giac\n");

        // Xét loại tam giác
        if (a == b && b == c)
            {
                printf("Tam giac deu.\n");
            }
        else if ((a == b || a == c || b == c) && (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a))
            {
                printf("Tam giac vuong can.\n");
            }
        else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
            {
                printf("Tam giac vuong.\n");
            }
        else if (a == b || a == c || b == c)
            {
                printf("Tam giac can.\n");
            }
        else
            {
                printf("Tam giac thuong.\n");
            }

        // Tính chu vi và diện tích
        C = a + b + c;
        p = C / 2;
        S = sqrt(p * (p - a) * (p - b) * (p - c));
        printf("Chu vi: %.2f\n", C);
        printf("Dien tich: %.2f\n", S);
        }
    else
        {
            printf("Khong tao thanh tam giac.\n");
        return 1; // Kết thúc chương trình ngay lập tức nếu không phải tam giác
        }

    return 0;
}
