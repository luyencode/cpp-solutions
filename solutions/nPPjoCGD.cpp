/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100
#define E(x, i) x.HeSo[i]
struct DonThuc
{
    float HeSo;
    int SoMu;
};
typedef struct DonThuc DONTHUC;
struct DaThuc
{
    float HeSo[MAX];
    int SoMu;
};
typedef struct DaThuc DATHUC;

void KhoiTaoDaThucRong(DATHUC &);
void NhapDaThuc(DATHUC &);
void XuatDaThuc(DATHUC, char[]);


DATHUC TinhHieu2DaThuc(DATHUC, DATHUC);
DATHUC TinhTong2DaThuc(DATHUC, DATHUC);
DATHUC TinhTich2DaThuc(DATHUC, DATHUC);
DATHUC TinhThuong2DaThuc(DATHUC, DATHUC);
DATHUC TinhDaThucDu(DATHUC, DATHUC);
DATHUC TinhDaoHamCap1(DATHUC);
DATHUC TinhDaoHamCapk(DATHUC);
float TinhGiaTri(DATHUC, float);
float TimNghiemDaThucTrongDoanAB(float, float);

DATHUC operator +(DATHUC, DATHUC);
DATHUC operator -(DATHUC, DATHUC);
DATHUC operator *(DATHUC, DATHUC);
DATHUC operator /(DATHUC, DATHUC);


DATHUC TinhDaoHamCap1(DATHUC);
DATHUC TinhDaoHamCapk(DATHUC, int);
float TinhDaoHamCapk(DATHUC, float);

// Dinh nghia ham
void KhoiTaoDaThucRong(DATHUC &dt)
{
    dt.SoMu = 0;
    for (int i = 0; i < MAX; i++)
        dt.HeSo[i] = 0;
}
void NhapDaThuc(DATHUC &dt)
{
    KhoiTaoDaThucRong(dt);
    do
    {
        printf("\nNhap bac da thuc: ");
        scanf("%d", &dt.SoMu);
        if(dt.SoMu < 1)
        {
            printf("\nSo bac cua da thuc phai >= 1. Xin kiem tra lai !");
        }
    }while(dt.SoMu < 1);

    for(int i = dt.SoMu; i >= 0; i--)
    {
        float temp;
        printf("\nNhap he so: ");
        scanf("%f", &temp);
        dt.HeSo[i] = temp;
    }
}

void XuatDaThuc(DATHUC dt, char thongbao[])
{
    printf("%s", thongbao);
    for(int i = dt.SoMu; i > 0; i--)
    {
        if (dt.HeSo[i] != 0)
        {
            printf("%8.3fx^%d + " , dt.HeSo[i], i);
        }
    }
    printf("%8.3f\n", dt.HeSo[0]);
}


// Bài 493: Tính tổng 2 đa thức
DATHUC TinhTong2DaThuc(DATHUC a, DATHUC b)
{
    DATHUC ketqua;
    KhoiTaoDaThucRong(ketqua);

    // xét bậc đa thức kết quả
    // nếu bậc đa thức a lớn hơn bậc đa thức b
    if(a.SoMu > b.SoMu)
    {
        ketqua.SoMu = a.SoMu;  // bậc đa thức kết quả là bậc đa thức a
    }
    else
    {
        ketqua.SoMu = b.SoMu;
    }
    // xét hệ số đa thức kết quả:
    for(int i = 0; i <= ketqua.SoMu; i++)
    {
        ketqua.HeSo[i] = a.HeSo[i] + b.HeSo[i];
    }
    return ketqua;
}

// Bài 494: Tính hiệu đa thức
DATHUC TinhHieu2DaThuc(DATHUC a, DATHUC b)
{
    DATHUC ketqua;
    KhoiTaoDaThucRong(ketqua);

    // xét bậc đa thức kết quả
    // nếu bậc đa thức a lớn hơn bậc đa thức b
    if(a.SoMu > b.SoMu)
    {
        ketqua.SoMu = a.SoMu;  // bậc đa thức kết quả là bậc đa thức a
    }
    else
    {
        ketqua.SoMu = b.SoMu;
    }
    // xét hệ số đa thức kết quả:
    for(int i = 0; i <= ketqua.SoMu; i++)
    {
        ketqua.HeSo[i] = a.HeSo[i] - b.HeSo[i];
    }
    return ketqua;
}

