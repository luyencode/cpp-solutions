/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.14
struct Diem
{
    float x;
    float y;
    float z;
};
typedef struct Diem DIEM;

void NhapDiem(DIEM &);
void XuatDiem(DIEM);


struct HinhCau
{
    DIEM I;
    float R;
};

typedef struct HinhCau HINHCAU;

void NhapHinhCau(HINHCAU &);
void XuatHinhCau(HINHCAU);

float TinhDienTichXungQuangHinhCau(HINHCAU);
float TinhTheTichHinhCau(HINHCAU);
float TinhKhoangCachGiua2Diem(DIEM, DIEM);
int XetViTriTuongDoi2HinhCau(HINHCAU, HINHCAU);
bool KiemTra1DiemCoNamTrongHinhCau(HINHCAU, DIEM);

void NhapDiem(DIEM &a)
{
    float temp;
    printf("\nNhap x: ");
    scanf("%f", &temp);
    a.x = temp;

    printf("\nNhap y: ");
    scanf("%f", &temp);
    a.y = temp;

    printf("\nNhap x: ");
    scanf("%f", &temp);
    a.z = temp;
}

void XuatDiem(DIEM a)
{
    printf("<%.2f, %.2f, %.2f>", a.x, a.y, a.z); 
}

void NhapHinhCau(HINHCAU &a)
{
    printf("\nNhap tam: ");
    NhapDiem(a.I);

    float temp;
    printf("\nNhap ban kinh: ");
    scanf("%f", &temp);
    a.R = temp;
}

void XuatHinhCau(HINHCAU a)
{
    printf("((%8.3f, %8.3f, %8.3f), %8.3f)", a.I.x, a.I.y, a.I.z, a.R);
}

float TinhDienTichXungQuangHinhCau(HINHCAU a)
{
    return 4 * PI * a.R * a.R;
}

float TinhTheTichHinhCau(HINHCAU a)
{
    return 4/3 * PI * a.R * a.R * a.R;
}

float TinhKhoangCachGiua2Diem(DIEM a, DIEM b)
{
    return sqrt(pow((b.x - a.x), 2) + pow((b.y - a.y), 2) + pow(b.z - a.z, 2));
}
int XetViTriTuongDoiGiua2DuongTron(HINHCAU a, HINHCAU b)
{
    int flag;
    float bkLon = (a.R > b.R) ? a.R : b.R;
    float bkNho = (a.R < b.R) ? a.R : b.R;

    float khoangcach2Tam = TinhKhoangCachGiua2Diem(a.I, b.I);
    
    if(khoangcach2Tam > bkLon + bkNho || khoangcach2Tam < bkLon - bkNho || khoangcach2Tam == 0)
    {
        flag = 1;
    }
    else if(khoangcach2Tam == bkLon + bkNho || khoangcach2Tam == bkLon - bkNho)
    {
        flag = 2;
    }
    else if(bkLon - bkNho < khoangcach2Tam && khoangcach2Tam < bkLon + bkNho)
    {
        flag = 3;
    }
    return flag;
}

bool KiemTra1DiemCoNamTrongHinhCau(HINHCAU a, DIEM b)
{
    float kcachtutamdendiem = sqrt(pow((a.I.x - b.x), 2) + pow((a.I.y - b.y), 2) + pow((a.I.z - b.z), 2));
    if(kcachtutamdendiem < a.R)
        return true;
    return false;
}    

int main()
{
    DIEM d;
    HINHCAU a, b;
    NhapHinhCau(a);
    XuatHinhCau(a);
    
    NhapHinhCau(b);
    XuatHinhCau(b);

    float Sxq = TinhDienTichXungQuangHinhCau(a);
    float V = TinhTheTichHinhCau(b);

    printf("\nSxq = %8.2f", Sxq);
    printf("\nV = %8.2f", V);

    int flag = XetViTriTuongDoi2HinhCau(a, b);
    if(flag == 1)
        printf("\n 2 hinh cau khong cat nhau");
    else if(flag == 2)
        printf("\n 2 hinh cau tiep xuc nhau");
    else if(flag == 3)
        printf("\n 2 hinh cau cat nhau");
    NhapDiem(d);
    XuatDiem(d);
    if (KiemTra1DiemCoNamTrongHinhCau(a, d))
    {
        printf("\nDiem nam trong hinh cau");
    }
    else
    {
    printf("\nDiem nam ngoai hinh cau");
    }

    getch();
    return 0;
}