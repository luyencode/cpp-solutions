/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 50
struct HocSinh
{
    char HoTen[30];
    int DiemToan, DiemVan;
    float DiemTB;
};
typedef struct HocSinh HOCSINH;

struct LopHoc
{
    char TenLop[30];
    int SiSo;
    HOCSINH DanhSachHocSinh[MAX];
};
typedef struct LopHoc LOPHOC;
void NhapHocSinh(HOCSINH &a)
{

    fflush(stdin);
    printf("Nhap ten hoc sinh: \n");
    gets(a.HoTen);

    printf("Nhap diem toan: \n");
    scanf("%d", &a.DiemToan);

    printf("Nhap diem van: \n");
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

void NhapLopHoc(LOPHOC &a)
{
    fflush(stdin);
    printf("Nhap ten lop: \n", a.TenLop);
    gets(a.TenLop);

    do
    {
        printf("Nhap si so: \n");
        scanf("%d", &a.SiSo);
        if(a.SiSo < 0 || a.SiSo > MAX)
        {
            printf("\nSo luong khong hop le. Xin kiem tra lai !");
        }
    }while(a.SiSo < 0 || a.SiSo > MAX);

    for(int i = 0; i < a.SiSo; i++)
    {
        printf("\nNhap vao hoc sinh thu %d\n", i + 1);
        NhapHocSinh(a.DanhSachHocSinh[i]);
    }
}

void XuatLopHoc(LOPHOC a)
{
    for(int i = 0; i < a.SiSo; i++)
    {
        printf("\nXuat ra hoc sinh thu %d\n", i + 1);
        XuatHocSinh(a.DanhSachHocSinh[i]);
    }
}

int main()
{
    LOPHOC a;
    NhapLopHoc(a);
    XuatLopHoc(a);

    getch();
    return 0;
}