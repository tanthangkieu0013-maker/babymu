#include <stdio.h> // Nhúng thư viện chuẩn để sử dụng hàm printf

int ỉn_ra_man_hinh_1(void);
void in_ra_man_hinh_2(void);
int tinh_tong(int a, int b);

// int = integer = số nguyên

int main()
{
    int a = ỉn_ra_man_hinh_1(); // Gọi hàm
    in_ra_man_hinh_2();

    int b = tinh_tong(5, 10);

    printf("Gia tri duoc in ra la: %d\n", a);

    return 0;
}

int ỉn_ra_man_hinh_1()
{
    // This is an example function
    printf("Hello, I'm Kieu Tan Thang!\n");
    return 10;
}

void in_ra_man_hinh_2()
{
    // This is an example function
    printf("Ma so sinh vien: PS47908\n");
}

int tinh_tong(int a, int b)
{
    return a + b;
}
