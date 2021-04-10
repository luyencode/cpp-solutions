/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

long Tong(int n)
{
    if(n == 0)
        return 0;
    return Tong(n - 1) + n;
}

int main()
{
    int n, S;
    printf("\Nhap n = "); scanf("%d", &n);

    S = Tong(n);
    printf("S = %d", S);

    getch();
    return 0;
}