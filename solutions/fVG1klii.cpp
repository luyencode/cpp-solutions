/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
struct Diem
{
    float X;
    float Y;
    float Z;
};
typedef struct Diem DIEM;

void NhapDiem(DIEM &);
void XuatDiem(DIEM);

float TinhKhoangCachGiua2Diem(DIEM, DIEM);
float TinhKhoangCachGiua2DiemTheoOx(DIEM, DIEM);
float TinhKhoangCachGiua2DiemTheoOy(DIEM, DIEM);
float TinhKhoangCachGiua2DiemTheoOz(DIEM, DIEM);

DIEM TimDiemDoiXungQuaO(DIEM);
DIEM TimDiemDoiXungQuaOxy(DIEM);
DIEM TimDiemDoiXungQuaOxz(DIEM);
DIEM TimDiemDoiXungQuaOyz(DIEM);

// Bài 555: Khai báo kiểu dữ liệu biểu diễn tọa độ điểm trong không gian Oxyz

//Bài 556: Nhập tọa độ điểm trong không gian Oxyz
void NhapDiem(DIEM &a)
{
    printf("\nNhap X: ");
    scanf("%f", &a.X);

    printf("\nNhap Y: ");
    scanf("%f", &a.Y);

    printf("\nNhap Z: ");
    scanf("%f", &a.Z);
}

// : Xuất tọa độ điểm theo định dạng (x, y, z)
void XuatDiem(DIEM a)
{
    printf("<%.2f, %.2f, %.2f>", a.X, a.Y, a.Z);
}

//Bài 558: Tính khoảng cách giữa 2 điểm trong không gian
float TinhKhoangCachGiua2Diem(DIEM a, DIEM b)
{
    return sqrt(pow((b.X - a.X), 2) + pow((b.Y - a.Y), 2) + pow((b.Z - a.Z), 2));
}

//Bài 559: Tính khoảng cách giữa 2 điểm trong không gian theo phương Ox

float TinhKhoangCachGiua2DiemTheoOx(DIEM a, DIEM b)
{
    return fabs(a.X - b.X);
}

//Bài 560: Tính khoảng cách giữa 2 điểm trong không gian theo phương Oy
float TinhKhoangCachGiua2DiemTheoOy(DIEM a, DIEM b)
{
    return fabs(a.Y - b.Y);    
}

//Bài 561: Tính khoảng cách giữa 2 điểm trong không gian theo phương Oz
float TinhKhoangCachGiua2DiemTheoOz(DIEM a, DIEM b)
{
    return fabs(a.Z - b.Z);
}

// Bài 562: Tìm tọa độ điểm đối xứng qua gốc tọa độ
DIEM TimDiemDoiXungQuaO(DIEM a)
{
    DIEM c;
    c.X = -1 * a.X;
    c.Y = -1 * a.Y;
    c.Z = -1 * a.Z;
    return c;
}

// Bài 563: Tìm tọa độ điểm đối xứng qua mặt phẳng Oxy
DIEM TimDiemDoiXungQuaOxy(DIEM a)
{
    DIEM c;
    c.X = 1 * a.X;
    c.Y = 1 * a.Y;
    c.Z = -1 * a.Z;
    return c;
}
// Bài 564: Tìm tọa độ điểm đối xứng qua mặt phẳng Oxz
DIEM TimDiemDoiXungQuaOxz(DIEM a)
{
    DIEM c;
    c.X = 1 * a.X;
    c.Y = -1 * a.Y;
    c.Z = 1 * a.Z;
    return c;
}

//  Bài 565: Tìm tọa độ điểm đối xứng qua mặt phẳng Oyz

DIEM TimDiemDoiXungQuaOyz(DIEM a)
{
    DIEM c;
    c.X = -1 * a.X;
    c.Y = 1 * a.Y;
    c.Z = 1 * a.Z;
    return c;
}

int main()
{
    DIEM a, b;
    printf("\nDiem A: ");
    NhapDiem(a);
    XuatDiem(a);

    printf("\nDiem B: ");
    NhapDiem(b);
    XuatDiem(b);

    float khoangcach = TinhKhoangCachGiua2Diem(a, b);
    printf("\nKhoang cach giua 2 diem A, B = %.2f", khoangcach);

    float khoangcachOx = TinhKhoangCachGiua2DiemTheoOx(a, b);
    printf("\nKhoang cach giua 2 diem A,B theo Ox = %.2f", khoangcachOx);

    float khoangcachOy = TinhKhoangCachGiua2DiemTheoOy(a, b);
    printf("\nKhoang cach giua 2 diem A,B theo Oy = %.2f", khoangcachOy);

    float khoangcachOz = TinhKhoangCachGiua2DiemTheoOz(a, b);
    printf("\nKhoang cach giua 2 diem A,B theo Oz = %.2f", khoangcachOz);

    DIEM c = TimDiemDoiXungQuaO(a);
    printf("\nDiem C doi xung diem A qua O: ");
    XuatDiem(c);

    DIEM d = TimDiemDoiXungQuaOxy(b);
    printf("\nDiem D doi xung diem B qua Oxy: ");
    XuatDiem(d);
    
    DIEM e = TimDiemDoiXungQuaOxz(a);
    printf("\nDiem E doi xung diem A qua Oxz: ");
    XuatDiem(e);

    DIEM f = TimDiemDoiXungQuaOyz(b);
    printf("\nDiem F doi xung diem B qua Oyz: ");
    XuatDiem(f);

    getch();
    return 0;
}