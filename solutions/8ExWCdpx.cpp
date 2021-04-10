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

void XuatMangCon(int b[], int nb)
{
    for(int i = 0; i < nb; i++)
    {
        printf("%4d", b[i]);
    }
    printf("\n");
}
int KiemTraGiamDan(int b[], int nb)
{
    for(int i = 0; i < nb - 1; i++)
    {
        if(b[i] < b[i + 1])
        {
            return 0;
        }
    }
    return 1;
}

void DemMangConGiam(int a[], int n)
{
    int ChieuDaiCon, dem = 0;
    int b[MAX], nb;
    for(int i = 0; i < n; i++)
    {
        for(ChieuDaiCon = 1 + i; ChieuDaiCon <= n; ChieuDaiCon++)  
        {
            nb = 0;
            for(int j = i; j < ChieuDaiCon; j++)
            {
                b[nb] = a[j];
                nb++;
            }
            if(KiemTraGiamDan(b, nb) == 1)
            {
                XuatMangCon(b, nb);
                dem++;
            }
        }
    }
    printf("\nTong so mang con giam can tim: %d\n", dem);
}
int main()
{
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);

    printf("\nLiet ke mang con giam\n");
    DemMangConGiam(a, n);

    getch();
    return 0;
}