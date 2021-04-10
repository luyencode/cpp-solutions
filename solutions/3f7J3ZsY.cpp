/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

long tinhXn(int n)
{
    if(n == 0)
        return 1;
    long s = 0;
    for(int i = 1; i <= n; i++)
    {
        s = s + i * i * tinhXn(n - i);
    }
    return s;
}
int main()
{
    int n;
    printf("\nNhap n: "); scanf("%d", &n);

    long s = tinhXn(n);
    printf("S = %ld", s);

    getch();
    return 0;
}