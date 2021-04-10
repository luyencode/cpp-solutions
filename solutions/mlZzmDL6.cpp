/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
//540 khai báo dữ liệu điểm OXY
struct Diem
{
    float X;
    float Y;
};
typedef struct Diem DIEM;

void NhapDiem(DIEM &);
void XuatDiem(DIEM);

float TinhKhoangCachGiua2Diem(DIEM, DIEM);
float TinhKhoangCachGiua2DiemTheoOx(DIEM, DIEM);
float TinhKhoangCachGiua2DiemTheoOy(DIEM, DIEM);

DIEM TimDiemDoiXungQuaO(DIEM);
DIEM TimDiemDoiXungQuaOx(DIEM);
DIEM TimDiemDoiXungQuaOy(DIEM);

DIEM TimDiemDoiXungQuaPhanGiac1(DIEM);
DIEM TimDiemDoiXungQuaPhanGiac2(DIEM);

bool KiemTraDiemThuocPhanTu1(DIEM);
bool KiemTraDiemThuocPhanTu2(DIEM);
bool KiemTraDiemThuocPhanTu3(DIEM);
bool KiemTraDiemThuocPhanTu4(DIEM);

// 541 Nhập tọa độ điểm trong mặt phẳng
void NhapDiem(DIEM &a)
{
    printf("\nNhap X: ");
    scanf("%f", &a.X);

    printf("\nNhap Y: ");
    scanf("%f", &a.Y);
};

// 542 Xuất tọa độ điểm trong mặt phẳng
void XuatDiem(DIEM a)
{
    printf("<%.2f, %.2f>", a.X, a.Y);
}

// 543 Tính khoảng cách giữa 2 điểm

float TinhKhoangCachGiua2Diem(DIEM a, DIEM b)
{
    return sqrt(pow((b.X - a.X), 2) + pow((b.Y - a.Y), 2));
}

// 544 Tính khoảng cách giữa 2 điểm theo phương Ox
float TinhKhoangCachGiua2DiemTheoOx(DIEM a, DIEM b)
{
    return fabs(a.X - b.X);
}

// 545 Tính khoảng cách giữa 2 điểm theo phương Oy
float TinhKhoangCachGiua2DiemTheoOy(DIEM a, DIEM b)
{
    return fabs(a.Y - b.Y);
}

//546 Tìm tọa độ điểm đối xứng qua gốc tọa độ
DIEM TimDiemDoiXungQuaO(DIEM a)
{
    DIEM c;
    c.X = -1 * a.X;
    c.Y = -1 * a.Y;
    return c;
}

//547 Tìm điểm đối xứng qua trục hoành
DIEM TimDiemDoiXungQuaOx(DIEM a)
{
    DIEM c;
    c.X = 1 * a.X;
    c.Y = -1 * a.Y;
    return c;
}

//548 Tìm điểm đối xứng qua trục tung
DIEM TimDiemDoiXungQuaOy(DIEM a)
{
    DIEM c;
    c.X = -1 * a.X;
    c.Y = 1 * a.Y;
    return c;
}

//549 Tìm điểm đối xứng qua đường phân giác thứ 1 (y = x)
DIEM TimDiemDoiXungQuaPhanGiac1(DIEM a)
{
    DIEM c;
    c.X = 1 * a.Y;
    c.Y = 1 * a.X;
    return c;
}

//550 Tìm điểm đối xứng qua đường phân giác thứ 2 (y = -x)
DIEM TimDiemDoiXungQuaPhanGiac2(DIEM a)
{
    DIEM c;
    c.X = -1 * a.Y;
    c.Y = -1 * a.X;
    return c;
}

//551 Kiểm tra điểm thuộc phần tư thứ 1 ko?
bool KiemTraDiemThuocPhanTu1(DIEM a)
{
    if (a.X > 0 && a.Y > 0)
        return true;
    return false;
}

//552 Kiểm tra điểm thuộc phần tư thứ 2 ko?
bool KiemTraDiemThuocPhanTu2(DIEM a)
{
    if (a.X < 0 && a.Y > 0)
        return true;
    return false;
}

//553 Kiểm tra điểm thuộc phần tư thứ 3 ko?
bool KiemTraDiemThuocPhanTu3(DIEM a)
{
    if (a.X < 0 && a.Y < 0)
        return true;
    return false;
}

//554 Kiểm tra điểm thuộc phần tư thứ 4 ko?
bool KiemTraDiemThuocPhanTu4(DIEM a)
{
    if (a.X > 0 && a.Y < 0)
        return true;
    return false;
}

int main()
{
    DIEM a, b;
    NhapDiem(a);
    XuatDiem(a);

    NhapDiem(b);
    XuatDiem(b);

    float khoangcach = TinhKhoangCachGiua2Diem(a, b);
    printf("\nKhoang cach giua 2 diem A, B = %.2f", khoangcach);

    float khoangcachOx = TinhKhoangCachGiua2DiemTheoOx(a, b);
    printf("\nKhoang cach giua 2 diem A,B theo Ox = %.2f", khoangcachOx);

    float khoangcachOy = TinhKhoangCachGiua2DiemTheoOy(a, b);
    printf("\nKhoang cach giua 2 diem A,B theo Oy = %.2f", khoangcachOy);

    DIEM c = TimDiemDoiXungQuaO(a);
    printf("\nDiem C doi xung diem A qua O: ");
    XuatDiem(c);

    DIEM d = TimDiemDoiXungQuaOx(b);
    printf("\nDiem D doi xung diem B qua Ox: ");
    XuatDiem(d);

    DIEM e = TimDiemDoiXungQuaOy(a);
    printf("\nDiem E doi xung diem A qua Oy: ");
    XuatDiem(e);

    DIEM f = TimDiemDoiXungQuaPhanGiac1(a);
    printf("\nDiem F doi xung diem A qua duong y = x: ");
    XuatDiem(f);

    DIEM g = TimDiemDoiXungQuaPhanGiac2(b);
    printf("\nDiem G doi xung diem B qua duong y = -x: ");
    XuatDiem(g);

    if (KiemTraDiemThuocPhanTu1(a))
    printf("\na thuoc phan tu thu 1");
    else
    printf("\na ko thuoc phan tu thu 1");
    if (KiemTraDiemThuocPhanTu2(a))
    printf("\na thuoc phan tu thu 2");
    else
    printf("\na ko thuoc phan tu thu 2");
    if (KiemTraDiemThuocPhanTu3(a))
    printf("\na thuoc phan tu thu 3");
    else
    printf("\na ko thuoc phan tu thu 3");
    if (KiemTraDiemThuocPhanTu4(a))
    printf("\na thuoc phan tu thu 4");
    else
    printf("\na ko thuoc phan tu thu 4");

    getch();
    return 0;
}