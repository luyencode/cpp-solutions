/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

long GiaiThua(int n)
{
    if(n == 0)
        return 1;
    return GiaiThua(n - 1) * n;
}

int main()
{
    int n, T;
    printf("\Nhap n = "); scanf("%d", &n);

    T = GiaiThua(n);
    printf("T = %d", T);

    getch();
    return 0;
}