/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    int SoNghichDao = 0;
    do
    {
        printf("\nNhap n: ");
        scanf("%d", &n);
    }while(n < 0 && printf("\nLoi: (n >= 0)"));

    printf("\nSo dao nguoc cua %d la: ", n);
    do
    {
        printf("%d", n % 10);
    }while(n /= 10); // tương đương n = n / 10; n != 0;

    // có thể viết

    /*do
    {
        SoNghichDao = SoNghichDao * 10 + n % 10;
        n /= 10;
    }while(n != 0);
    printf("\n%d", SoNghichDao);*/

    getch();
    return 0;
}