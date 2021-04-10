/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

struct PhanSo
{
    float TuSo;
    float MauSo;
};
typedef struct PhanSo PHANSO;

void NhapPhanSo(PHANSO &);
void XuatPhanSo(PHANSO);
PHANSO RutGonPhanSo(PHANSO);
PHANSO TinhTong2PhanSo(PHANSO, PHANSO);
PHANSO TinhHieu2PhanSo(PHANSO, PHANSO);
PHANSO TinhTich2PhanSo(PHANSO, PHANSO);
PHANSO TinhThuong2PhanSo(PHANSO, PHANSO);
bool KiemTraPhanSoToiGian(PHANSO);
void QuiDong2PhanSo(PHANSO &, PHANSO &);
bool KiemTraPhanSoDuong(PHANSO);
bool KiemTraPhanSoAm(PHANSO);
int SoSanh2PhanSo(PHANSO, PHANSO);
PHANSO operator +(PHANSO, PHANSO);
PHANSO operator -(PHANSO, PHANSO);
PHANSO operator *(PHANSO, PHANSO);
PHANSO operator /(PHANSO, PHANSO);


void NhapPhanSo(PHANSO &ps)
{
    float temp;
    printf("\nNhap vao tu so: ");
    scanf("%f", &temp);
    ps.TuSo = temp;
    do
    {
        printf("\nNhap vao mau so: ");
        scanf("%f", &temp);
        ps.MauSo = temp;
        if(ps.MauSo == 0)
        {
            printf("\nMau so phai khac 0. Xin kiem tra lai !");
        }
    }while(ps.MauSo == 0);
}

void XuatPhanSo(PHANSO ps)
{
    printf("%.2f / %.2f", ps.TuSo, ps.MauSo);
}

float TimUCLN(float a, float b)
{
    if(a < 0)
    {
        a = a * -1;
    }
    if(b < 0)
    {
        b = b * -1;
    }

    if(a == 0 && b !=0)
    {
        return b;
    }
    else if( b == 0 && a != 0 )
    {
        return a;
    }

        while(a != b)
        {
            if(a > b)
            {
                a = a - b;
            }
            else
                b = b - a;
        }
        return a;
}
// Bài 506: Rút gọn phân số
PHANSO RutGonPhanSo(PHANSO a)
{
    float UCLN = TimUCLN(a.TuSo, a.MauSo);
    a.TuSo = a.TuSo / UCLN;
    a.MauSo = a.MauSo / UCLN;
    return a;
}
// Bài 507: 
PHANSO TinhTong2PhanSo(PHANSO a, PHANSO b)
{
    PHANSO ketqua;
    ketqua.TuSo = a.TuSo * b.MauSo + a.MauSo * b.TuSo;
    ketqua.MauSo = a.MauSo * b.MauSo;
    return ketqua;
}
// Bài 508
PHANSO TinhHieu2PhanSo(PHANSO a, PHANSO b)
{
    PHANSO ketqua;
    ketqua.TuSo = a.TuSo * b.MauSo - a.MauSo * b.TuSo;
    ketqua.MauSo = a.MauSo * b.MauSo;
    return ketqua;
}
// Bài 509
PHANSO TinhTich2PhanSo(PHANSO a, PHANSO b)
{
    PHANSO ketqua;
    ketqua.TuSo = a.TuSo * b.TuSo;
    ketqua.MauSo = a.MauSo * b.MauSo;
    return ketqua;
}

// Bài 510 
PHANSO TinhThuong2PhanSo(PHANSO a, PHANSO b)
{
    PHANSO ketqua;
    ketqua.TuSo = a.TuSo * b.MauSo;
    ketqua.MauSo = a.MauSo * b.TuSo;
    return ketqua;
}

// Bài 511
bool KiemTraPhanSoToiGian(PHANSO a)
{
    PHANSO c = RutGonPhanSo(a);
    if (c.TuSo == a.TuSo && c.MauSo == a.MauSo)
        return true;
    return false;
}

// Bài 512
void QuiDong2PhanSo(PHANSO &a, PHANSO &b)
{
    PhanSo temp;
    temp.TuSo = a.TuSo;
    temp.MauSo = a.MauSo;

    a.TuSo *= b.MauSo;
    a.MauSo *= b.MauSo;

    b.TuSo *= temp.MauSo;
    b.MauSo *= temp.MauSo;

}

