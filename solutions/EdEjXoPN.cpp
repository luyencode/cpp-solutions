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

float TinhKhoangCachGiua2Diem(DIEM, DIEM);

void NhapDiem(DIEM &a)
{
    printf("\nNhap x: ");
    scanf("%f", &a.x);

    printf("\nNhap y: ");
    scanf("%f", &a.y);
}

void XuatDiem(DIEM a)
{
    printf("<%.2f, %.2f>", a.x, a.y);
}

float TinhKhoangCachGiua2Diem(DIEM a, DIEM b)
{
    return sqrt(pow((b.x - a.x), 2) + pow((b.y - a.y), 2));
}

struct TamGiac 
{
    DIEM A;
    DIEM B;
    DIEM C;
};
typedef struct TamGiac TAMGIAC;
void NhapTamGiac(TAMGIAC &);
void XuatTamGiac(TAMGIAC);

bool KiemTraCoPhaiTamGiac(TAMGIAC);
float TinhChuViTamGiac(TAMGIAC);
float TinhDienTichTamGiac(TAMGIAC);

DIEM TimToaDoTrongTamTamGiac(TAMGIAC);

DIEM TimDinhCoHoanhDoLonNhat(TAMGIAC);
DIEM TimDinhCoTungDoNhoNhat(TAMGIAC);

float TinhKhoangCachTuPToi3Dinh(TAMGIAC, DIEM);
bool KiemTra1DiemCoNamTrongTamGiac(TAMGIAC, DIEM);

int ChoBietDangTamGiac(TAMGIAC);

bool KiemTraCoPhaiTamGiac(TAMGIAC a)
{
    float AB = TinhKhoangCachGiua2Diem(a.A, a.B);
    float BC = TinhKhoangCachGiua2Diem(a.B, a.C);
    float AC = TinhKhoangCachGiua2Diem(a.A, a.C);

    if(AB + BC <= AC || AB + AC <= BC || AC + BC <= AB)
        return false;
    return true;
}
void NhapTamGiac(TAMGIAC &a)
{
    int Check;
    do{
        printf("\nNhap dinh A: ");
        NhapDiem(a.A);

        printf("\nNhap dinh B: ");
        NhapDiem(a.B);

        printf("\nNhap dinh C: ");
        NhapDiem(a.C);
        Check = KiemTraCoPhaiTamGiac(a);

        if(Check == false)
        {
            printf("\n3 diem khong tao thanh tam giac. Xin kiem tra lai !");
        }

    }while(Check == false);

}

void XuatTamGiac(TAMGIAC a)
{
    printf("(<%.2f, %.2f>, <%.2f, %.2f>, <%.2f, %.2f>)", a.A.x, a.A.y, a.B.x, a.B.y, a.C.x, a.C.y);
}

float TinhChuViTamGiac(TAMGIAC a)
{
    float AB = TinhKhoangCachGiua2Diem(a.A, a.B);
    float BC = TinhKhoangCachGiua2Diem(a.B, a.C);
    float AC = TinhKhoangCachGiua2Diem(a.A, a.C);

    return AB + BC + AC;
}

float TinhDienTichTamGiac(TAMGIAC a)
{
    float AB = TinhKhoangCachGiua2Diem(a.A, a.B);
    float BC = TinhKhoangCachGiua2Diem(a.B, a.C);
    float AC = TinhKhoangCachGiua2Diem(a.A, a.C);
    float P = TinhChuViTamGiac(a) / 2;

    return sqrt(P * (P - AB) * (P - AC) * (P - BC));
}

DIEM TimToaDoTrongTamTamGiac(TAMGIAC a)
{
    DIEM G;
    G.x = (a.A.x + a.B.x + a.C.x) / 3;
    G.y = (a.A.y + a.B.y + a.C.y) / 3;

    return G;
}

DIEM TimDinhCoHoanhDoLonNhat(TAMGIAC a)
{
    DIEM I; // Điểm có hoành độ lớn nhất 
    I.x = a.A.x > a.B.x ? a.A.x : a.B.x;
    I.x = I.x > a.C.x ? I.x : a.C.x;

    if(I.x == a.A.x)
        I.y = a.A.y;
    else if(I.x == a.B.x)
        I.y = a.B.y;
    else if(I.x = a.C.x)
        I.y = a.C.y;
    return I;
}

DIEM TimDinhCoTungDoNhoNhat(TAMGIAC a)
{
    DIEM J;
    J.y = a.A.y < a.B.y ? a.A.y : a.B.y;
    J.y = J.y < a.C.y ? J.y : a.C.y;

    if(J.y == a.A.y)
        J.x = a.A.x;
    else if(J.y = a.B.y)
        J.x = a.B.x;
    else if(J.y = a.C.y)
        J.x = a.C.x;
    return J;
}

