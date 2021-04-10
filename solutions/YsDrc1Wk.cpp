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
    int P = 1;
    do
    {
    printf("\nNhap n: ");
    scanf("%ld", &n);
    }while(n < 0 && printf("\nLoi: n >= 0 !"));
    sochuso = 0;
    themang = n;

    while(themang != 0)
    {
        if(themang % 2 == 1)
        {
         P = P * (themang % 10);
        }
        themang = themang / 10;
    }
    printf("\nTich cac chu so le cua %ld la %d", n, P);

    

    getch();
    return 0;
}