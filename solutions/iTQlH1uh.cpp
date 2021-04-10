/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>


int tinhTong(int n) // đệ quy
{
    if(n == 1)
        return 1;
    return tinhTong(n - 1) + n * n;
}

int tinhTong_2(int n, int x = 1)  // đệ quy đuôi
{
    if(n == 1)
        return x;
    return tinhTong_2(n - 1, x + n * n);
}

int tinhTong_3(int n) // khử đệ quy
{
    int tong = 1;
    for(int i = 2; i <= n; i++)
    {
        tong += i * i;
    }
    return tong;
}
int main()
{
    int n;
    printf("\nNhap n: "); scanf("%d", &n);

    printf("\nKhu de quy(%d) = %d", n, tinhTong_3(n));
    printf("\nDe quy(%d) = %d", n, tinhTong(n));
    printf("\nDe quy duoi(%d) = %d", n, tinhTong_2(n));

    
     
    getch();
    return 0;
}