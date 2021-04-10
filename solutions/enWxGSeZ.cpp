/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

struct diem
{
    float x;
    float y;
};
typedef struct diem DIEM;
void NhapDiem(DIEM &);
void XuatDiem(DIEM);

struct duongtron
{
    DIEM I;
    float R;
};
typedef struct duongtron DUONGTRON;
void NhapDuongTron(DUONGTRON &);
void XuatDuongTron(DUONGTRON);
float TinhDienTich(DUONGTRON);
float TinhChuVi(DUONGTRON);

void NhapDiem(DIEM &P)
{
    float temp;
    printf("\nNhap x: ");
    scanf("%f", &temp);
    P.x = temp;

    printf("\nNhap y: ");
    scanf("%f", &temp);
    P.y = temp;
}

void XuatDiem(DIEM P)
{
    printf("(%f, %f)", P.x, P.y);
}

void NhapDuongTron(DUONGTRON &c)
{
    printf("\nNhap tam: ");
    NhapDiem(c.I);
    float temp;
    printf("\nNhap ban kinh: ");
    scanf("%f", &temp);
    c.R = temp;
}

void XuatDuongTron(DUONGTRON c)
{
    printf("\n Tam: ");
    XuatDiem(c.I);
    printf("\nBan kinh: %f", c.R);
}

float TinhDienTich(DUONGTRON c)
{
    return 3.14 * c.R * c.R;
}

float TinhChuVi(DUONGTRON c)
{
    return 2 * 3.14 * c.R;
}

int main()
{
    DIEM P;
    DUONGTRON c;

    NhapDuongTron(c);
    XuatDuongTron(c);
    float DienTich = TinhDienTich(c);
    float ChuVi = TinhChuVi(c);

    printf("\nDien tich hinh tron = %.3f", DienTich);
    printf("\nChu vi hinh tron = %.3f", ChuVi);
    getch();
    return 0;
}