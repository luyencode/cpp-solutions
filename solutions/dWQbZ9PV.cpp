/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define eps 1e-4 // Sai số
int main()
{
    float S, T, x, LuyThua, GiaiThua;
    int i, Dau = -1;

    printf("\nNhap x(radian): ");
    scanf("%f", &x);

    GiaiThua = 1;
    S = T = LuyThua = x;
    for(i = 3; T > eps; i += 2, Dau = -Dau)
    {
        T = (LuyThua *= x * x) / (GiaiThua *= i * (i - 1));
        S += Dau * T;
    }
    printf("\nCong thuc Taylor: sin (%.2f) = %.4f", x, S);
    printf("\nSin () cua math.h: sin(%.2f) = %.4f", x, sin(x));


    getch();
    return 0;
}