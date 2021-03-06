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

int TinhTongCacPhanTuLonHonTriTuyetDoiCuaPhanTuDungLienSauNo(int a[], int n)
{
    int Tong = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] > abs(a[i + 1]))
        {
            Tong += a[i];
        }
    }
    return Tong;
}
int main()
{
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);
    int tong = TinhTongCacPhanTuLonHonTriTuyetDoiCuaPhanTuDungLienSauNo(a, n);
    printf("\nTong bang %d", tong);

    getch();
    return 0;
}