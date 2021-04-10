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
    int S;

    do
    {
    printf("\nNhap n: ");
    scanf("%d", &n);
    }while(n < 0 && printf("\nLoi: n >= 0 !"));
    S = 0;
    themang = n;

    while(themang != 0)
    {
        S = S + themang % 10;
        themang = themang / 10;
    }
    printf("\nTong la %d", S);

    getch();
    return 0;
}