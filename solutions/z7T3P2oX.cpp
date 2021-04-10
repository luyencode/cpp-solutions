/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

// Khai báo kiểu dữ liệu cấu trúc phân số
struct PhanSo
{
    int TuSo, MauSo;
};

typedef struct PhanSo PHANSO;

void NhapPhanSo(PHANSO &);
void XuatPhanSo(PHANSO);

void NhapPhanSo(PHANSO &ps)
{
    printf("\nNhap vao tu so: ");
    scanf("%d", &ps.TuSo);

    do
    {
        printf("\nNhap vao mau so: ");
        scanf("%d", &ps.MauSo);

        if(ps.MauSo == 0)
        {
            printf("\nMau so phai khac 0. Xin kiem tra lai !");
        }
    }while(ps.MauSo == 0);
}

void XuatPhanSo(PHANSO ps)
{
    printf("%d/%d", ps.TuSo, ps.MauSo);
}
int main()
{
    PHANSO ps;
    NhapPhanSo(ps);
    XuatPhanSo(ps);

    

    getch();
    return 0;
}