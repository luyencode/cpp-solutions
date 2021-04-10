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

void Xoa1PhanTu(int a[], int &n, int ViTriXoa)
{
    for(int i = ViTriXoa; i < n; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
}

void XoaCacPhanTuTrungVoiX(int a[], int &n, int x)
{
    for(int i = 0; i < n; i++)
    {
        if((a[i]) == x)
        {
            Xoa1PhanTu(a, n, i);
            i--;
        }
    }
}
int main()
{
    int n;
    int a[MAX];

    int ViTriXoa, x;
    nhap(a, n);
    xuat(a, n);

    printf("\nNhap x: ");
    scanf("%d", &x);

    XoaCacPhanTuTrungVoiX(a, n, x);
    printf("\nMang sau khi xoa tat cac cac gia tri trung voi %d: ", x);
    xuat(a, n);
    getch();
    return 0;
}