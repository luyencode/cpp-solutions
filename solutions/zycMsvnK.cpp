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

void DoiCho(int a[], int n, int ViTriDoi)
{
    int tam = a[ViTriDoi];
    for(int i = ViTriDoi; i > 0; i--)
    {
        a[i] = a[i - 1];      
    }
    a[0] = tam;
}

void DuaSoChiaHetCho3VeDau(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 3 == 0)
        {
            DoiCho(a, n, i);
        }
    }
}
int main()
{
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);
    DuaSoChiaHetCho3VeDau(a, n);
    printf("\nDua tat ca so chia het cho 3 ve dau mang: ");
    xuat(a, n);

    getch();
    return 0;
}