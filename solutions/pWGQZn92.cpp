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

void Xoa1PhanTu(float a[], int &n, int ViTriXoa)
{
    for(int i = ViTriXoa; i < n; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
}

float TimMax(float a[], int n)
{
    float max = a[0];
    for(int i = 1; i < n; i++)
    {
        max = (max < a[i]) ? a[i] : max;
    }
    return max;
}

void XoaCacSoLonNhat(float a[], int &n)
{
    float max =TimMax(a, n);
    for(int i = 0; i < n; i++)
    {
        if(a[i] == max)
        {
            Xoa1PhanTu(a, n, i);
            i--;
        }
    }
}
void xuat(float a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%8.3f", a[i]);
    }
}

int main()
{
    int n;
    float a[MAX];

    nhap(a, n);
    xuat(a, n);
    XoaCacSoLonNhat(a, n);
    printf("\nMang sau khi xoa cac gia tri lon nhat: ");
    xuat(a, n);

    getch();
    return 0;
}