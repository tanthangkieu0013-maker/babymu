#include <stdio.h>
// Function prototypes
int function_example(void);
void function_example2(void);

int tinh_tong(int a, int b);

// int = integer = số nguyên

int main()
{
    int a = function_example();
    function_example2();

    int b = tinh_tong(5, 10);

    printf("Gia tri duoc in ra la: %d\n", a);

    return 0;
}

int function_example()
{
    // This is an example function
    printf("Hello, I'm Kieu Tan Thang!\n");
    return 10;
}

void function_example2()
{
    // This is an example function
    printf("Ma so sinh vien: PS47908\n");
}

int tinh_tong(int a, int b)
{
    return a + b;
}
