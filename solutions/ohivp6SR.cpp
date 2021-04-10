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
        if (n % 2 == 0)
        {
            return false;
        }
        for (int i = 3; i <= sqrt((float)n); i += 2)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
    }
    return true;
}

int TimSoLonNhat(int a[], int n)
{
   int max = a[0];
   for(int i = 1; i < n; i++)
      max = (max > a[i]) ? max : a[i];
   return max;
}

int TimNguyenToNhoNhatLonHonMoiGiaTriTrongMang(int a[], int n)
{
    int max = TimSoLonNhat(a, n);
    int SoCanTim = max + 1;
    for(SoCanTim = max + 1;; SoCanTim++)
    {
        if(max < SoCanTim)
        {
            if(KiemTraNguyenTo(SoCanTim) == 1)
            break;
        }
    }
    return SoCanTim;
}
int main()
{
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);

    int Kq = TimNguyenToNhoNhatLonHonMoiGiaTriTrongMang(a, n);
    printf("\nKet qua la %d", Kq);

    getch();
    return 0;
}