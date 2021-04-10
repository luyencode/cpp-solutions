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

int KiemTraDoiXung(int n)
{
    int dv = 0;
    int daonguoc = 0;
    int tam = n;
    while(tam > 0)
    {
        dv = tam % 10;
        tam /= 10;
        daonguoc = daonguoc * 10 + dv;
    }
    if(daonguoc == n)
    {
        return 1;
    }
    return 0;
}

int DemSoDoiXung(int a[], int n)
{
    int dem = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] < 0)
        {
            break;
        }
        if(KiemTraDoiXung(a[i]) == 1)
        {
            dem++;
        }
    }
    return dem;
}

int main()
{
    int n;
    int a[MAX];
    int x;

    nhap(a, n);
    xuat(a, n);

    int SoDoiXung = DemSoDoiXung(a, n);
    printf("\nSo luong so doi xung la %d", SoDoiXung);
    

    getch();
    return 0;
}