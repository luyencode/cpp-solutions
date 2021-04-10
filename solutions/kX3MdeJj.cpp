/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

struct NhanVien
{
    char MaNhanVien[5];
    char TenNhanVien[30];
    float Luong;
};
typedef struct NhanVien NHANVIEN;

void NhapNhanVien(NHANVIEN &a)
{
    fflush(stdin);
    printf("Nhap ma nhan vien: \n");
    gets(a.MaNhanVien);

    fflush(stdin);
    printf("Nhap ten nhan vien: \n");
    gets(a.TenNhanVien);

    printf("Nhap luong: \n");
    scanf("%f", &a.Luong);
}

void XuatNhanVien(NHANVIEN a)
{
    printf("Ma nhan vien: %s\n", a.MaNhanVien);
    printf("Ten nhan vien: %s\n", a.TenNhanVien);
    printf("Luong: %.2f(VND)\n", a.Luong);
}
int main()
{
    NHANVIEN a;
    NhapNhanVien(a);
    XuatNhanVien(a);


    getch();
    return 0;
}