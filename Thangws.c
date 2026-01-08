#include <stdio.h> // Nhúng thư viện chuẩn để sử dụng hàm printf

// Khai báo prototype của hàm
int ỉn_ra_man_hinh_1(void);
void in_ra_man_hinh_2(void);
int tinh_tong(int a, int b);
double tinh_tong_double(double x, double y);

// Hàm main - điểm bắt đầu của chương trình
int main() // int = integer = số nguyên
{
    int a = ỉn_ra_man_hinh_1(); // Gọi hàm và lưu giá trị trả về vào biến a
    in_ra_man_hinh_2();         // Gọi hàm không trả về giá trị

    int b = tinh_tong(5, 10);               // Gọi hàm tính tổng
    double c = tinh_tong_double(5.5, 10.2); // Gọi hàm tính tổng cho số thực

    printf("Gia tri cua so a duoc in ra la: %d\n", a);   // In giá trị của a
    printf("Gia tri cua so a duoc in ra la: %d\n", b);   // In giá trị của b
    printf("Gia tri cua so c duoc in ra la: %.2f\n", c); // In giá trị của c với 2 chữ số thập phân

    return 0; // Trả về 0 để báo hiệu chương trình kết thúc thành công
}

int ỉn_ra_man_hinh_1()
{
    printf("Hello, I'm Kieu Tan Thang!\n"); // In thông điệp
    return 100;                             // Trả về giá trị 100
}

void in_ra_man_hinh_2()
{
    printf("Ma so sinh vien: PS47908\n");
}

int tinh_tong(int a, int b) // Hàm tính tổng hai số nguyên
{
    return a + b; // Trả về tổng của a và b
}

double tinh_tong_double(double x, double y) // Hàm tính tổng hai số thực
{
    return x + y; // Trả về tổng của x và y
}
