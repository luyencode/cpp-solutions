/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

struct DuongThang
{
    float a;
    float b;
    float c;
};
typedef struct DuongThang DUONGTHANG;

void NhapDuongThang(DUONGTHANG &);
void XuatDuongThang(DUONGTHANG);

void NhapDuongThang(DUONGTHANG &dt)
{
    float temp;
    printf("\nNhap he so a: ");
    scanf("%f", &temp);
    dt.a = temp;

    printf("\nNhap he so b: ");
    scanf("%f", &temp);
    dt.b = temp;

    printf("\nNhap he so c: ");
    scanf("%f", &temp);
    dt.c = temp;
}

void XuatDuongThang(DUONGTHANG dt)
{
    printf("%8.3fx + %8.3fy + %8.3f = 0", dt.a, dt.b, dt.c);
}

int main()
{
    DUONGTHANG dt;
    NhapDuongThang(dt);
    XuatDuongThang(dt);
    getch();
    return 0;
}