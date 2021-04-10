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

int demDuong(float a[], int n)
{
    /*if(n == 0)
        return 0;
    int dem = demDuong(a, n - 1);
    if(a[n - 1] > 0)
        dem++;
    return dem;*/

    if(n == 0)
        return 0;
    if(a[n - 1] > 0)
        return 1 + demDuong(a, n - 1);
    return demDuong(a, n - 1);
}
int main()
{
    int n;
    float a[MAX];

    nhap(a, n);
    xuat(a, n);

    int dem = demDuong(a, n);
    printf("\nCo %d so duong", dem);

    getch();
    return 0;
}