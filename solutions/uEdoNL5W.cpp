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

// nguyên tố => true
int KiemTraNguyenTo(int n)
{
    if (n < 2)
    {
        return 0;
    }
    else if (n > 2)
    {
        if (n % 2 == 0)
        {
            return 0;
        }
        for (int i = 3; i <= sqrt((float)n); i += 2)
        {
            if (n % i == 0)
            {
                return 0;
            }
        }
    }
    return 1;
}

int TimViTriSoNguyenToDau(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(KiemTraNguyenTo(a[i]) == 1)
        {
            return i;
        }
    }
    return 0;
}

int TimSoNguyenToLonNhat(int a[], int n, int vitringuyentodau)
{
    int nguyentomax = a[vitringuyentodau];
    for (int i = vitringuyentodau + 1; i < n; i++)
    {
        if (KiemTraNguyenTo(a[i]) == 1 && a[i] > nguyentomax)
        {
            nguyentomax = a[i];
        }
    }
    return nguyentomax;
}
int main()
{
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);

    int vitringuyentodau = TimViTriSoNguyenToDau(a, n);
    //printf("\nVi tri nguyen to dau la %d",  vitringuyentodau);

    if(vitringuyentodau == 0)
    {
        printf("\nMang khong co so nguyen to");
    }
    else
    {
        int nguyentomax = TimSoNguyenToLonNhat(a, n, vitringuyentodau);
        printf("\nSo nguyen to lon nhat la %d", nguyentomax);
    }

    getch();
    return 0;
}