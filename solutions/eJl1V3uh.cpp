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

    do
    {
    printf("\nNhap n: ");
    scanf("%ld", &n);
    }while(n < 0 && printf("\nLoi: n >= 0 !"));
    sochuso = 0;
    themang = n;

    if(n == 0)
            sochuso = 1;
    while(themang != 0)
    {
        sochuso = sochuso + 1;
        themang = themang / 10;
    }
    printf("\nSo chu so cua %ld la %d", n, sochuso);

    //int sochuso = n == 0 ? 1 : (int)log10((float)n) + 1;

    getch();
    return 0;
}