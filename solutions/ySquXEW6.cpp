/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

struct Ngay
{
       int Day, Month, Year;
};
typedef Ngay NGAY;

void NhapNgay(NGAY &);
void XuatNgay(NGAY);

void NhapNgay(NGAY &ng)
{
    printf("\nNhap ngay: ");
    scanf("%d", &ng.Day);

    printf("\nNhap thang: ");
    scanf("%d", &ng.Month);

    printf("\nNhap nam: ");
    scanf("%d", &ng.Year);
}
void XuatNgay(NGAY ng)
{
    printf("\n%d-%d-%d",ng.Day, ng.Month, ng.Year);
}

int main()
{
    NGAY ng;
    NhapNgay(ng);
    XuatNgay(ng);

    getch();
    return 0;
}