/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100

void nhap (float a[], int &n)
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
        scanf("%f", &a[i]);
    }
}

void xuat(float a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%8.3f", a[i]);
    }
}

float TinhTongCacPhanTuDuong(float a[], int n)
{
    int Tong = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] > 0)
        {
            Tong += a[i];
        }
    }
    return Tong;
}
int main()
{
    int n;
    float a[MAX];

    nhap(a, n);
    xuat(a, n);
    float tongDuong = TinhTongCacPhanTuDuong(a, n);
    printf("\nTong cac phan tu duong trong mang la: %.3f", tongDuong);

    getch();
    return 0;
}