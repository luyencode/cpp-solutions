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

int KiemTraToanLe(int n)
{
    int dv;
    while (n != 0)
    {
        dv = n % 10;
        if (dv % 2 == 0) 
            return 0;
        n = n / 10;
    }
    return 1;
}

int TimSoToanChuSoLeMax(int a[], int n)
{
    int max;
    int dem = 0;
    for(int i = 0; i < n; i++)
    {
        if(KiemTraToanLe(a[i]) == 1)
        {
            max = a[i]; // max lúc này là a[i]
            dem++;  // Đếm là 1
            break;     // lập tức thoát ra
        }
    }
    if(dem == 0)
    {
        return 0;
    }
    for(int i = 0; i < n; i++)
    {
        if (KiemTraToanLe(a[i]) == 1)
        {
            max = ( max > a[i]) ? max : a[i] ;
        }
    }
    return max;
}
int main()
{
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);

    int Kq = TimSoToanChuSoLeMax(a, n);
    printf("\nKet qua la %d", Kq);


    getch();
    return 0;
}