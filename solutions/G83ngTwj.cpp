/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

struct MatHang
{
    char TenMatHang[20];
    long DonGia;
    long SoLuongTon;
};
typedef struct MatHang MATHANG;

void NhapMatHang(MATHANG &mh)
{
    fflush(stdin);
    printf("Nhap ten mat hang: \n");
    gets(mh.TenMatHang);

    printf("Nhap don gia: \n");
    scanf("%ld", &mh.DonGia);

    printf("Nhap so luong ton: \n");
    scanf("%ld", &mh.SoLuongTon);
}

void XuatMatHang(MATHANG mh)
{
    printf("Ten mat hang: %s\n", mh.TenMatHang);
    printf("Don gia: %ld\n", mh.DonGia);
    printf("So luong ton: %ld", mh.SoLuongTon);
}

int main()
{
    MATHANG a;
    NhapMatHang(a);
    XuatMatHang(a);
    getch();
    return 0;
}