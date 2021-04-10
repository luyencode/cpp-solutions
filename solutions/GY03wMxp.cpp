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

int TimMax(int a[], int n)
{
    int max = a[0];
    for(int i = 1; i < n; i++)
    {
        max = a[i] > max ? a[i] : max;
    }
    return max;
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
    printf("\n");
}

int KiemTraCoMax(int b[], int nb, int max)
{
    for(int i = 0; i < nb; i++)
    {
        if(b[i] == max)
        {
            return 1;
        }
    }
    return 0;
}
void LietKeDayConTangDanVaChuaGiaTriMax(int a[], int n, int max)
{
    int ChieuDai;
    int b[MAX], nb;
    for(int i = 0; i < n; i++)
    {
        for(ChieuDai = 1; ChieuDai <= n; ChieuDai++)
        {
            nb = 0;
            for(int j = i; j < ChieuDai; j++)
            {
                b[nb] = a[j];
                nb++;
            }
            if(KiemTraTangDan(b, nb) == 1)
            {
                if(KiemTraCoMax(b, nb, max) == 1)
                {
                XuatMangCon(b, nb);
                }
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

    int max = TimMax(a, n);
    printf("\nLiet ke cac day con tang va chua gia tri max: \n");
    LietKeDayConTangDanVaChuaGiaTriMax(a, n, max);

    getch();
    return 0;
}