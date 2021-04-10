/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

struct DonThuc
{
    float a;
    int n;
};
typedef struct DonThuc DONTHUC;

void NhapDonThuc(DONTHUC &);
void XuatDonThuc(DONTHUC);

void NhapDonThuc(DONTHUC &dt)
{
    float temp;
    printf("\nNhap he so: ");
    scanf("%f", &temp);
    dt.a = temp;

    printf("\nNhap bac don thuc: ");
    scanf("%d", &dt.n);
}

void XuatDonThuc(DONTHUC dt)
{
    printf("%8.3fx^%d", dt.a, dt.n);
}

int main()
{
    DONTHUC dt;
    NhapDonThuc(dt);
    XuatDonThuc(dt);

    getch();
    return 0;
}