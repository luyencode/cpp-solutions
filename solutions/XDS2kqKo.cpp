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

float TinhTBNhanCacSoDuong(int a[], int n)
{
    int Tich = 1;
    float dem = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] > 0)
        {
            Tich *= a[i];
            dem++;
        }
    }
    if(dem == 0)
    {
        printf("\nMang khong co so thoa yeu cau");
        return 0;
    }
    return pow(Tich,1.0/dem);
}
int main()
{
    int n;
    int a[MAX];
    int x;

    nhap(a, n);
    xuat(a, n);

    float TBN = TinhTBNhanCacSoDuong(a, n);
    printf("\nTrung binh cong cac so duong = %.3f", TBN);

    getch();
    return 0;
}