/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>


float tinhTong(int n) // đệ quy
{
    if(n == 1)
        return 1;
    return tinhTong(n - 1) + 1.0 / n;
}

float tinhTong_2(int n, float x = 1)  // đệ quy đuôi
{
    if(n == 1)
        return x;
    return tinhTong_2(n - 1, x +  1.0 / n);
}

float tinhTong_3(int n) // khử đệ quy
{
    float tong = 1;
    for(int i = 2; i <= n; i++)
    {
        tong += 1.0 / i;
    }
    return tong;
}
int main()
{
    int n;
    printf("\nNhap n: "); scanf("%d", &n);

    printf("\nKhu de quy(%d) = %f", n, tinhTong_3(n));
    printf("\nDe quy(%d) = %f", n, tinhTong(n));
    printf("\nDe quy duoi(%d) = %f", n, tinhTong_2(n));

    
     
    getch();
    return 0;
}