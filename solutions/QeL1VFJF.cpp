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
int SoGanh(int x)
{
    int SoDao = 0;
    int themang = x;
    while (themang != 0)
    {
        SoDao = SoDao * 10 + themang % 10;
        themang /= 10;
    }
    if(x == SoDao)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int TimSoGanhDauTien(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (SoGanh(a[i]) == 1)
        {
            return a[i];
        }
    }
    return -1;
}

int main()
{
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);

    int GanhDau = TimSoGanhDauTien(a, n);
    printf("\nSo ganh dau tien la: %d", GanhDau);

    getch();
    return 0;
}