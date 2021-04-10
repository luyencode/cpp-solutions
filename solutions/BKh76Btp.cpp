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
void TaoMangBChuaSoNguyenToTuMangA(int a[], int n)
{
    int b[MAX], nb = 0;
    for(int i = 0; i < n; i++)
    {
        if(KiemTraNguyenTo(a[i]) == 1)
        {
            b[nb] = a[i];
            nb++;
        }
    }
    xuat(b, nb);
}
int main()
{
    int n, m;
    int a[MAX];

    printf("\nNhap mang: ");
    nhap(a, n);
    xuat(a, n);

    printf("\nMang b chua so nguyen to tu mang a: \n");
    TaoMangBChuaSoNguyenToTuMangA(a, n);

    getch();
    return 0;
}