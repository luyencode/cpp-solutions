/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 30
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

struct DoiBong
{
    char MaDoiBong[5];
    char TenDoiBong[20];
    int n;
    CAUTHU DanhSachCauThu[MAX];
};
typedef struct DoiBong DOIBONG;

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
    /*fflush(stdin);
    printf("Nhap ma cau thu: \n");
    gets(a.MaCauThu);*/

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

void NhapDoiBong(DOIBONG &a)
{
    fflush(stdin);
    printf("\nNhap ma doi bong: ");
    gets(a.MaDoiBong);

    fflush(stdin);
    printf("Nhap ten doi bong: \n");
    gets(a.TenDoiBong);

    do 
    {
        printf("\nNhap vao so luong cac cau thu: ");
        scanf("%d", &a.n);


        if(a.n < 0 || a.n > MAX)
        {
            printf("\nSo luong khong hop le. Xin kiem tra lai !");
        }
    } while (a.n < 0 || a.n > MAX);


    for(int i = 0; i < a.n; i++)
    {
        printf("\nNhap vao cau thu thu %d", i + 1);
        char MaCauThu[20];
        int Check;
        do
        {
            fflush(stdin);
            printf("\nNhap ma cau thu: ");
            gets(MaCauThu);
            Check = 1;  // Khoi tao ban dau
            for(int j = i - 1; j >= 0; j--)
            {
                if(strcmp(a.DanhSachCauThu[j].MaCauThu, MaCauThu) == 0)
                {
                    Check = 0;
                    break;
                }
            }
            if (Check == 0)
            {
                printf("\nMa cau thu bi trung. Xin kiem tra lai !");
            }
        }while(Check == 0);
        strcpy(a.DanhSachCauThu[i].MaCauThu, MaCauThu);
        NhapCauThu(a.DanhSachCauThu[i]);
    }
}

void XuatDoiBong(DOIBONG a)
{
    printf("\nMa doi bong: %s", a.MaDoiBong);
    printf("\nTen doi bong: %s", a.TenDoiBong);
    for(int i = 0; i < a.n; i++)
    {
        printf("\nXuat ra cau thu thu %d\n", i + 1);
        XuatCauThu(a.DanhSachCauThu[i]);
    }
}
int main()
{
    DOIBONG a;
    NhapDoiBong(a);
    XuatDoiBong(a);

    getch();
    return 0;
}