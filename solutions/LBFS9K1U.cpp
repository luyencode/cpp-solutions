/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    long themang, n;
    int sochuso;
    float S = 0;
    do
    {
    printf("\nNhap n: ");
    scanf("%ld", &n);
    }while(n < 0 && printf("\nLoi: n >= 0 !"));
    sochuso = 0;
    themang = n;

    while(themang != 0)
    {
        if(themang % 2 == 0)
        {
        S = S + themang % 10;
        }
        themang = themang / 10;
    }
    printf("\nTong cac chu so chan cua %ld la %f", n, S);

    

    getch();
    return 0;
}