/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
struct diem
{
    float x;
    float y;
};
typedef struct diem DIEM;

void NhapDiem(DIEM &);
void XuatDiem(DIEM);
float TinhKhoangCach(DIEM, DIEM);

struct tamgiac 
{
    DIEM A;
    DIEM B;
    DIEM C;
};
typedef struct tamgiac TAMGIAC;

void NhapTamGiac(TAMGIAC &);
void XuatTamGiac(TAMGIAC);

float TinhDienTich(TAMGIAC);
float TinhChuVi(TAMGIAC);
DIEM TimTrongTam(TAMGIAC);

void NhapDiem(DIEM &P)
{
    float temp;
    printf("\nNhap x: ");
    scanf("%f", &temp);
    P.x = temp;
    printf("\nNhap y: ");
    scanf("%f", &temp);
    P.y = temp;
}

void XuatDiem(DIEM P)
{
    printf("(%f, %f)", P.x, P.y);
}

float TinhKhoangCach(DIEM P, DIEM Q)
{
    return sqrt((P.x - Q.x) * (P.x - Q.x) + (P.y - Q.y) * (P.y - Q.y));
}

void NhapTamGiac(TAMGIAC &x)
{
    printf("\nNhap toa do dinh thu nhat: ");
    NhapDiem(x.A);

    printf("\nNhap toa do dinh thu hai: ");
    NhapDiem(x.B);

    printf("\nNhap toa do dinh thu ba: ");
    NhapDiem(x.C);
}

void XuatTamGiac(TAMGIAC x)
{
    printf("\nToa do dinh thu nhat: ");
    XuatDiem(x.A);

    printf("\nToa do dinh thu hai: ");
    XuatDiem(x.B);

    printf("\nToa do dinh thu ba: ");
    XuatDiem(x.C);
}

float TinhDienTich(TAMGIAC x)
{
    float a = TinhKhoangCach(x.B, x.C);
    float b = TinhKhoangCach(x.C, x.A);
    float c = TinhKhoangCach(x.A, x.B);
    float p = (a + b + c) / 2;
    float DienTich = sqrt(p * (p - a) * (p - b) * (p - c));

    return DienTich;
}

float TinhChuVi(TAMGIAC x)
{
    float a = TinhKhoangCach(x.B, x.C);
    float b = TinhKhoangCach(x.C, x.A);
    float c = TinhKhoangCach(x.A, x.B);

    float ChuVi = (a + b + c);
    return ChuVi;
}

DIEM TimTrongTam(TAMGIAC t)
{
    DIEM G;
    G.x = (t.A.x + t.B.x + t.C.x) / 3;
    G.y = (t.A.y + t.B.y + t.C.y) / 3;

    return G;
}

int main()
{
    DIEM G;
    TAMGIAC t;
    NhapTamGiac(t);
    XuatTamGiac(t);

    float ChuVi = TinhChuVi(t);
    float DienTich = TinhDienTich(t);
    G = TimTrongTam(t);

    printf("\nChu vi tam giac = %.3f", ChuVi);
    printf("\nDien tich tam giac = %.3f", DienTich);

    printf("\nToa do trong tam G cua tam giac la: (%8.3f, %8.3f)", G.x, G.y);

    getch();
    return 0;
}