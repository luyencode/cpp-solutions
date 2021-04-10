/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

 struct Gio 
{
    int Hour, Minute, Second;
};
typedef struct Gio GIO;

struct Ngay
{
       int Day, Month, Year;
};
typedef Ngay NGAY;

struct ChuyenBay 
{
    char Ma[5], NoiDi[20], NoiDen[20];
    Ngay NgayBay;
    Gio GioBay;
};
typedef struct ChuyenBay CHUYENBAY;


void NhapGio(GIO &g)
{
    printf("\nNhap gio: ");
    scanf("%d", &g.Hour);

    printf("\nNhap phut: ");
    scanf("%d", &g.Minute);

    printf("\nNhap giay: ");
    scanf("%d", &g.Second);
}
void XuatGio(GIO g)
{
    printf("%d:%d:%d", g.Hour, g.Minute, g.Second);
}

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

void NhapChuyenBay(CHUYENBAY &cb)
{
    fflush(stdin);
    printf("\nNhap vao ma chuyen bay: ");
    gets(cb.Ma);

    fflush(stdin);
    printf("\nNhap noi di: ");
    gets(cb.NoiDi);

    fflush(stdin);
    printf("\nNhap noi den: ");
    gets(cb.NoiDen);

    printf("\nNhap vao ngay bay: ");
    NhapNgay(cb.NgayBay);

    printf("\nNhap vao gio bay: ");
    NhapGio(cb.GioBay);

}
void XuatChuyenBay(CHUYENBAY cb)
{
    printf("\nMa chuyen bay: %s", cb.Ma);
    printf("\nNoi di: %s", cb.NoiDi);
    printf("\nNoi den: %s", cb.NoiDen);
    printf("\nNgay bay: ");
    XuatNgay(cb.NgayBay);
    printf("\nGio bay: ");
    XuatGio(cb.GioBay);

}
int main()
{
    CHUYENBAY cb;
    NhapChuyenBay(cb);
    XuatChuyenBay(cb);

    getch();
    return 0;
}