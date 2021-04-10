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
struct CauThu
{
    char MaCauThu[20];
    char TenCauThu[30];
    NGAY NgaySinh;
};
typedef CauThu CAUTHU;
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
    printf("%d-%d-%d", ng.Day, ng.Month, ng.Year);
}

void NhapCauThu(CAUTHU &a)
{
    fflush(stdin);
    printf("Nhap ma cau thu: \n");
    gets(a.MaCauThu);

    fflush(stdin);
    printf("Nhap ten cau thu: \n");
    gets(a.TenCauThu);

    printf("Nhap ngay sinh: \n");
    NhapNgay(a.NgaySinh);
}

void XuatCauThu(CAUTHU a)
{
    printf("Ma cau thu: %s\n", a.MaCauThu);
    printf("Ten cau thu: %s\n", a.TenCauThu);
    printf("Ngay sinh: \n");
    XuatNgay(a.NgaySinh);
}

int main()
{
    CAUTHU a;
    NhapCauThu(a);
    XuatCauThu(a);

    getch();
    return 0;
}