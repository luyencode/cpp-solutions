/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

long tinhXn(int);
long tinhYn(int);

long tinhXn(int n)
{
    if(n == 0)
        return 1;
    return tinhXn(n - 1) + tinhYn(n - 1);
}

long tinhYn(int n)
{
    if(n == 0)
        return 0;
    return 3*tinhXn(n - 1) + 2*tinhYn(n - 1);
}
int main()
{
    int n;
    printf("\nNhap n "); scanf("%d", &n);

    long kq1 = tinhXn(n);
    long kq2 = tinhYn(n);

    printf("\nX(n) = %d, Y(n) = %d", kq1, kq2);

    getch();
    return 0;
}