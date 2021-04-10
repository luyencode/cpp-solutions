/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100

void nhap (int a[], int &n)
{
    do
    {
        printf("\nNhap so phan tu: ");
        scanf("%d", &n);
        if(n <= 0 || n > MAX)
        {
            printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
        }
    }while(n <= 0 || n > MAX);
    for(int i = 0; i < n; i++)
    {
        printf("\nNhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

void xuat(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%4d", a[i]);
    }
}

int KiemTraTangDan(int b[], int nb)
{
    for(int i = 0; i < nb - 1; i++)
    {
        if(b[i] > b[i + 1])
        {
            return 0;
        }
    }
    return 1;
}

void XuatMangCon(int b[], int nb)
{
    for(int i = 0; i < nb; i++)
    {
        printf("%4d", b[i]);
    }
}

int TongMangCon(int b[], int nb)
{
    int Tong = 0;
    for(int i = 0; i < nb; i++)
    {
        Tong += b[i];
    }
    return Tong;
}
void TinhTongTungMangConTang(int a[], int n)
{
    int ChieuDaiCon, Tong;
    int b[MAX], nb;
    for(int i = 0; i < n; i++)
    {
        for(ChieuDaiCon = 1; ChieuDaiCon <= n; ChieuDaiCon++)
        {
            nb = 0;
            for(int j = i; j < ChieuDaiCon; j++)
            {
                b[nb] = a[j];
                nb++;
            }
            if(KiemTraTangDan(b, nb) == 1)
            {
                XuatMangCon(b, nb);
                Tong = TongMangCon(b, nb);
                printf("\tTong mang nay: %d\n", Tong);
            }
        }
    }
}
int main()
{
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);

    
    printf("\nTinh Tong tung mang con tang: \n");
    TinhTongTungMangConTang(a, n);

    getch();
    return 0;
}