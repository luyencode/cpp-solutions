/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

struct Tinh
{
    int MaTinh;
    char TenTinh[30];
    float DienTich;
};
typedef struct Tinh TINH;

void NhapTinh(TINH &t)
{
    printf("Nhap ma tinh: \n");
    scanf("%d", &t.MaTinh);

    fflush(stdin);
    printf("Nhap vao ten tinh: \n");
    gets(t.TenTinh);

    printf("Nhap vao dien tich: \n");
    scanf("%f", &t.DienTich);
}

void XuatTinh(TINH t)
{
    printf("Ma tinh: %d\n", t.MaTinh);
    printf("Ten tinh: %s\n", t.TenTinh);
    printf("Dien tich: %.2f (km^2)\n", t.DienTich);
}

int main()
{
    TINH t1;
    NhapTinh(t1);
    XuatTinh(t1);

    getch();
    return 0;
}