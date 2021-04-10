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
    printf("(%8.3f, %8.3f)", d.x, d.y);
}

int main()
{
    DIEM d;
    NhapDiem(d);
    XuatDiem(d);

    getch();
    return 0;
}