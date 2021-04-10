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

int timvitriamdau(float a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] < 0)
        {
            return i;
        }
    }
    return -1;
}

float amlonnhat(float  a[], int n, int vitriamdau)
{
    float AmMax = a[vitriamdau];

    for (int i = vitriamdau + 1; i < n; i++)
    {
        if (a[i] < 0 && a[i] > AmMax)
        {
            AmMax = a[i];
        }
    }
    return AmMax;
}

int main()
{
    int n;
    float a[MAX];

    nhap(a, n);
    xuat(a, n);
    int vitriamdau = timvitriamdau(a, n);
    if(vitriamdau == -1)
    {
        printf("\nMang khong co so am");
    }
    else
    {
        float AmMax = amlonnhat(a, n, vitriamdau);
        printf("\nSo am lon nhat la: %.3f", AmMax);
    }
    getch();
    return 0;
}