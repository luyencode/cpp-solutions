/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

float deQuy(int n)
{
    if(n == 1)
        return 1;
    float tong = 1;
    for(int i = 2; i <= n; i++)
    {
        tong += i;
    }
    return deQuy(n - 1) + 1/tong;
}

float deQuyDuoi(int n, float y = 1)
{
    if(n == 1)
        return y;
    float tong = 1;
    for(int i = 2; i <= n; i++)
    {
        tong += i;
    }
    return deQuyDuoi(n - 1, y + 1.0/tong);
}

float khuDeQuy(int n)
{
    float tong = 0;
    for(int i = 1; i <= n; i++)
    {
        float tong2 = 1;
        for(int j = 2; j <= i; j++)
        {
            tong2 += j;
        }
        tong += 1.0/tong2;
    }
    return tong;
}
int main()
{
    int n;
    printf("\nNhap n: "); scanf("%d", &n);

    printf("\nDe quy(%d) = %f", n, deQuy(n));
    printf("\nDe quy duoi(%d) = %f", n, deQuyDuoi(n));
    printf("\nKhu de quy(%d) = %f", n, khuDeQuy(n));

    getch();
    return 0;
}