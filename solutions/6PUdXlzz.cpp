/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

struct HonSo
{
    int Tu;
    int Mau;
    int Nguyen;
};
typedef struct HonSo HONSO;

void NhapHonSo(HONSO &);
void XuatHonSo(HONSO);

void NhapHonSo(HONSO &hs)
{
    printf("\nNhap nguyen: ");
    scanf("%d", &hs.Nguyen);

    printf("\nNhap tu so: ");
    scanf("%d", &hs.Tu);

    printf("\nNhap mau so: ");
    scanf("%d", &hs.Mau);
}

void XuatHonSo(HONSO hs)
{
    printf("%d(%d/%d)", hs.Nguyen, hs.Tu, hs.Mau);
}

int main()
{
    HONSO hs;
    NhapHonSo(hs);
    XuatHonSo(hs);

    getch();
    return 0;
}