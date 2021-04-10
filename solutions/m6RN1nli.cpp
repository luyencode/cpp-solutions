/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    long n, t;
    int dem;
    printf("\nNhap n: ");
    scanf("%d", &n);
    dem = 0;
    t = n;
    while(t != 0)
    {
        dem++;
        t /= 10;
    }
    printf("\n%d", dem);
    getch();
    return 0;
}