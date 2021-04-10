/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int themang, n;
    int P;

    do
    {
    printf("\nNhap n: ");
    scanf("%d", &n);
    }while(n < 0 && printf("\nLoi: n >= 0 !"));
    P = 1;
    themang = n;

    while(themang != 0)
    {
        P = P * (themang % 10);
        themang = themang / 10;
    }
    printf("\nTich la %d", P);

    getch();
    return 0;
}