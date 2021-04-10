/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
struct DonThuc
{
    float HeSo;
    int SoMu;
};
typedef struct DonThuc DONTHUC;

void NhapDonThuc(DONTHUC &);
void XuatDonThuc(DONTHUC);
DONTHUC TinhTich2DonThuc(DONTHUC, DONTHUC);
DONTHUC TinhThuong2DonThuc(DONTHUC, DONTHUC);
DONTHUC TinhDaoHamCap1(DONTHUC);
DONTHUC TinhDaoHamCapk(DONTHUC, int);
double TinhGiaTriDonThuc(DONTHUC, int);
DONTHUC operator * (DONTHUC, DONTHUC);
DONTHUC operator / (DONTHUC, DONTHUC);
void NhapDonThuc(DONTHUC &dt)
{
    float temp;
    printf("\nNhap he so: ");
    scanf("%f", &temp);
    dt.HeSo = temp;

    printf("\nNhap bac don thuc: ");
    scanf("%d", &dt.SoMu);
}

void XuatDonThuc(DONTHUC dt)
{
    printf("%8.3fx^%d", dt.HeSo, dt.SoMu);
}
/* Bài 486: Tính tích 2 đơn thức
Muốn nhân 2 đơn thức chứa hệ số và biến số, ta nhân từng hệ số của các vế với nhau và nhân từng biến số của các vế với nhau rồi ra đáp án
*/
DONTHUC TinhTich2DonThuc(DonThuc a, DonThuc b)
{
    DonThuc c;
    c.HeSo = a.HeSo * b.HeSo;
    c.SoMu = a.SoMu + b.SoMu;
    return c;
}
/*
Bài 487: Tính đạo hàm cấp 1 đơn thức
ax^n = n.ax^n - 1
*/
DONTHUC TinhDaoHamCap1(DONTHUC a)
{
    DonThuc c;
    c.HeSo = a.HeSo * a.SoMu;
    c.SoMu = a.SoMu - 1;
    return c; 

}
/*
Bài 488: Tính thương 2 đa thức
Muốn chia 2 đơn thức chứa hệ số và biến số, ta chia từng hệ số của các vế với nhau và chia từng biến số của các vế với nhau rồi ra đáp án
*/

DONTHUC TinhThuong2DonThuc(DONTHUC a, DONTHUC b)
{
    DonThuc c;
    c.HeSo = a.HeSo / b.HeSo;
    c.SoMu = a.SoMu - b.SoMu;
    return c;
}

/*
Bài 489: Tính đạo hàm cấp k của đơn thức
đơn thức ax^n
đạo hàm cấp 1: n.ax^n-1
đạo hàm cấp 2: n.n-1.ax^n-2 (đạo hàm của đạo hàm cấp 1)
đạo hàm cấp 3: n.n-1.n-2.ax^n-3 (đạo hàm của đạo hàm cấp 2)
*/

DONTHUC TinhDaoHamCapk(DONTHUC a, int k)
{
    while(k != 0)
    {
        a = TinhDaoHamCap1(a);
        k--;
    }
    return a;
}

/*
Bài 490: Tính giá trị đơn thức tại vị trí x = x0
y = ax^n 
thay x = x0 (ví dụ x = 5)
=> y = a.5^n
*/

double TinhGiaTriDonThuc(DONTHUC a, int x)
{
    return a.HeSo * pow((double)x, a.SoMu);
}

//491 Định nghĩa toán tử (operator *) cho 2 đơn thức
DONTHUC operator * (DONTHUC a, DONTHUC b)
{
    DonThuc c;
    c.HeSo = a.HeSo * b.HeSo;
    c.SoMu = a.SoMu + b.SoMu;
    return c;
}

//492 Định nghĩa toán tử (operator /) cho 2 đơn thức
DONTHUC operator / (DONTHUC a, DONTHUC b)
{
    DonThuc c;
    c.HeSo = a.HeSo / b.HeSo;
    c.SoMu = a.SoMu - b.SoMu;
    return c;
}
int main()
{
    int k, x;
    DONTHUC a, b;
    DONTHUC ketqua1, ketqua2, ketqua3, ketqua4;
    NhapDonThuc(a);
    XuatDonThuc(a);

    NhapDonThuc(b);
    XuatDonThuc(b);

    ketqua1 = TinhTich2DonThuc(a, b);
    printf("\nTich 2 don thuc = %8.3fx^%d", ketqua1.HeSo, ketqua1.SoMu);
    ketqua2 = TinhThuong2DonThuc(a, b);
    printf("\nThuong 2 don thuc = %8.3fx^%d", ketqua2.HeSo, ketqua2.SoMu);
    ketqua3 = TinhDaoHamCap1(a);
    printf("\nDao ham cap 1 cua don thuc = %8.3fx^%d", ketqua3.HeSo, ketqua3.SoMu);

    do{
        printf("\nNhap k: ");
        scanf("%d", &k);
        if(k < 0 || k > b.SoMu)
        {
            printf("\nk khong hop le. Xin nhap lai!");
        }
    }while(k < 0 || k > b.SoMu);
    ketqua4 = TinhDaoHamCapk(b, k);
    printf("\nDao ham cap %d cua don thuc = %8.3fx^%d",k , ketqua4.HeSo, ketqua4.SoMu);

    printf("\nNhap x: ");
    scanf("%d", &x);
    double giatri = TinhGiaTriDonThuc(a, x);
    printf("\nGia tri don thuc a khi x = %d la: %.3f", x, giatri);


    DONTHUC c = a * b;
    printf("\nKet qua don thuc a nhan don thuc b = %8.3fx^%d", c.HeSo, c.SoMu);

    DONTHUC d = a / b;
    printf("\nKet qua don thuc a chia don thuc b = %8.3fx^%d", d.HeSo, d.SoMu);
    getch();
    return 0;
}