// Bài 495: Tính tích 2 đa thức

DATHUC TinhTich2DaThuc(DATHUC a, DATHUC b)
{
    DATHUC ketqua;
    KhoiTaoDaThucRong(ketqua);

    // xét bậc đa thức kết quả
    ketqua.SoMu = a.SoMu + b.SoMu; 

    // Xét hệ số đa thức kết quả
    int i, j;
    for(i = 0; i <= a.SoMu; i++)
    {
        for(j = 0; j <= b.SoMu; j++)
        {
            ketqua.HeSo[i + j] += a.HeSo[i] * b.HeSo[j];
        }
    }
    return ketqua;
}

/*
   0    1    2    3
   ----------------------
N:  -42    0  -12    1        degree = 3
D:   -3    1    0    0        degree = 1

   d(N) - d(D) = 2, so let's shift D towards right by 2:

N:  -42    0  -12    1
d:    0    0   -3    1

   N(3)/d(3) = 1, so d is unchanged. Now remember that "shifting by 2"
   is like multiplying by x2, and the final multiplication
   (here by 1) is the coefficient of this monomial. Let's store this
   into q:
                               0     1     2
                              ---------------
                          q:   0     0     1

   now compute N - d, and let it be the "new" N, and let's loop

N:  -42    0   -9    0        degree = 2
D:   -3    1    0    0        degree = 1

   d(N) - d(D) = 1, right shift D by 1 and let it be d

N:  -42    0   -9    0
d:    0   -3    1    0        * -9/1 = -9

                          q:   0    -9     1

d:    0   27   -9    0        

   N ← N - d

N:  -42  -27    0    0        degree = 1
D:   -3    1    0    0        degree = 1

   looping again... d(N)-d(D)=0, so no shift is needed; we
   multiply D by -27 (= -27/1) storing the result in d, then

                          q:  -27   -9     1

   and

N:  -42  -27    0    0        -
d:   81  -27    0    0        =
N: -123    0    0    0        (last N)

    d(N) < d(D), so now r ← N, and the result is:

       0   1  2
   -------------
q:   -27  -9  1   →  x2 - 9x - 27
r:  -123   0  0   →          -123
*/
// Bài 496: Tính thương 2 đa thức


// Bài 498: Tính đạo hàm cấp 1 đa thức ( chưa test)

DATHUC TinhDaoHamCap1(DATHUC dt)
{
    DATHUC ketqua;
    KhoiTaoDaThucRong(ketqua);

    // bậc của đa thức kết quả
    ketqua.SoMu = dt.SoMu - 1;

    // hệ số của đa thức kết quả
    for(int i = dt.SoMu; i >= 0; i--)
    {        
        ketqua.HeSo[i - 1] = dt.HeSo[i] * i;
    }
    return ketqua;
}

// Bài 499: Tính đạo hàm cấp k của đa thức ( chưa test)

DATHUC TinhDaoHamCapk(DATHUC dt, int k)
{
    DATHUC ketqua = dt;
    for(int i = 0; i < k; i++)
    {
        ketqua = TinhDaoHamCap1(ketqua);
    }
    return ketqua;
}

// Bài 500: Tính giá trị của đa thức tại x = x0 ( chưa test)
float TinhGiaTri(DATHUC dt, float x0) 
{
    float kq = 0;

    for (int i=dt.SoMu; i>=0; i--)
        kq = kq + dt.HeSo[i] * pow(x0, i);

    return kq;
}
int main()
{
    DATHUC kq;
    DATHUC dt1, dt2;
    NhapDaThuc(dt1);
    XuatDaThuc(dt1, "Da thuc 1: ");

    NhapDaThuc(dt2);
    XuatDaThuc(dt2, "Da thuc 2: ");
    XuatDaThuc(TinhTong2DaThuc(dt1, dt2), "Da thuc 1 + Da thuc 2 = ");
    XuatDaThuc(TinhHieu2DaThuc(dt1, dt2), "Da thuc 1 - Da thuc 2 = ");
    XuatDaThuc(TinhTich2DaThuc(dt1, dt2), "Da thuc 1 * Da thuc 2 = ");
    //XuatDaThuc(TinhThuong2DaThuc(dt1, dt2), "Da thuc 1 / Da thuc 2 = ");

    
    XuatDaThuc(TinhDaoHamCap1(dt1), "Dao ham cap 1 = ");

    getch();
    return 0;
}