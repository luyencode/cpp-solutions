/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
char hoten [30];
int toan;
int van;
float DiemTrungBinh;

void Nhap()
{
    fflush(stdin);
    printf("\nNhap ho ten: ");
    gets(hoten);

    printf("\nNhap toan: ");
    scanf("%d", &toan);

    printf("\nNhap van: ");
    scanf("%d", &van);
}

void XuLy()
{
    DiemTrungBinh = (toan + van) / 2.0;
}

void Xuat()
{
    printf("\nHo ten: %s", hoten);
    printf("\nToan: %d", toan);
    printf("\nVan: %d", van);
    printf("\nDiem Trung Binh: %f", DiemTrungBinh);
}
int main()
{
    Nhap();
    XuLy();
    Xuat();

    getch();
    return 0;
}