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

int KiemTraHoanThien(int n)
{
    int tong = 0;
    for(int i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            tong += i;
        }
    }
    if(tong == n)
    {
        return 1;
    }
    else
    {
    return 0;
    }
}
void HoanVi(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void SapXepHoanThienGiamDan(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        if(KiemTraHoanThien(a[i]) == 1)
        {
            for(int j = i + 1; j < n; j++)
            {
                if(KiemTraHoanThien(a[j]) == 1 && a[i] < a[j])
                {
                    HoanVi(a[i], a[j]);
                }
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

    SapXepHoanThienGiamDan(a, n);
    printf("\nMang sau khi sap xep hoan thien giam dan: ");
    xuat(a, n);

    getch();
    return 0;
}