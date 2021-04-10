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

void TimMinMax(int a[], int n, int &max, int &min)
{
    max = a[0];
    min = a[0];
    for(int i = 1; i < n; i++)
    {
        max = (a[i] > max) ? a[i] : max;
        min = (a[i] < min) ? a[i] : min;
    }
}

void DoiMaxBangMinVaNguocLai(int a[], int n, int max, int min)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] == max)
        {
            a[i] = min;
        }
        else if(a[i] == min)
        {
            a[i] = max;
        }
    }
}
int main()
{
    int n, min, max;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);
    TimMinMax(a, n, max, min);
    printf("\nDao nguoc min bang max va nguoc lai: ");
    DoiMaxBangMinVaNguocLai(a, n, max, min);
    xuat(a, n);


    getch();
    return 0;
}