float TinhKhoangCachTuPToi3Dinh(TAMGIAC a, DIEM P)
{
    float PA = TinhKhoangCachGiua2Diem(a.A, P);
    float PB = TinhKhoangCachGiua2Diem(a.B, P);
    float PC = TinhKhoangCachGiua2Diem(a.C, P);
    return PA + PB + PC;
}

/*
dùng phương pháp xét vị trí điểm D so với 3 cạnh.
Điểm D nếu nằm trong tam giác nếu nó thuộc 
1 trong ba cạnh hoặc ở trên(hay bên trái) 2 cạnh và dưới (hay bên phải) 1 cạnh hoặc dưới hai cạnh và trên 1 cạnh.

Để xét điểm nằm trên hay dưới đường thẳng qua hai điểm (x1,y1), (x2,y2) ta dùng công thức sau:
Vector v1 = {x2-x1, y2-y1}
Vector v2 = {x2-xA, y2-yA}  
Tính xp = v1.x*v2.y - v1.y*v2.x  // Cross product
Nếu xp > 0  bên trên
Ngược lại Nếu xp < 0 bên dưới
Ngược lại thuộc đường thẳng
*/

float XetViTriTuongDoiGiuaDiemVaDuongThang(DIEM d1, DIEM d2, DIEM d3)
{
    return (d1.x - d3.x) * (d2.y - d3.y) - (d2.x - d3.x) * (d1.y - d3.y);
}
bool KiemTra1DiemCoNamTrongTamGiac(TAMGIAC a, DIEM D)
{
    DIEM v1 = a.A;
    DIEM v2 = a.B;
    DIEM v3 = a.C;
    bool b1, b2, b3;

    b1 = XetViTriTuongDoiGiuaDiemVaDuongThang(D, v1, v2) < 0.0f;
    b2 = XetViTriTuongDoiGiuaDiemVaDuongThang(D, v2, v3) < 0.0f;
    b3 = XetViTriTuongDoiGiuaDiemVaDuongThang(D, v3, v1) < 0.0f;

    return ((b1 == b2) && (b2 == b3));
}

int ChoBietDangTamGiac(TAMGIAC a)
{
    float AB = TinhKhoangCachGiua2Diem(a.A, a.B);
    float BC = TinhKhoangCachGiua2Diem(a.B, a.C);
    float AC = TinhKhoangCachGiua2Diem(a.A, a.C);

    int flag;
    if(AB == BC && AC == BC)
    {
        flag = 1;  // đều
    }
    else 
    {
        if(AB * AB + BC * BC == AC * AC || AC * AC + BC * BC == AB * AB || AB * AB + AC * AC == BC * BC)
        {
            flag = 2;  // vuông
        }
        if(AB == BC || AC == BC || AB == AC)
        {
            flag = 3;   // cân
        }
        else
        {
            flag = 4;   // thường
        }
    }
    return flag;
}

int main()
{
    TAMGIAC a, b;

    NhapTamGiac(a);
    XuatTamGiac(a);

    float ChuVi = TinhChuViTamGiac(a);
    float DienTich = TinhDienTichTamGiac(a);

    DIEM G = TimToaDoTrongTamTamGiac(a);

    printf("\nChu vi tam giac = %.2f", ChuVi);
    printf("\nDien tich tam giac = %.2f", DienTich);
    printf("\nToa do trong tam tam giac la <%.2f, %.2f>", G.x, G.y);


    DIEM I = TimDinhCoHoanhDoLonNhat(a);
    printf("\nDinh co hoanh do lon nhat la: ");
    XuatDiem(I);

    DIEM J = TimDinhCoTungDoNhoNhat(a);
    printf("\nDinh tung do nho nhat la: ");
    XuatDiem(J);

    float KhoangCach = TinhKhoangCachTuPToi3Dinh(a, G);
    printf("\nkhoang cach = %.2f", KhoangCach);

    int flag = ChoBietDangTamGiac(a);

    if(flag == 1)
    {
        printf("\nTam giac thuong");
    }
    else 
    {
        if(flag == 2)
        {
            printf("\nTam giac vuong ");
        }
        if(flag == 3)
        {
            printf("\nTam giac can");
        }
        else 
        {
            printf("\nTam giac thuong");
        }
    }
    
    if(KiemTra1DiemCoNamTrongTamGiac(a, G))
    {
        printf("\nDiem nam trong tam giac");
    }
    else
    {
        printf("\nDiem KHONG nam trong tam giac");
    }
    getch();
    return 0;
}