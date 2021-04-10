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

void HoanVi(int &a, int &b)
{
    int tam = a;
    a = b;
    b = tam;
}

void DaoNguocThuTuCacSoChan(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[j] % 2 == 0 && a[i] % 2 == 0)
            {
                HoanVi(a[i], a[j]);
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
    DaoNguocThuTuCacSoChan(a, n);
    printf("\nDao nguoc thu tu cac so chan: ");
    xuat(a, n);

    getch();
    return 0;
}