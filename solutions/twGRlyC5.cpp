/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

long Fibo(int n)
{
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    return Fibo(n - 1) + Fibo(n - 2);
}
int main()
{
    int n;
    printf("\nNhap n: "); scanf("%d", &n);

    long kq = Fibo(n);
    printf("\nFibo = %d", kq);

    getch();
    return 0;
}