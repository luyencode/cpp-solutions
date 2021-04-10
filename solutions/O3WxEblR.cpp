/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
// 522 Khai báo kiểu dữ liệu để biểu diễn thông tin của 1 hỗn số

struct HonSo
{
    int Nguyen;
    int Tu;
    int Mau;
};
typedef struct HonSo HONSO;

void NhapHonSo(HONSO &);
void XuatHonSo(HONSO);
HONSO RutGonHonSo(HONSO);

HONSO TinhTong2HonSo(HONSO, HONSO);
HONSO TinhHieu2HonSo(HONSO, HONSO);
HONSO TinhTich2HonSo(HONSO, HONSO);
HONSO TinhThuong2HonSo(HONSO, HONSO);

bool KiemTraHonSoToiGian(HONSO);
void QuiDong2HonSo(HONSO, HONSO);

// 523 Nhập hỗn số
void NhapHonSo(HONSO &hs)
{
    printf("\nNhap phan nguyen: ");
    scanf("%d", &hs.Nguyen);

    printf("\nNhap tu so: ");
    scanf("%d", &hs.Tu);

    printf("\nNhap mau so: ");
    scanf("%d", &hs.Mau);

}

// 524 Xuất hỗn số
void XuatHonSo(HONSO hs)
{
    printf("%d(%d/%d)", hs.Nguyen, hs.Tu, hs.Mau);
}

// 525 Rút gọn hỗn số
int TimUCLN(int a, int b)
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

HONSO RutGonHonSo(HONSO hs)
{
    if(hs.Tu > hs.Mau)
    {
        int temp = hs.Tu / hs.Mau;
        hs.Nguyen += temp;
        hs.Tu -= hs.Mau * temp;
    }
    int UCLN = TimUCLN(hs.Tu, hs.Mau);
    hs.Tu /= UCLN;
    hs.Mau /= UCLN;
    return hs;
}

// 526 Tính tổng 2 hỗn số
HONSO TinhTong2HonSo(HONSO a, HONSO b)
{
    HONSO c;
    c.Nguyen = a.Nguyen + b.Nguyen;
    c.Tu = a.Tu * b.Mau + a.Mau * b.Tu;
    c.Mau = a.Mau * b.Mau;
    c = RutGonHonSo (c);
    return c;
}

// 527 Tính hiệu 2 hỗn số
HONSO TinhHieu2HonSo(HONSO a, HONSO b)
{
    HonSo c;
    c.Nguyen = a.Nguyen - b.Nguyen;
    c.Tu = a.Tu * b.Mau - a.Mau * b.Tu;
    c.Mau = a.Mau * b.Mau;
    c = RutGonHonSo (c);
    return c;
}

// 528 Tính tích 2 hỗn số

HONSO TinhTich2HonSo(HONSO a, HONSO b)
{
    // Đưa về dạng phân số
    a.Tu = a.Tu + a.Nguyen * a.Mau;
    b.Tu = b.Tu + b.Nguyen * b.Mau;

    HONSO c;
    c.Nguyen = 0;
    c.Tu = a.Tu * b.Tu;
    c.Mau = a.Mau * b.Mau;
    c = RutGonHonSo (c);
    return c;
}

// 529 Tính thương 2 hỗn số

HONSO TinhThuong2HonSo(HONSO a, HONSO b)
{
    // Đưa về dạng phân số
    a.Tu = a.Tu + a.Nguyen * a.Mau;
    b.Tu = b.Tu + b.Nguyen * b.Mau;

    HONSO c;
    c.Nguyen = 0;
    c.Tu = a.Tu * b.Mau;
    c.Mau = a.Mau * b.Tu;
    c = RutGonHonSo (c);
    return c;
}

// 530 Kiểm tra hỗn số tối giản
bool KiemTraHonSoToiGian(HONSO a)
{
    int UCLN = TimUCLN(a.Tu, a.Mau);
    if (UCLN == 1)
        return true;
    return false;
}

// 531 Qui đồng 2 hỗn số
void QuiDong2HonSo(HONSO &a, HONSO &b)
{
    HONSO c = a;
    a.Tu = a.Tu * b.Mau;
    a.Mau = a.Mau * b.Mau;
    b.Tu = b.Tu * c.Mau;
    b.Mau = c.Mau * b.Mau;
}

int main()
{
    HONSO a, b;
    NhapHonSo(a);
    XuatHonSo(a);

    NhapHonSo(b);
    XuatHonSo(b);

    HONSO c = RutGonHonSo(a);
    printf("\nRut gon hon so a: ");
    XuatHonSo(c);

    HONSO d = RutGonHonSo(b);
    printf("\nRut gon hon so b: ");
    XuatHonSo(d);

    HONSO tong = TinhTong2HonSo(a, b);
    printf("\nTong 2 hon so: ");
    XuatHonSo(tong);

    HONSO hieu = TinhHieu2HonSo(a, b);
    printf("\nHieu 2 hon so: ");
    XuatHonSo(hieu);

    HONSO tich = TinhTich2HonSo(a, b);
    printf("\nTich 2 hon so: ");
    XuatHonSo(tich);

    HONSO thuong = TinhThuong2HonSo(a, b);
    printf("\nThuong 2 hon so: ");
    XuatHonSo(thuong);

    if (KiemTraHonSoToiGian(a))
        printf("\nHon so a toi gian");
    else
        printf("\nHon so a chua toi gian");

    QuiDong2HonSo(a,b);
    printf("\na sau khi qui dong: ");
    XuatHonSo(a);
    printf("\nb sau khi qui dong: ");
    XuatHonSo(b);

    getch();
    return 0;
}