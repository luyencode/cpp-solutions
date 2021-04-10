/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

struct Diem
{
    float x;
    float y;
};
typedef struct Diem DIEM;

void NhapDiem(DIEM &);
void XuatDiem(DIEM);

struct DuongTron
{
    DIEM I;
    float R;
};
typedef struct DuongTron DUONGTRON;

void NhapDuongTron(DUONGTRON &);
void XuatDuongTron(DUONGTRON);

void NhapDiem(DIEM &d)
{
    float temp;
    printf("\nNhap x: ");
    scanf("%f", &temp);
    d.x = temp;

    printf("\nNhap y: ");
    scanf("%f", &temp);
    d.y = temp;
}

void XuatDiem(DIEM d)
{
    printf("(%8.3f, %8.3f)" , d.x, d.y);
}

void NhapDuongTron(DUONGTRON &dt)
{
    float temp;
    NhapDiem(dt.I);
    printf("\nNhap ban kinh: ");
    scanf("%f", &temp);
    dt.R = temp;
}

void XuatDuongTron(DUONGTRON dt)
{
    printf("((%8.3f, %8.3f), %8.3f)", dt.I.x, dt.I.y, dt.R);
}

int main()
{
    DIEM d;
    DUONGTRON dt;
    NhapDuongTron(dt);
    XuatDuongTron(dt);
    getch();
    return 0;
}