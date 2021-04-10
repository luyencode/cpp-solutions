/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

struct HocSinh
{
    char HoTen[30];
    int DiemToan, DiemVan;
    float DiemTB;
};
typedef struct HocSinh HOCSINH;

void NhapHocSinh(HOCSINH &a)
{

    fflush(stdin);
    printf("Nhap ten hoc sinh: \n");
    gets(a.HoTen);

    printf("Nhap diem toan: \n");
    scanf("%d", &a.DiemToan);

    printf("Nhap diem toan: \n");
    scanf("%d", &a.DiemVan);

}
float TinhDiemTB(HOCSINH a)
{
    return (float)(a.DiemToan + a.DiemVan) / 2;
}
void XuatHocSinh(HOCSINH a)
{
    printf("Ten hoc sinh: %s\n", a.HoTen);
    printf("Diem toan: %d\n", a.DiemToan);
    printf("Diem van: %d\n", a.DiemVan);
    printf("Diem trung binh: %.2f", TinhDiemTB(a)); 
}

int main()
{
    HOCSINH a;
    NhapHocSinh(a);
    XuatHocSinh(a);

    getch();
    return 0;
}