/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int i, n;
    long s;
    printf("\Nhap n: ");
    scanf("\n%d", &n);

    s = 0;
    i = 1;
    while(i <= n)
    {
        s = s + i;
        i = i + 1;
    }
    printf("\n%ld", s);

    getch();
    return 0;
}