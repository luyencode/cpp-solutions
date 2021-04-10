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
int KiemTraNguyenTo(int x)   // => C không có true, false => nên dùng kiểu int
{
    if (x < 2)
    {
        return 0;
    }
    else if (x > 2)
    {
        if (x % 2 == 0)
        {
            return 0;
        }
        for (int i = 3; i <= sqrt((float)x); i += 2)
        {
            if (x % i == 0)
            {
                return 0;
            }
        }
    }
    return 1;
}

int KiemTraBiTrung(int a[], int n, int index)
{
    for (int i = index - 1; i >= 0; i--)
    {
        if (a[i] == a[index])
        {
            return 0; // Bị trùng
        }
    }
    return 1; // Không bị trùng
}

int DemSoLuongSoNguyenToPhanBiet(int a[], int n)
{
    int dem = 0;
    for(int i = 0; i < n; i++)
    {
        int CheckTrung = KiemTraBiTrung(a, n, i);
        {
            if (CheckTrung == 1)  // chỉ xử lý khi không trùng
            {
                if(KiemTraNguyenTo(a[i]) == 1)
                {
                    dem++;
                }
            }
        }
    }
    return dem;
}
int main()
{
    int n;
    int a[MAX];

    printf("\nNhap mang a:");
    nhap(a, n);
    xuat(a, n);

    
    int dem = DemSoLuongSoNguyenToPhanBiet(a, n);
    printf("\nSo luong so nguyen to phan biet = %d", dem);

    getch();
    return 0;
}