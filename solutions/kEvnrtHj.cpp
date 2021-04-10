/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

float Tinh(float x, int n)
{
    if(n == 0)
        return 0;
    if(n == 1)
        return x;
    return (1 + x/n) * Tinh(x, n - 1) - (x/n) * Tinh(x, n - 2);
}
int main()
{
    float x;
    int n;

    printf("\nNhap x: "); scanf("%f", &x);
    printf("\nNhap n: "); scanf("%d", &n);

    float kq = Tinh(x, n);
    printf("\nKet qua = %.2f", kq);

    getch();
    return 0;
}