//513 Kiểm tra phân số dương
bool KiemTraPhanSoDuong(PHANSO a)
{
    if (a.TuSo >= 0 && a.MauSo > 0)
        return true;
    return false;
}
//514 Kiểm tra phân số âm
bool KiemTraPhanSoAm(PHANSO a)
{
    if (a.TuSo < 0 || a.MauSo < 0)
        return true;
    return false;
}

//515 So sánh 2 phân số: hàm trả về 1 trong 3 giá trị: 0,-1,1
int SoSanh2PhanSo(PHANSO a, PHANSO b)
{
    float kq1 = a.TuSo / a.MauSo;
    float kq2 = b.TuSo / b.MauSo;
    if (kq1 < kq2)
        return -1;
    if (kq1 > kq2)
        return 1;
    return 0;
}
//516 Định nghĩa toán tử operator + cho 2 phân số
PHANSO operator +(PHANSO a, PHANSO b)
{
    PhanSo kq;
    kq.TuSo = a.TuSo * b.MauSo + a.MauSo * b.TuSo;
    kq.MauSo = a.MauSo * b.MauSo;
    return kq;
}
//517 Định nghĩa toán tử operator - cho 2 phân số
PHANSO operator -(PHANSO a, PHANSO b)
{
    PHANSO kq;
    kq.TuSo = a.TuSo * b.MauSo - a.MauSo * b.TuSo;
    kq.MauSo = a.MauSo * b.MauSo;
    return kq;
}
//518 Định nghĩa toán tử operator * cho 2 phân số
PHANSO operator *(PHANSO a, PHANSO b)
{
    PhanSo kq;
    kq.TuSo = a.TuSo * b.TuSo;
    kq.MauSo = a.MauSo * b.MauSo;
    return kq;
}
//519 Định nghĩa toán tử operator / cho 2 phân số
PHANSO operator /(PHANSO a, PHANSO b)
{
    PhanSo kq;
    kq.TuSo = a.TuSo * b.MauSo;
    kq.MauSo = a.MauSo * b.TuSo;
    return kq;
}

//520 Định nghĩa toán tử operator ++ cho 2 phân số
PHANSO operator ++ (PHANSO &a)
{
    a.TuSo += a.MauSo;
    return a;
}
//521 Định nghĩa toán tử operator -- cho 2 phân số
PHANSO operator ++ (PHANSO &a)
{
    a.TuSo -= a.MauSo;
    return a;
}
int main()
{
    PHANSO ps1, ps2;
    NhapPhanSo(ps1);
    XuatPhanSo(ps1);
    NhapPhanSo(ps2);
    XuatPhanSo(ps2);

    // 506
    PHANSO a = RutGonPhanSo(ps1);
    printf("\nPhan so sau khi rut gon: ");
    XuatPhanSo(a);

    PHANSO b = RutGonPhanSo(ps2);
    printf("\nPhan so sau khi rut gon: ");
    XuatPhanSo(b);


    // 507
    PHANSO tong = TinhTong2PhanSo(a, b);
    printf("\nTong 2 phan so: ");
    XuatPhanSo(tong);
    
    // 508
    PHANSO hieu = TinhHieu2PhanSo(a, b);
    printf("\nHieu 2 phan so: ");
    XuatPhanSo(hieu);

    // 509
    PHANSO tich = TinhTich2PhanSo(a, b);
    printf("\nTich 2 phan so: ");
    XuatPhanSo(tich);

    // 510
    PHANSO thuong = TinhThuong2PhanSo(a, b);
    printf("\nThuong 2 phan so: ");
    XuatPhanSo(thuong);

    // 511
    bool Check = KiemTraPhanSoToiGian(a);
    if (Check)
        printf("\nPhan so a toi gian roi");
    else
        printf("\nPhan so a chua toi gian");

    // 512 
    QuiDong2PhanSo(ps1, ps2);
    printf("\nQuy dong phan so: ");
    XuatPhanSo(ps1);
    printf("\nQuy dong phan so: ");
    XuatPhanSo(ps2);
    getch();
    return 0;
}