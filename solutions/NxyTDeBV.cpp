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

// Nếu không có lẻ thì trả về -1
int TimViTriLeDauTien(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            return i;
        }
    }
    return -1;
}
int TimSoLeNhoNhat(int a[], int n, int ViTriDauTien)
{
    int MinLe = a[ViTriDauTien];

    for (int i = ViTriDauTien + 1; i < n; i++)
    {
        if (a[i] % 2 != 0 && a[i] < MinLe)
        {
            MinLe = a[i];
        }
    }
    return MinLe;
}
int main()
{
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);
    
    int ViTriLeDauTien = TimViTriLeDauTien(a, n);
    if (ViTriLeDauTien == -1)
    {
        printf("\nMang khong ton tai so le");
    }
    else
    {
        int MinLe = TimSoLeNhoNhat(a, n, ViTriLeDauTien);
        int SoChanThoa = MinLe - 1;
        printf("\nSo chan lon nhat nho hon toan bo gia tri le trong mang la %d", SoChanThoa);
    }
    getch();
    return 0;
}