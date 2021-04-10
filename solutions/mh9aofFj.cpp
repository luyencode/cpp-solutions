/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

struct  LuanVan
{
    char MaLuanVan[10], TenLuanVan[100], TenSinhVien[30], TenGiangVienHD[30];
    int NamThucHien;
};
typedef struct LuanVan LUANVAN;

void NhapLuanVan(LUANVAN &lv)
{
    fflush(stdin);
    printf("\nNhap ma luan van: ");
    gets(lv.MaLuanVan);

    fflush(stdin);
    printf("\nNhap ten luan van: ");
    gets(lv.TenLuanVan);

    fflush(stdin);
    printf("\nNhap ten sinh vien thuc hien: ");
    gets(lv.TenSinhVien);

    fflush(stdin);
    printf("\nNhap ten giang vien huong dan: ");
    gets(lv.TenGiangVienHD);

    printf("\nNhap nam thuc hien: ");
    scanf("%d", &lv.NamThucHien);

}
void XuatLuanVan(LUANVAN lv)
{
    printf("\nMa luan van: %s", lv.MaLuanVan);
    printf("\nTen luan van: %s", lv.TenLuanVan);
    printf("\nTen sinh vien thuc hien: %s", lv.TenLuanVan);
    printf("\nTen giang vien huong dan: %s", lv.TenGiangVienHD);
    printf("\nNam thuc hien: %d", lv.NamThucHien);
}

int main()
{
    LUANVAN a;
    NhapLuanVan(a);
    XuatLuanVan(a);

    getch();
    return 0;
}