/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

float deQuy(float x, int n)
{
    if(n == 1)
    {
        return x;
    }
    return deQuy(x, n - 1) + pow(x, n);
}

float deQuyDuoi(float x, int n, float y = 0)
{
    if(n == 0)
        return y;
    return deQuyDuoi(x, n - 1, y + pow(x, n));
}

float khuDeQuy(float x, int n)
{
    float tong = x;
    for(int i = 2; i <= n; i++)
    {
        tong += pow(x, i);
    }
    return tong;
}
int main()
{
    float x;
    int n;

    printf("\nNhap x: "); scanf("%f", &x);
    printf("\nNhap n: "); scanf("%d", &n);

    printf("\nDe quy(%f, %d) = %f", x, n, deQuy(x, n));
    printf("\nKhu de quy(%f, %d) = %f", x, n, khuDeQuy(x, n));
    printf("\nDe quy duoi(%f, %d) = %f", x, n, deQuyDuoi(x, n));


    getch();
    return 0;
}