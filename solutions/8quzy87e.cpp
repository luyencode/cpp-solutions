/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
const int minYear = 1900, maxYear = 10000;
struct Ngay
{
    int Day, Month, Year;
};
typedef struct Ngay NGAY;

struct HopSua
{
    char NhanHieu[20];
    float TrongLuong;
    NGAY HanSuDung;
};
typedef struct HopSua HOPSUA;

bool KiemTraNamNhuan(NGAY a)
{
    return (a.Year % 4 == 0 && a.Year % 100 != 0) || (a.Year % 400 == 0);
}

bool KiemTraNamNhuan(int i)
{
    if (i % 4 == 0 && i % 100!=0)
        return true;
    if (i % 400 == 0)
        return true;
    return false;
}
int TimSoNgayTrongThang(NGAY a)
{
    int NgayTrongThang;
    switch(a.Month)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        NgayTrongThang = 31;
        break;
    case 4: case 6: case 9 : case 11:
        NgayTrongThang = 30;
        break;
    case 2:
        int Check = KiemTraNamNhuan(a);
        if(Check == 1)
        {
            NgayTrongThang = 29;
        }
        else
        {
            NgayTrongThang = 28;
        }
    }
    return NgayTrongThang;
}


void NhapNgay(NGAY &a)
{
    do
    {
        printf("\nNhap vao nam: ");
        scanf("%d", &a.Year);
        if(a.Year < minYear || a.Year > maxYear)
        {
            printf("\nDu lieu nam khong hop le. Xin kiem tra lai!");
        }
    }while(a.Year < minYear || a.Year > maxYear);

    do
    {
        printf("\nNhap vao thang: ");
        scanf("%d", &a.Month);
        if (a.Month < 1 || a.Month > 12)
            printf("\nDu lieu thang khong hop le. Xin kiem tra lai!");
    }while(a.Month < 1 || a.Month > 12);

    int NgayTrongThang = TimSoNgayTrongThang(a);
    do
    {
        printf("\nNhap vao ngay: ");
        scanf("%d",&a.Day);
        if(a.Day < 1 || a.Day > NgayTrongThang)
        {
            printf("\nDu lieu ngay khong hop le. Xin kiem tra lai!");
        }
    }while(a.Day < 1 || a.Day > NgayTrongThang);
}


void XuatNgay(NGAY ng)
{
    printf("%d/%d/%d", ng.Day, ng.Month, ng.Year);
}

void NhapHopSua(HOPSUA &hs)
{
    fflush(stdin);
    printf("Nhap nhan hieu: \n");
    gets(hs.NhanHieu);

    printf("Nhap trong luong: \n");
    scanf("%f", &hs.TrongLuong);

    printf("Nhap han su dung: \n");
    NhapNgay(hs.HanSuDung);
}

void XuatHopSua(HOPSUA hs)
{
    printf("Nhan hieu: %s\n", hs.NhanHieu);
    printf("Trong luong: %.2f(kg)\n", hs.TrongLuong);
    printf("Han su dung: \n");
    XuatNgay(hs.HanSuDung);
}
int main()
{
    HOPSUA a;
    NhapHopSua(a);
    XuatHopSua(a);
    getch();
    return 0;
}