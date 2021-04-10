/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
struct Diem
{
    float x;
    float y;
};
typedef struct Diem DIEM;

void NhapDiem(DIEM &);
void XuatDiem(DIEM);

struct DuongTron
{
    DIEM I;
    float R;
};
typedef struct DuongTron DUONGTRON;

void NhapDuongTron(DUONGTRON &);
void XuatDuongTron(DUONGTRON);

float TinhChuViDuongTron(DUONGTRON);
float TinhDienTichHinhTron(DUONGTRON);

float TinhKhoangCachGiua2Diem(DIEM, DIEM);
int XetViTriTuongDoiGiua2DuongTron(DUONGTRON, DUONGTRON);


bool KiemTra1DiemCoNamTrongDuongTron(DUONGTRON, DIEM);
float TinhDienTichPhanGiaoNhauGiua2DuongTron(DUONGTRON, DUONGTRON);

void NhapDiem(DIEM &d)
{
    float temp;
    printf("\nNhap x: ");
    scanf("%f", &temp);
    d.x = temp;

    printf("\nNhap y: ");
    scanf("%f", &temp);
    d.y = temp;
}

void XuatDiem(DIEM d)
{
    printf("(%8.3f, %8.3f)" , d.x, d.y);
}

void NhapDuongTron(DUONGTRON &dt)
{
    float temp;
    NhapDiem(dt.I);
    printf("\nNhap ban kinh: ");
    scanf("%f", &temp);
    dt.R = temp;
}

void XuatDuongTron(DUONGTRON dt)
{
    printf("((%8.3f, %8.3f), %8.3f)", dt.I.x, dt.I.y, dt.R);
}

float TinhChuViDuongTron(DUONGTRON a)
{
    return 2 * PI * a.R;
}
float TinhDienTichHinhTron(DUONGTRON a)
{
    return PI * a.R * a.R;
}

float TinhKhoangCachGiua2Diem(DIEM a, DIEM b)
{
    return sqrt(pow((b.x - a.x), 2) + pow((b.y - a.y), 2));
}

int XetViTriTuongDoiGiua2DuongTron(DUONGTRON a, DUONGTRON b)
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

bool KiemTra1DiemCoNamTrongDuongTron(DUONGTRON a, DIEM b)
{

    float kcachtutamdendiem = sqrt(pow((a.I.x - b.x), 2) + pow((a.I.y - b.y), 2));
    if(kcachtutamdendiem < a.R)
        return true;
    return false;
}

// Câu này chưa test ??
float TinhDienTichPhanGiaoNhauGiua2DuongTron(DUONGTRON a, DUONGTRON b)
{
    float Schung = 0.0;
    int flag = XetViTriTuongDoiGiua2DuongTron(a, b);
    if(flag != 3)
    {
        return -1;
    }
    else
    {
        float d = TinhKhoangCachGiua2Diem(a.I, b.I);

        float R2 = (a.R > b.R) ? a.R : b.R;
        float R1 = (a.R < b.R) ? a.R : b.R;
        float GocABC = cos(d * d + R2 * R2 - R1 * R1 ) / (2 * d * R2);
        float GocCAB = cos(d * d + R1 * R1 - R2 * R2) / (2 * d * R1);

        float alpha = 2 * GocCAB;
        float beta = 2 * GocABC;

        Schung = ((alpha * R1 * R1) / 2) - (1/2 * R1 * R1 * sin(alpha)) + ((beta * R2 * R2) / 2) - (1/2 * R2 * R2 * sin(beta));
        
    }
    return abs(Schung);
}

int main()
{
    DIEM d;
    DUONGTRON a, b;
    NhapDuongTron(a);
    XuatDuongTron(a);

    NhapDuongTron(b);
    XuatDuongTron(b);

    float ChuVi = TinhChuViDuongTron(a);
    printf("\nChu vi duong tron = %.2f", ChuVi);

    float DienTich = TinhDienTichHinhTron(a);
    printf("\nDien tich duong tron = %.2f", DienTich);

    int flag = XetViTriTuongDoiGiua2DuongTron(a, b);
    if(flag == 1)
        printf("\n 2 duong tron khong cat nhau");
    else if(flag == 2)
        printf("\n 2 duong tron tiep xuc nhau");
    else if(flag == 3)
        printf("\n 2 duong tron cat nhau");

    NhapDiem(d);
    XuatDiem(d);
    if (KiemTra1DiemCoNamTrongDuongTron(a, d))
    {
        printf("\nDiem nam trong duong tron");
    }
    else
    {
    printf("\nDiem nam ngoai duong tron");
    }

    float S = TinhDienTichPhanGiaoNhauGiua2DuongTron(a, b);
    printf("\nS = %f", S);
    getch();
    return 0;
}