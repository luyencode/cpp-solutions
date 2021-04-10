/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100

void nhap (float a[], int &n)
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
        scanf("%f", &a[i]);
    }
}

void xuat(float a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%8.3f", a[i]);
    }
}

float TimAmCuoiCung(float a[], int n)
{
    for(int i = n - 1; i >= 0; i--)
    {
        if(a[i] > -1 && a[i] < 0)
        {
            return a[i];
        }
    }
    return -1.0;
}
int main()
{
    int n;
    float a[MAX];
    float b[MAX];

    nhap(a, n);
    xuat(a, n);
    float ketqua = TimAmCuoiCung(a, n);
    printf("\nGia tri am cuoi cung lon hon gia tri -1 la: %.3f", ketqua);
    
    getch();
    return 0;
}