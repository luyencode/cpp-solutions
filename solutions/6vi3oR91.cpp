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
bool KiemTraNguyenTo(int n)
{
    if (n < 2)
    {
        return false;
    }
    else if (n > 2)
    {
        if (n % 2 == 0)  // nếu là số chẵn
        {
            return false;
        }
        for (int i = 3; i <= sqrt((float)n); i += 2)   // kiểm tra các số lẻ
        {
            if (n % i == 0)
            {
                return false;
            }
        }
    }
    return true;
}

int demnguyento(int a[], int n)
{
    int dem = 0;
    for(int i = 0; i < n; i++)
    {
        if(KiemTraNguyenTo(a[i]) == true && a[i] < 100)
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

    nhap(a, n);
    xuat(a, n);

    int dem = demnguyento(a, n);
    printf("\nSo luong cac so nguyen to la: %d", dem);
    
    getch();
    return 0;
}