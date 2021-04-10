/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

float deQuy(float x, int n)
{
    if(n == 0)
    {
        return x ;
    }
    return deQuy(x, n - 1) + pow(x,2 * n + 1);
}


float khuDeQuy(float x, int n)
{
    float tong = 0;
    for(int i = 0; i <= n; i++)
    {
        tong += pow(x, 2 * i + 1);
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
    


    getch();
    return 0;
}